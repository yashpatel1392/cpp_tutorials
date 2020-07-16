#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
class OddCounter{
    int mCounter = 0;
public:
    int getCount(){
        return mCounter;
    }
    void update(std::vector<int> & vec){
        std::for_each(vec.begin(), vec.end(), [this](int element){
            if(element % 2)
                mCounter++;
        });
    }
};

int main(int argc, char **argv){
    std::vector<int> vec = {12,3,2,1,8,9,0,2,3,9,7};
    OddCounter counterObj;
    counterObj.update(vec);
    int count = counterObj.getCount();
    std::cout<<"Counter = "<<count<<std::endl;
    return 0;
}