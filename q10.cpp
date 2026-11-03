#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;
    student1.input();
    cout << "\n--- Student Details ---" << endl;
    student1.display();
    return 0;
}
