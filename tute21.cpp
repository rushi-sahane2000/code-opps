#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int n1, int n2, int n3); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int n1, int n2, int n3)
{
    a = n1;
    b = n2;
    c = n3;
}

int main()
{
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 4;
    harry.e = 5;
    harry.setData(1, 2, 3);
    harry.getData();
    return 0;
}
