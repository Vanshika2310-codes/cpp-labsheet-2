#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car car1, car2, car3;

    car1.brand = "Maruti";  car1.price = 600000;
    car2.brand = "Tata";    car2.price = 800000;
    car3.brand = "Honda";   car3.price = 1100000;

    cout << "--- Car Information ---" << endl;
    car1.display();
    car2.display();
    car3.display();
    return 0;
}
