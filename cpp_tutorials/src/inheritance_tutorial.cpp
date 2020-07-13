#include "iostream"

class Shape{
protected:
    int width;
    int height;

public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
};

class Rectangle: public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main(){
    Rectangle rectangle;

    rectangle.setWidth(4);
    rectangle.setHeight(5);

    std::cout << "Total area of the rectangle: " << rectangle.getArea() << std::endl;

    return 0;
}