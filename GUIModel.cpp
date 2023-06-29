#include "GUIModel.hpp"

void GUIModel::addPrimitive(std::unique_ptr<GUIPrimitive> primitive){

	primitives.push_back(std::move(primitive));
}

void GUIModel::deletePrimitive(int index) {

    primitives.erase(primitives.begin() + index);
}

std::vector<std::unique_ptr<GUIPrimitive>>& GUIModel::getPrimitives(){

	return primitives;
}