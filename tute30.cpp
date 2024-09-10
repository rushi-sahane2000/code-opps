// #include<iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }
// int main(){
//     // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5, 7);
//     b.printNumber();

//     return 0;
// }



//  paramaterize constructor exp 2
// #include<iostream>
// using namespace std;

// class Point{
//     int x, y;
//     public:
//         Point(int a, int b){
//             x = a;
//             y = b;
//         }

//         void displayPoint(){
//             cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//         }

// };
// int main(){
//     Point p(1, 1);
//     p.displayPoint();

//     Point q(4, 6);
//     q.displayPoint();
//     return 0;
// }

// find the distance between two point quick quiz
// *** Quick Quiz solution***

#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
void distance(point o1, point o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}
int main()
{
    point p(1, 1);
    p.display();
    point q(2, 2);
    q.display();
    distance(p, q);

    return 0;
}