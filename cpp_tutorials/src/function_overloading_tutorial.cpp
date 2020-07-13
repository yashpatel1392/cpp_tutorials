#include "iostream"

class PrintData {
public:
    void print(int i) {
        std::cout << "Printing int: " << i << std::endl;
    }
    void print(double  f) {
        std::cout << "Printing float: " << f << std::endl;
    }
    void print(char* c) {
        std::cout << "Printing character: " << c << std::endl;
    }
};

int main(void) {
    PrintData pd;
    pd.print(10);
    pd.print(500.10);
    pd.print("Hello World!");
    return 0;
}