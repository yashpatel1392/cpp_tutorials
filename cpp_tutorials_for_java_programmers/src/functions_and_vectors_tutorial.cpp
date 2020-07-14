#include "iostream"
#include "vector"
#include "algorithm"

//call by reference parameter passing
void swap(int& a, int& b){
    int temp = a;
    a = b;
    std::cout<<"a is " << a << std::endl;
    b = temp;
    std::cout<<"b is " << b << std::endl;
}
void print(std::vector <int> &a) {
    std::cout << "The vector elements are : ";
    for(int i=0; i < a.size(); i++)
    std::cout << a.at(i) << ' ';
}

int main(){
    std::vector<int> a = {2,5,6,8,2,3,10,13,7,11};
    a.push_back(2);
    //accessing elements of the vector
    for (int i = 0; i < a.size(); i++) {
        int sum = sum + a[i];
    }
    print(a);
    std::sort(a.begin(), a.end());
    std::cout<< "After sorting: ";
    print(a);
    return 0;
}
