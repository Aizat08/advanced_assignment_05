#include <iostream>

/**
*   \brief Represents GUI primitves.
*  
*   Abstract interface class for GUI primitives 
*   representing basic elements of vector graphics 
*   like points, lines, and other different figures
*   as well as operations over these primitives
*/

class GUIPrimitive {
    public:
        virtual ~GUIPrimitive() = 0;

        virtual void show() const = 0; 

        virtual int getX() const = 0;
        virtual int getY() const = 0;

        //other methods like move(), rotate(), etc. will be here
    };
    GUIPrimitive::~GUIPrimitive() {}

/**
*   \brief Reflects the geometrical point
* 
*   Point class, representing the most 
*   basic characteristics of the point with 
*   two plain coordinates. 
*/

class Point : public GUIPrimitive {
    public:
        Point(int x, int y) : x{x}, y{y} {}
        ~Point() = default;

        void show() const override {
           std::cout << "showing points ... " << std::endl;
           std::cout << "at coordinates: [" << x << "] [" << y << "]" << std::endl; }

        int getX() const override {return x;}
        int getY() const override {return y;}

    private:
        int x, y;
};

