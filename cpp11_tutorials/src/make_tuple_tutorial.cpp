#include <iostream>
#include <tuple>
#include <string>

int main(){
    std::tuple<int, double, std::string> result1 { 25, 33.22, "txt" };
    auto result2 = std::make_tuple( 11, 9.8, "txt" );
    std::cout << "int value = " << std::get < 0 > (result2) << std::endl;
    std::cout << "double value = " << std::get < 1 > (result2) << std::endl;
    std::cout << "string value = " << std::get < 2 > (result2) << std::endl;
    return 0;
}