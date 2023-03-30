export module ImGuiLayer;

import Event;
import Layer;

export namespace alpha {

	class ImGuiLayer : public Layer {
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnRender() override;

		   
		void Begin();
		void End();

		void BlockEvents(bool _Block) { _BlockEvents = _Block; }

		//void SetDarkThemeColors(); */
	private:
		bool _BlockEvents = true;
	};

}
