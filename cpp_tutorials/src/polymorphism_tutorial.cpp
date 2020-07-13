#include "iostream"
class Shape {
protected:
    int width, height;

public:
    Shape( int a = 0, int b = 0){
        width = a;
        height = b;
    }
    virtual int area() = 0;
//    {
//        std::cout << "Parent class area is: " << std::endl;
//        return 0;
//    }
};
class Rectangle: public Shape {
public:
    Rectangle( int a = 0, int b = 0):Shape(a, b) { }

    int area () {
        std::cout << "Rectangle class area is: " << std::endl;
        return (width * height);
    }
};

class Triangle: public Shape {
public:
    Triangle( int a = 0, int b = 0):Shape(a, b) { }

    int area () {
        std::cout << "Triangle class area is: " << std::endl;
        return (width * height / 2);
    }
};

int main() {
    Shape *shape;
    Rectangle rectangle(13,8);
    Triangle triangle(12,8);

    shape = &rectangle;
    shape->area();
    shape = &triangle;
    shape->area();

    return 0;
}