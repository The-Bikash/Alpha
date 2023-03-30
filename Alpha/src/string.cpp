module;

module string;

import core;

namespace alpha {
	
	inline constexpr size_t _Fndsz(const size_t _Size) {
		size_t _Tmp = 16;
		while (_Tmp < _Size)
			_Tmp <<= 1;
		return _Tmp;
	}

	struct string::StringImpl {
		char* _Str;
		size_t _Siz;
		size_t _Cap;

		inline void _AllocateExactly(const size_t _Size)noexcept {
			_Cap = _Fndsz(_Size + 1);
			_Str = static_cast<char*>(malloc(_Cap));
		}

		inline void _Rlloc(const size_t _Size)noexcept {
			if (_Size < _Siz)
				_Siz = _Size;
			_Cap = _Fndsz(_Size + 1);
			_Str = static_cast<char*>(realloc(_Str, _Cap));
		}
	};

	string::string()noexcept {
		_Impl = static_cast<StringImpl*>(malloc(sizeof(StringImpl)));
		_Impl->_AllocateExactly(1);
		_Impl->_Siz = 0;
	}

	string::~string()noexcept {
		if (_Impl != nullptr) {
			free(_Impl->_Str);
			_Impl->_Str = 0;
			_Impl->_Siz = 0;
			_Impl->_Cap = 0;
			free(_Impl);
			_Impl = 0;
		}
	}

	string::string(const size_t _Siz)noexcept {
		_Impl = static_cast<StringImpl*>(malloc(sizeof(StringImpl)));
		_Impl->_AllocateExactly(_Siz);
		_Impl->_Siz = _Siz;
	}

	string::string(const char* _That)noexcept {
		_Impl = static_cast<StringImpl*>(malloc(sizeof(StringImpl)));
		_Impl->_Siz = strlen(_That);
		_Impl->_AllocateExactly(_Impl->_Siz);
		memcpy(_Impl->_Str, _That, _Impl->_Siz);
	}

	string::string(const string& _That)noexcept {
		_Impl = static_cast<StringImpl*>(malloc(sizeof(StringImpl)));
		_Impl->_Cap = _That._Impl->_Cap;
		_Impl->_Siz = _That._Impl->_Siz;
		_Impl->_Str = static_cast<char*>(malloc(_That._Impl->_Cap));
		memcpy(_Impl->_Str, _That._Impl->_Str, _Impl->_Siz);
	}

	string::string(string&& _That)noexcept {
		_Impl = _That._Impl;
		_That._Impl = 0;
	}




	string& string::operator=(const char* _That)noexcept {
		_Impl->_Siz = strlen(_That);
		if (_Impl->_Siz >= _Impl->_Cap) {
			free(_Impl->_Str);
			_Impl->_AllocateExactly(_Impl->_Siz);
		}
		memcpy(_Impl->_Str, _That, _Impl->_Siz);
		return *this;
	}

	string& string::operator=(const string& _That)noexcept {
		if (this != &_That) {
			if (_That._Impl->_Siz >= _Impl->_Cap) {
				free(_Impl->_Str);
				_Impl->_AllocateExactly(_That._Impl->_Siz);
			}
			_Impl->_Siz = _That._Impl->_Siz;
			memcpy(_Impl->_Str, _That._Impl->_Str, _That._Impl->_Siz);
		}
		return *this;
	}

	string& string::operator=(string&& _That)noexcept {
		if (this != &_That) {
			auto  _Tmp =  _Impl;
				  _Impl = _That._Impl;
			_That._Impl = _Tmp;
		}
		return *this;
	}

	string& string::operator+=(const string& _That)noexcept {
		auto _Tmp = _Impl->_Siz + _That._Impl->_Siz;
		if (_Tmp >= _Impl->_Cap)
			_Impl->_Rlloc(_Tmp);
		memcpy(_Impl->_Str + _Impl->_Siz, _That._Impl->_Str, _That._Impl->_Siz);
		_Impl->_Siz = _Tmp;
		return *this;
	}

	string& string::operator+=(const char* _Strng)noexcept {
		auto _Len = strlen(_Strng);
		auto _Tmp = _Impl->_Siz + _Len;
		if (_Tmp >= _Impl->_Cap)
			_Impl->_Rlloc(_Tmp);
		memcpy(_Impl->_Str + _Impl->_Siz, _Strng, _Len);
		_Impl->_Siz = _Tmp;
		return *this;
	}

	string& string::operator+=(const char _Char)noexcept {
		_Impl->_Str[_Impl->_Siz] = _Char;
		++_Impl->_Siz;
		if (_Impl->_Siz >= _Impl->_Cap)
			_Impl->_Rlloc(_Impl->_Siz);
		return *this;
	}

	string string::operator+(const string& _That)const noexcept {
		string _Tmp(_Impl->_Siz + _That._Impl->_Siz);
		memcpy(_Tmp._Impl->_Str, _Impl->_Str, _Impl->_Siz);
		memcpy(_Tmp._Impl->_Str + _Impl->_Siz, _That._Impl->_Str, _That._Impl->_Siz);
		return _Tmp;
	}

	string string::operator+(const char* _Strng)const noexcept {
		auto _Len = strlen(_Strng);
		string _Tmp(_Impl->_Siz + _Len);
		memcpy(_Tmp._Impl->_Str, _Impl->_Str, _Impl->_Siz);
		memcpy(_Tmp._Impl->_Str + _Impl->_Siz, _Strng, _Len);
		return _Tmp;
	}

	string string::operator+(const char _Char)const noexcept {
		string _Tmp(_Impl->_Siz + 1);
		memcpy(_Tmp._Impl->_Str, _Impl->_Str, _Impl->_Siz);
		_Impl->_Str[_Impl->_Siz] = _Char;
		return _Tmp;
	}

	string& string::assign(const string& _That, const unsigned long long _Pos, const unsigned long long _Len)noexcept {
		if constexpr (_debug)
			if (_Pos >= _That._Impl->_Siz || _Pos + _Len >= _That._Impl->_Siz)
				__debugbreak();

		if (_Len >= _Impl->_Cap)
			free(_Impl->_Str), _Impl->_AllocateExactly(_Len);
		_Impl->_Siz = _Len;
		memcpy(_Impl->_Str, _That._Impl->_Str + _Pos, _Len);
		return *this;
	}

	//string& string::insert(unsigned long long _Pos, const char _C) noexcept
	//{
	//	// TODO: insert return statement here
	//}

	/*string& string::assign(const char* _Strng, const unsigned long long _Len)noexcept {
		if (_Len >= Impl->_Cap) {
			free(Impl->_Str);
			Impl->_Alloc(_Len);
		}

		Impl->_Siz = _Len;
		iq::memcpy(Impl->_Str, _Strng, _Len);
		return *this;
	}

	string& string::assign(Cnt64_t _N, cnt08_t _C)noexcept {
		if (_N >= Impl->_Cap) iq::free(Impl->_Str), Impl->_Alloc(_N);
		Impl->_Siz = _N;
		iq::memset(Impl->_Str, _C, _N);
		return *this;
	}*/
//
//
//	string& string::insert(Cnt64_t _Pos, cstring Impl->_Strng, Cnt64_t _Len)noexcept {
//#ifdef _DEBUG
//		if (_Pos > Impl->_Siz)__debugbreak();
//#endif
//		auto Impl->_Size = Impl->_Siz + _Len;
//		if (Impl->_Size < Impl->_Cap) {
//			iq::memcpy(Impl->_Str + _Pos + _Len, Impl->_Str + _Pos, Impl->_Siz - _Pos);
//			iq::memcpy(Impl->_Str + _Pos, Impl->_Strng, _Len);
//		}
//		else {
//			auto _Tmp = Impl->_Str; Impl->_Alloc(Impl->_Size);
//			iq::memcpy(Impl->_Str, _Tmp, _Pos);
//			iq::memcpy(Impl->_Str + _Pos, Impl->_Strng, _Len);
//			iq::memcpy(Impl->_Str + _Pos + _Len, _Tmp + _Pos, Impl->_Siz - _Pos);
//			iq::free(_Tmp);
//		}
//		Impl->_Siz = Impl->_Size;
//		return *this;
//	}
//
//	string& string::insert(Cnt64_t _Pos, rstring _That)noexcept {
//		return insert(_Pos, _That.Impl->_Str, _That.Impl->_Siz);
//	}
//
//	string& string::insert(Cnt64_t _Pos, rstring _That, Cnt64_t _Subpos, Cnt64_t _Sublen)noexcept {
//#ifdef _DEBUG
//		if (_Subpos > _That.Impl->_Siz) __debugbreak();
//		if (_Subpos + _Sublen > _That.Impl->_Siz) __debugbreak();
//#endif
//		return insert(_Pos, _That.Impl->_Str + _Subpos, _Sublen);
//	}
//
//	string& string::insert(Cnt64_t _Pos, cstring Impl->_Strng)noexcept {
//		return insert(_Pos, Impl->_Strng, iq::strlen(Impl->_Strng));
//	}
//
//	string& string::insert(Cnt64_t _Pos, Cnt64_t _Len, cnt08_t _C)noexcept {
//#ifdef _DEBUG
//		if (_Pos > Impl->_Siz)__debugbreak();
//#endif
//		auto Impl->_Size = Impl->_Siz + _Len;
//		if (Impl->_Size < Impl->_Cap) {
//			iq::memcpy(Impl->_Str + _Pos + _Len, Impl->_Str + _Pos, Impl->_Siz - _Pos);
//			iq::memset(Impl->_Str + _Pos, _C, _Len);
//		}
//		else {
//			auto _Tmp = Impl->_Str; Impl->_Alloc(Impl->_Size);
//			iq::memcpy(Impl->_Str, _Tmp, _Pos);
//			iq::memset(Impl->_Str + _Pos, _C, _Len);
//			iq::memcpy(Impl->_Str + _Pos + _Len, _Tmp + _Pos, Impl->_Siz - _Pos);
//			iq::free(_Tmp);
//		}
//		Impl->_Siz = Impl->_Size;
//		return *this;
//	}
//
//	string& string::insert(Cnt64_t _Pos, cnt08_t _C)noexcept {
//#ifdef _DEBUG
//		if (_Pos > Impl->_Siz)__debugbreak();
//#endif
//		auto Impl->_Size = Impl->_Siz + 1;
//		if (Impl->_Size < Impl->_Cap) {
//			iq::memcpy(Impl->_Str + _Pos + 1, Impl->_Str + _Pos, Impl->_Siz - _Pos);
//			Impl->_Str[_Pos] = _C;
//		}
//		else {
//			auto _Tmp = Impl->_Str; Impl->_Alloc(Impl->_Size);
//			iq::memcpy(Impl->_Str, _Tmp, _Pos);
//			Impl->_Str[_Pos] = _C;
//			iq::memcpy(Impl->_Str + _Pos + 1, _Tmp + _Pos, Impl->_Siz - _Pos);
//			iq::free(_Tmp);
//		}
//		Impl->_Siz = Impl->_Size;
//		return *this;
//	}

	const char* string::c_str()const noexcept {
		_Impl->_Str[_Impl->_Siz] = 0;
		return _Impl->_Str;
	}

	char* string::data()const noexcept {
		return _Impl->_Str;
	}

	inline void _print(const string& _That) noexcept {
		fputs(_That.c_str(), __acrt_iob_func(1));
	}

}