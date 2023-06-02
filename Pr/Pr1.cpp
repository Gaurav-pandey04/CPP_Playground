#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        string name;
        int age;
        string department;
        
        void getinfo() {
            cout << "Enter employee name: ";
            getline(cin, name);
            cout << "Enter employee age: ";
            cin >> age;
            cin.ignore(); // clear newline character from input buffer
            cout << "Enter employee department: ";
            getline(cin, department);
        }
        
    public:
        void displayinfo() {
            getinfo(); // call private method to get employee info
            cout << "Employee name: " << name << endl;
            cout << "Employee age: " << age << endl;
            cout << "Employee department: " << department << endl;
        }
};

int main() {
    Employee emp;
    emp.displayinfo();
    return 0;
}
