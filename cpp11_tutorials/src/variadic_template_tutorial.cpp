#include <iostream>
void log(){}

template<typename T, typename ... Args> void log(T first, Args ... args) {
    std::cout<<first<<" , ";
    log(args ...);
}
int main() {
    log(1, 3.2, "aaaa");
    return 0;
}