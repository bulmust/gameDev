#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

void displayData(Person p);

int main()
{
    Person p1;
    
    cout << "Enter Full name: ";
    getline(cin,p1.name);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    cout << "----------------" <<endl;
    displayData(p1);
    return 0;
}

void displayData(Person p)
{
    cout << "\nDisplaying Information From Function." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}