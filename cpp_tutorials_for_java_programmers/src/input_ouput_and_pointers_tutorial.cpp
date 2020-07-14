#include "iostream"

using namespace std;

class Employee{
public:
    Employee(string lname, string fname, int salary);
    void setSalary(int s) {
        sal = s;
    }
    double getSalary(){
        return sal;
    }
private:
    string lastname, firstname;
    int sal;
};
Employee::Employee(string lname, string fname, int salary) : lastname(lname), firstname(fname), sal(salary){}

void input(){
    cout << "Hello, World!";
    double x;
    cout << "Please enter x: ";
    cin >> x;
    string fname;
    cout << "Please enter your first name: ";
    cin >> fname;
}

int main(){
    input();
    Employee* p = NULL;
    Employee* q = new Employee("Hacker"," Harry", 35000);
    Employee* r = q;
    Employee boss("Morris"," Melinda", 83000);
    Employee* s = &boss;
    q->setSalary(30000);
    cout<<q->getSalary()<<endl;
    return 0;
}