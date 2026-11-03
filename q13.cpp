#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    float marks;

public:
    void inputStudent() {
        inputPerson();            
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        displayPerson();          
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;
    student1.inputStudent();
    cout << "\n--- Student Details ---" << endl;
    student1.displayStudent();
    return 0;
}
