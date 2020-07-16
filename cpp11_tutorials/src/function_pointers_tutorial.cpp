#include "iostream"

std::string buildCompleteMessage(std::string rawData, std::string (* encrypterFunPtr)(std::string)){
    rawData = "[HEADER]" + rawData + "[FooTER]";
    rawData = encrypterFunPtr(rawData);
    return rawData;
}
std::string encryptDataByLetterInc(std::string data){
    for(int i = 0; i < data.size(); i++){
        if( (data[i] >= 'a' && data[i] <= 'z' ) || (data[i] >= 'A' && data[i] <= 'Z' ) )
            data[i]++;
    }
    return data;
}
int main(){
    std::string msg = buildCompleteMessage("SampleString", &encryptDataByLetterInc);
    std::cout<<msg<<std::endl;
    return 0;
}