#include "iostream"

 class Point{
 public:
    Point();
    Point(double xval, double yval);
    void move(double dx, double dy);
    double getX() const;
    double getY() const;

 private:
    double x;
    double y;

 };

 Point::Point() : x(0), y(0){}
 Point::Point(double xval, double yval): x(xval), y(yval){}

 void Point::move(double dx, double dy){
     x = x + dx;
     y = y + dx;
 }

 double Point::getX() const{
     return x;
 }
 double Point::getY() const{
     return y;
 }

int main(){
     Point p(1.0, 2.0);
     Point q;
     Point r = p;
     r.move(3, 2);
     std::cout<< "p X: " << p.getX() <<" and Y: " << p.getY() << std::endl;
     std::cout<< "q X: " << q.getX() <<" and Y: " << q.getY() << std::endl;
     std::cout<< "r X: " << r.getX() <<" and Y: " << r.getY() << std::endl;
    return 0;
}
