#include<iostream>
using namespace std;

class Simple{
    // int data1;
    // int data2;
    // int data3;
       int x,y,z;
    public:
        Simple(int a, int b, int c=8){
            // data1= a;
            // data2= b;
            // data3= c;
            x= a;
            y= b;
            z= c;
        }

        void printData();

};

void Simple :: printData(){
    // cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
    cout<<"The value of x, y and z is "<<x<<", "<<y<<" and "<<z<<endl;
}
int main(){
    Simple s(12, 15);
    s.printData();
    return 0;
}




