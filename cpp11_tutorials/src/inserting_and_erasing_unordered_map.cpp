#include <iostream>
#include <unordered_map>
#include <string>
int main(){
    //inserting
    std::unordered_map<std::string, int> wordMap;
    wordMap.insert({ {"First", 1}, {"Second", 2}, {"Third", 3} } );
    typedef std::unordered_map<std::string, int>::iterator UOMIterator;
    std::pair< UOMIterator , bool> result;
    result = wordMap.insert(std::make_pair<std::string, int>("Second", 6));
    if(result.second == false){
        std::cout<<"Element 'Second' not inserted again"<<std::endl;
        result = wordMap.insert({"Fourth", 4});
        if(result.second == false){
            std::cout<<"Element 'Fourth' not inserted again"<<std::endl;
        }
        else{
            std::cout<<"Element Inserted : ";
            std::cout<<result.first->first<<"::"<<result.first->second<<std::endl;
        }
    }
    for (std::pair<std::string, int> element : wordMap) {
        std::cout << element.first << " :: " << element.second << std::endl;
    }

    //erasing
    if (wordMap.erase("Second") == 1) {
        std::cout << "Element Deleted" << std::endl;
    }
    return 0;
}