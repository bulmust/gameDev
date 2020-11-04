#include <iostream>
using namespace std;

// declaring a function
void greet() {
    cout << "Hello there!"<<endl;
}

void printNum(int num) {
    cout << num <<endl;
}

// declaring a function
int add(int a, int b) {
    return (a + b);
}


int main() {
    int n = 7, sum;
    
    // calling the function
    // n is passed to the function as argument
    printNum(n);

    // calling the function
    greet();
    // calling the function
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}