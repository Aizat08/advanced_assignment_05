#include <iostream>

//abstract interface class for GUI primitives 
class Shape {
    public:
        virtual ~Shape() = 0;

        virtual void draw() const = 0;
        //other methods like move(), rotate(), etc. will be here
    };
    Shape::~Shape() {}



class Point : public Shape {

    public:
        Point(int x, int y) : x{x}, y{y} {}
        ~Point() = default;

        void draw() const override {
            std::cout << "Point drawing ..." << std::endl; }

    private:
        int x, y;
};

//other shapes like lines, rectanges, circles etc. will be here
// class Line : public Shape {}