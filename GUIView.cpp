#include "GUIView.hpp"

void GUIView::show(std::shared_ptr<GUIModel> model) {

	const std::vector<std::unique_ptr<GUIPrimitive>>& primitives = model->getPrimitives();
      	
        for(const auto& item : primitives){
        	item->show(); }
}