#include <iostream>
#include <string>
int main(int argc, char **argv)
{
    std::string msg = "Hello";
    int counter = 10;
    auto func = [msg, counter]  () mutable {
        std::cout<<"Inside Lambda :: msg = "<<msg<<std::endl;
        std::cout<<"Inside Lambda :: counter = "<<counter<<std::endl;

        msg = "Temp";
        counter = 20;
        std::cout<<"Inside Lambda :: After changing :: msg = "<<msg<<std::endl;
        std::cout<<"Inside Lambda :: After changing :: counter = "<<counter<<std::endl;
    };
    func();
    std::cout<<"msg = "<<msg<<std::endl;
    std::cout<<"counter = "<<counter<<std::endl;
    return 0;
}