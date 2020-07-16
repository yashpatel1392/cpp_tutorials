#include <iostream>
#include <tuple>
#include <string>

std::tuple<int, double, std::string> someFunction(){
    std::tuple<int, double, std::string> result(4, 4.8, "text");
    return result;
}
int main(){
    std::tuple<int, double, std::string> result = someFunction();
    int iVal = std::get < 0 > (result);
    double dVal = std::get < 1 > (result);
    std::string strVal = std::get < 2 > (result);
    std::cout << "int value = " << iVal << std::endl;
    std::cout << "double value = " << dVal << std::endl;
    std::cout << "string value = " << strVal << std::endl;
    int x = 1;
    const int i = 1;
    double dVal3 = std::get < i > (result);
    return 0;
}