// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

    private:
    double length;
    double breadth;
    double height;

    public:
    // function to initialize private variables
    void getData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }
    
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.getData(42.5,30.2,34.2);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}