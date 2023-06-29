#include "GUIView.cpp"
#include <fstream>

/**
*  \brief Interface between user and vector graphic editor
*  
*   GUIController class which is the main
*   part of vector graphic editor. Works 
*   both with GUIModel and GUIView and has 
*   required features like creating new document,
*   importing document from file, exporting document 
*   to a file, creating and deleteing primitives.
* 
*   Works with only Point, just for the demo purposes.
*   
*/

class GUIController {

public:
    void createNewDocument();

    void importDocument(std::string filename);

    void exportDocument(std::string filename);

    void createPrimitive(int x, int y);

    void deletePrimitive(int index);

private:
    std::shared_ptr<GUIModel> model;
    GUIView view;
};

