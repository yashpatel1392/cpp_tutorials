#include "iostream"

class Adder{
private:
    double total;
public:
    Adder(int i = 0){
        total = i;
    }
    void addNum(int number){
        total += number;
    }
    int getTotal(){
        return total;
    }
};

int main(){
    Adder adder;
    adder.addNum(5);
    adder.addNum(55);
    std::cout << "Total is: " << adder.getTotal() << std::endl;
    return 0;
}