#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, int> wordMap;
    wordMap.insert({ "First: ", 1 });
    wordMap.insert({ "Second: ", 2 });
    wordMap.insert({ "Third: ", 3 });
    wordMap["Third"] = 8;
    for (std::pair<std::string, int> element : wordMap) {
        std::cout << element.first << " :: " << element.second << std::endl;
    }
    return 0;
}