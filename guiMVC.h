#include <iostream>
#include <vector>
#include "shapes.h"
#include <memory>
#include <fstream>

// Model
class GUIModel {

public:

    void addPrimitive(std::unique_ptr<Shape> shape) {/*primitives.push_back(std::move(shape));*/}

    void deletePrimitive(int index) {/*primitives.erase(primitives.begin() + index);*/}
    
    /*std::vector<std::unique_ptr<Shape>>& getPrimitives()  
    {return primitives;}

    std::unique_ptr<Shape>& getPrimitive(int index)  
    {return primitives[index];}*/

private:
    std::vector<std::unique_ptr<Shape>> primitives;

};

//View 
class GUIView {

public:
    void show(std::unique_ptr<GUIModel> model) {

    	/*std::vector<std::unique_ptr<Shape>> primitives = model->getPrimitives();
      	
        for(auto& item : primitives){
        	item->draw(); }*/
    }
};


//Controller
class GUIController {

public:
    void createNewDocument() {
        std::cout << "New document created!" << std::endl; }

    void exportDocument(std::string filename) {
        std::ofstream output(filename);
        std::cout << "Exporting new document to file ..." << std::endl; }

    void importDocument(std::string filename) {
        std::ifstream input(filename);
        std::cout << "Importing document from file ..." << std::endl; }

    void createPrimitive() {
        std::cout << "Creating new primitive ..." << std::endl; }

    void deletePrimitive() {
        std::cout << "Deleting new primitive ..." << std::endl; }

private:
    std::unique_ptr<GUIModel> model;
    std::unique_ptr<GUIView> view;
};