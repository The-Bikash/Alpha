module;
#include <new>
export module Memory;
import core;
import utility;
import typetraits;
namespace alpha {
    struct Node {
        Node* _Next = nullptr;
        char* _Ptr = nullptr;
    };

    struct NodeList {
        Node* _Head = nullptr;
        size_t _NodeCount = 0;
        size_t _Size = 0;

        ~NodeList()noexcept {
            if (_Head != nullptr) {
                auto* _Next = _Head;
                while (true) {
                    if (_Next->_Ptr != nullptr) {
                        operator delete[](static_cast<void*>(_Next->_Ptr), _Size);
                        _Next->_Ptr = nullptr;
                    }
                    _Head = _Next->_Next;
                    operator delete(_Next, sizeof(Node));
                    _Next = _Head;
                    if (_Next == nullptr)
                        break;
                }
            }
        }

        inline constexpr void insert_front(Node* _NewHead)noexcept {
            if constexpr (_debug) {
                if (_NewHead == nullptr)
                    return;
            }
            auto* _NextNode = _Head;
            _Head = _NewHead;
            _Head->_Next = _NextNode;
            ++_NodeCount;
        }
        inline constexpr Node* pop()noexcept {
            if (_Head == nullptr) {
                auto* _NewNode = static_cast<Node*>(operator new(sizeof(Node)));
                _NewNode->_Ptr = static_cast<char*>(operator new[](_Size));
                _NewNode->_Next = nullptr;
                return _NewNode;
            }

            auto* _head = _Head;
            _Head = _Head->_Next;
            _head->_Next = nullptr;
            --_NodeCount;
            return _head;
        }
        inline constexpr Node* pop(char* _Pointer)noexcept {
            if (_Head->_Ptr == _Pointer) {
                auto* _Node = _Head;
                _Head = _Head->_Next;
                _Node->_Next = nullptr;
                --_NodeCount;
                return _Node;
            }

            auto* _NextNode = _Head->_Next;
            auto* _PreviousNode = _Head;
            while (true) {
                if constexpr (_debug) {
                    if (_NextNode == nullptr)
                        __debugbreak();
                }
                if (_NextNode->_Ptr == _Pointer) {
                    _PreviousNode->_Next = _NextNode->_Next;
                    _NextNode->_Next = nullptr;
                    --_NodeCount;
                    return _NextNode;
                }
                _PreviousNode = _NextNode;
                _NextNode = _NextNode->_Next;
            }
        }
    };

    struct MemoryChunk {
        NodeList _AvailableNodes;
        NodeList _AllocatedNodes;
    };

    export class MemoryEngine {
    public:
        MemoryEngine() {
            for (int i = 0; i < 64; ++i) {
                _Chunks[i]._AvailableNodes._Size = _Chunks[i]._AllocatedNodes._Size = 1ULL << i;
            }
        }
        static constexpr void* malloc(size_t& _Size)noexcept {
            return _Malloc(_index(_Size));
        }
        static constexpr void* realloc(void* _Ptr, size_t _Size, size_t& _NewSize)noexcept {
            return _Realloc(_Ptr, _index(_Size), _index(_NewSize));
        }
        static constexpr void free(void* _Ptr, size_t _Size)noexcept {
            _Free(_Ptr, _index(_Size));
            return;
        }
    private:
        static inline constexpr void* _Malloc(char _idx)noexcept {
            _CurrentMemoryUseStatus += (1ULL << _idx);
            _CurrentPoolSizeStatus += (1ULL << _idx);
            auto* _Node = _Chunks[_idx]._AvailableNodes.pop();
            _Chunks[_idx]._AllocatedNodes.insert_front(_Node);
            return static_cast<void*>(_Node->_Ptr);
        }
        static inline constexpr void _Free(void* _Ptr, char _idx)noexcept {
            if constexpr (_debug) {
                if (_Ptr == nullptr)
                    return;
                if (_idx > 63 || _idx < 0)
                    __debugbreak();
            }

            _Chunks[_idx]._AvailableNodes.insert_front(_Chunks[_idx]._AllocatedNodes.pop(static_cast<char*>(_Ptr)));

            if (_Condition())
                _AI_Destructor();
        }
        static inline constexpr void* _Realloc(void* _Ptr, char _idx1, char _idx2)noexcept {
            if (_idx1 == _idx2)
                return _Ptr;
            auto* _NewPtr = _Malloc(_idx2);
            memcpy(_NewPtr, _Ptr, 1ULL << (_idx1 < _idx2 ? _idx1 : _idx2));
            _Free(_Ptr, _idx1);
            return _NewPtr;
        }
        static inline constexpr char _index(size_t& Size)noexcept {
            char _idx = 0;
            size_t size = 1;
            while (size < Size) {
                size <<= 1;
                ++_idx;
            }
            Size = size;
            return _idx;
        }
    private:
        static inline constexpr bool _Condition()noexcept {
            return false;
        }
        static inline constexpr void _AI_Destructor()noexcept {

        }
    private:
        static MemoryChunk _Chunks[64];
        static size_t _CurrentMemoryUseStatus;
        static size_t _CurrentPoolSizeStatus;
    };

    size_t MemoryEngine::_CurrentMemoryUseStatus = 0;
    size_t MemoryEngine::_CurrentPoolSizeStatus = 0;
    MemoryChunk MemoryEngine::_Chunks[64]{};
    MemoryEngine ____object;


    export template<class _Ty, class Engine = MemoryEngine>
    class allocator {
    public:
        using _From_primary = allocator;

        using value_type = _Ty;
        using size_type = size_t;
        using difference_type = ptrdiff_t;
        using propagate_on_container_move_assignment = true_type;
        using is_always_equal = true_type;

        __declspec(allocator) _Ty* allocate(size_t _Count) {
           // static_assert(sizeof(value_type) > 0, "value_type must be complete before calling allocate.");
            auto _Size = _Count * sizeof(_Ty);
            return static_cast<_Ty*>(Engine::malloc(_Size));
        }
        void deallocate(_Ty* const _Ptr, const size_t _Count) {
            if (_Ptr != nullptr)
                Engine::free(_Ptr, _Count * sizeof(_Ty));
        }
        static constexpr size_t _Minimum_allocation_alignment = 8;
    };
}