#include "GUIPrimitive.hpp"
#include <vector>
#include <memory>

/**
*   \brief Works with GUI primitives.
*  
*   GUIModel class, part of the simple vector graphic 
*   editor created according to MVC pattern. 
*   Has exclusive ownership over the GUIPrimitive objects
*   through unique pointer. Has also addPrimtive(), 
*   deletePrimitive() and getPrimitives() methods 
*   which add, delete and returns vector of primitives
*   accordingly.
*/

class GUIModel {

public:

    void addPrimitive(std::unique_ptr<GUIPrimitive> );
        
    void deletePrimitive(int );
    
    std::vector<std::unique_ptr<GUIPrimitive>>& getPrimitives();

private:
    std::vector<std::unique_ptr<GUIPrimitive>> primitives;

};