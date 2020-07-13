#include "iostream"

class Box {
private:
    double length, breadth, height;

public:
    double getVolume(void) {
        return length * breadth * height;
    }

    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre) {
        breadth = bre;
    }
    void setHeight(double hei) {
        height = hei;
    }

    Box operator+(const Box &b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main(){
    Box Box1, Box2, Box3;
    double volume = 0.0;

    Box1.setLength(10.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(3.0);

    Box2.setLength(11.0);
    Box2.setBreadth(17.0);
    Box2.setHeight(8.0);

    volume = Box1.getVolume();
    std::cout << "Volume of Box1 is: " << volume << std::endl;

    volume = Box2.getVolume();
    std::cout << "Volume of Box2 is: " << volume << std::endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    std::cout << "Volume of Box3 is : " << volume << std::endl;

    return 0;
}