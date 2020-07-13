#include "iostream"

class Box{
public:
    double height;
    double width;
    double length;
    double volume = height*width*length;
};

int main() {
    Box box1, box2;
    double volume = 0.0;

    box1.height = 10.0;
    box1.width = 2.0;
    box1.length = 5.0;

    box2.height = 15.0;
    box2.width = 1.0;
    box2.length = 7.0;

    volume = box1.height * box1.width * box1.length;
    std::cout<<"Volume of Box 1 is: "<< volume<<std::endl;

    volume = box2.height * box2.width * box2.length;
    std::cout<<"Volume of Box 2 is: "<< volume<<std::endl;

}
