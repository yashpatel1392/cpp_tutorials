#include "iostream"

using namespace std;

class User{
private:
    int id;
    string name;
public:
    User(int userID, string userName) : id(userID), name(userName){}
    User(const User & obj) = delete;
    User & operator = (const User & obj) = delete;
    void display(){
        std::cout<<id << " ::: "<<name<<std::endl;
    }
    User(double userId, std::string userName) = delete ;
    User(char userId, std::string userName) = delete ;
    void * operator new (size_t) = delete;
};

int main(){
    User user(13, "Someone");
    user.display();
    return 0;
}