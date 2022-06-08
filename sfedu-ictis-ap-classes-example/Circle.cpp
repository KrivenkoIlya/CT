//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"
#include <iostream>
using namespace std;

class construct
{
public:
    int a, b;
    construct()
    {
        a = 5;
        b = 9;
    }
};

int main()
{
    construct c;
    cout << "a: " << c.a<< "\n" << "b: " << c.b;
}




class Person
{
public:
    Person(string n)
    {
        name = n;
    }
    ~Person()
    {
        cout << name << "\n";
    }
private:
    string name;
};
int main()
{
    Person name1("name1");
    Person* name2 = new Person("name2");
    delete name2;
}



int perimeterRectangle(int a, int b)
{
	int perimeter = 2 * (a + b);
	return perimeter;
}
int main()
{
	int a = 5;
	int b = 6;
	cout << "Perimeter = " << perimeterRectangle(a, b);
}




