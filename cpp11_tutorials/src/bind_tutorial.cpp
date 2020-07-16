#include "iostream"
#include <functional>
#include <algorithm>

using namespace std::placeholders;
int add(int a, int b){
    return a + b;
}

bool divisible(int num , int den){
    if(num % den == 0) {
        return true;
    }
    return false;
}

int approach_1(){
    int arr[10] = {1,20,13,4,5,6,10,28,19,15};
    int count = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        if(divisible(arr[i], 5)) {
            count++;
        }
    }
    return count;
}

int approach_2(){
    int arr[10] = {1,20,13,4,5,6,10,28,19,15};
    return std::count_if(arr, arr + sizeof(arr)/sizeof(int) , std::bind(&divisible, _1, 5));
}

int main(){
    auto add_function = std::bind(&add, _1, _2);
    int x = add(4,5);
    auto new_add_func = std::bind(&add, 12, _1);
    x = new_add_func(5);
    std::cout<<x<<std::endl;
    auto mod_add_func = std::bind(&add, _2, _1);
    x = mod_add_func(12, 15);
    std::cout<<x<<std::endl;
    std::function<int (int) > mod_add_funcObj = std::bind(&add, 20, _1);
    x = mod_add_funcObj(15);
    std::cout<<x<<std::endl;
    std::cout<<approach_1()<<std::endl;
    std::cout<<approach_2()<<std::endl;
    return 0;
}