#include "iostream"
#include "vector"
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
    void print() const{
        cout << lastname << " " << firstname << " Salary: " << sal << endl;
    }
private:
    string lastname, firstname;
    int sal;
};

class Manager : public Employee
{
public:
    Manager(string lname, string fname, double salary, string dept);
    virtual void print() const;
private:
    string department;
};

Manager::Manager(string lname, string fname, double salary, string dept) : Employee(lname, fname, salary){
    department = dept;
}

void Manager::print() const{
    Employee::print();
    cout << department << "\n";
}

int main(){
    Employee* e = new Manager("Morris"," Melinda", 83000, "Finance");
    vector<Employee*> staff(10);
    for (int i = 0; i < staff.size(); i++) {
        staff[i]->print();
    }
    return 0;
}
