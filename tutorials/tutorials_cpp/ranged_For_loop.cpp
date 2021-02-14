#include <iostream>
using namespace std;

int main() {

    // initialize array  
    int numArray[] = {1, 2, 3, 4, 5};
    int num[5] ={11, 22, 33, 44, 55};

    // use of ranged for loop to print array elements  
    for (int n : numArray) {
        cout << n << " ";
    }
    // access memory location of elements of num
    for (const int &var : num) {
        cout << var << " ";
    }
    return 0;
}