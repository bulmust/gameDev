// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       double length;
       double height;

   public:
    // create a constructor (default constructor)
    Wall() {

        // initialize private variables
        length = 5.5;

        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
    // create parameterized constructor
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea() {
        return length * height;
    }
};

int main() {

    // create an object
    Wall wall1;
    Wall wall2(8.5, 6.3);

    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}