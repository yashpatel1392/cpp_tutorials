#include <iostream>
#include <unordered_map>
#include <string>
int main() {
    //initialization
    std::unordered_map<std::string, int> wordMap(
            {
                    {"First",  1},
                    {"Second", 2},
                    {"Third",  3}});
    for (std::pair<std::string, int> element : wordMap){
        std::cout << element.first << " :: " << element.second << std::endl;
    }
    std::cout << "*******************" << std::endl;
    std::unordered_map<std::string, int> wordMap_2(wordMap.begin(),
                                                   wordMap.end());
    for (std::pair<std::string, int> element : wordMap_2){
        std::cout << element.first << " :: " << element.second << std::endl;
    }
    std::cout << "*******************" << std::endl;
    std::unordered_map<std::string, int> wordMap_3(wordMap);
    for (std::pair<std::string, int> element : wordMap_3){
        std::cout << element.first << " :: " << element.second << std::endl;
    }
    std::cout << "*******************" << std::endl;

    //searching
    std::unordered_map<std::string, int>::iterator it;
    it = wordMap.find("First");
    if (it != wordMap.end()){
        std::cout << "Element Found - ";
        std::cout << it->first << "::" << it->second << std::endl;
    }
    else{
        std::cout << "Element Not Found" << std::endl;
    }
    return 0;
}