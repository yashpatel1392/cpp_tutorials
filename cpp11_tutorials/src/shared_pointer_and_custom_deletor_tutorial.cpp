#include <iostream>
#include <memory>
#include <functional>

struct Sample{};

void deleter(Sample * x){
    std::cout << "DELETER FUNCTION IS BEING CALLED\n";
    delete[] x;
}
template<typename T> class MemoryPool{
public:
    T * AquireMemory()
    {
        std::cout << "AQUIRING MEMORY\n";
        return (new T());
    }
    void ReleaseMemory(T * ptr){
        std::cout << "RELEASE MEMORY\n";
        delete ptr;
    }
};

int main(){
    std::shared_ptr<MemoryPool<Sample> > memoryPoolPtr = std::make_shared<MemoryPool<Sample> >();
    std::shared_ptr<Sample> p3(memoryPoolPtr->AquireMemory(),
            std::bind(&MemoryPool<Sample>::ReleaseMemory, memoryPoolPtr,
                                         std::placeholders::_1));
    return 0;
}