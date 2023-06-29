#include "GUIModel.cpp"

/**
*   \brief Displays primitives.
*  
*   GUIView class part of the simple vector graphic 
*   editor created according to MVC pattern. Works 
*   with GUIModel and diplays the primitives.
*   As of now, there is only method show(),
*   takes as an argument the shared pointer 
*   to GUIModel which owns GUIPrimitive.
*   Then this model invokes getPrimitives() method to
*   return the vector of primitives, to be then displayed of.
*/

class GUIView {

public:

    void show(std::shared_ptr<GUIModel> );

};