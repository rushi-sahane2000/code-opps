#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    string name;
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep;

union money
{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m2 = lunch;
    cout << (m2 == 2)<<endl;
    cout<<breakfast<<" ";
    cout<<lunch<<" ";
    cout<<dinner<<" "<<endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl;

    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.name="shubham";
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;

    cout<<"The name of employee is:"<<harry.name<<endl;
    cout<<"The value is:"<<harry.eId<<endl;
    cout<<"The value is:"<<harry.favChar<<endl;
    cout<<"The value is:"<<harry.salary<<endl;
    return 0;
}
