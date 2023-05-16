#include "guiMVC.h"


//there should be some menu

int main(){

    GUIController controller;
    controller.createNewDocument();
    controller.exportDocument("myDocument.pdf");
    controller.importDocument("myDocument.pdf");
    controller.createPrimitive();
    controller.deletePrimitive();
}