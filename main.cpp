#include "GUIController.cpp"

int main(){

	GUIController controller;
	controller.createNewDocument();
	controller.createPrimitive(4, 7);
	controller.createPrimitive(5, 9);
	controller.createPrimitive(1, 0);

	controller.exportDocument("GUIDocument.txt");
}