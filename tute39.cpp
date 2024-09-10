#include <iostream>
using namespace std;

class Base
{
    // Protected means the variable are inherit but they are sum properties of private
    // and they aslo inherit and follow the privacy of functin or variable
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

/*
                     Public Derivation            Private Derivation    	    rotected Derivation
Private members        Not Inherited                   Not Inherited              	Not Inherited
Protected members       Protected                    	Private                       Protected
Public members           Public	                       Private                         	Protected

*/