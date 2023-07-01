#include "GUIController.hpp"

void GUIController::createNewDocument() {
    model = std::make_shared<GUIModel>();
    std::cout << "new document created!" << std::endl; 
}

void GUIController::importDocument(std::string filename) {
    std::ifstream input(filename);
    int x, y;
    while(input >> x >> y){
        std::unique_ptr<GUIPrimitive> primitive = std::make_unique<Point>(x, y);
        model->addPrimitive(std::move(primitive));}
    input.close();
    std::cout << "document imported from file!" << std::endl; 
}

void GUIController::exportDocument(std::string filename) {
    std::ofstream output(filename);
    const std::vector<std::unique_ptr<GUIPrimitive>>& primitives = model->getPrimitives();
    for (int i = 0; i < primitives.size(); i++) {
        output << primitives[i]->getX() << " " << primitives[i]->getY() << std::endl;
    }
    output.close(); 
    std::cout << "document exported to file!" << std::endl; 
}

void GUIController::createPrimitive(int x, int y) {
    std::unique_ptr<GUIPrimitive> primitive = std::make_unique<Point>(x, y); 
    model->addPrimitive(std::move(primitive));
    view.show(model); 
} 

void GUIController::deletePrimitive(int index) {
    model->deletePrimitive(index);
    view.show(model); 
} 