#include <iostream>
#include <map>
#include <string>
auto sum(int x, int y) -> int
{
    return x + y;
}
int main()
{
    auto var_1 = 5;
    auto var_2 = 'C';
    std::cout << var_1 << std::endl;
    std::cout << var_2 << std::endl;
    auto fun_sum = [](int a , int b)
    {
        return a+b;
    };
    std::cout << fun_sum(4, 5) << std::endl;
    std::map<std::string, std::string> mapOfStrs;
    mapOfStrs.insert(std::pair<std::string, std::string>("first", "1"));
    mapOfStrs.insert(std::pair<std::string, std::string>("sec", "2"));
    mapOfStrs.insert(std::pair<std::string, std::string>("third", "3"));

    std::map<std::string, std::string>::iterator it = mapOfStrs.begin();
    while (it != mapOfStrs.end())
    {
        std::cout << it->first << "::" << it->second << std::endl;
        it++;
    }
    auto itr = mapOfStrs.begin();
    while (itr != mapOfStrs.end())
    {
        std::cout << itr->first << "::" << itr->second << std::endl;
        itr++;
    }
    auto x = 1;
    auto value = sum(3, 5);
    std::cout << value << std::endl;
    return 0;
}