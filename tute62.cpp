#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("sample62.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    out <<"This is also me and learn with code with harry cources in the upcoming vedios ";
    out <<"This is also me from start a new upcoming playlist";
    //closing the file connection
    out.close();

    return 0;
}





// #include <iostream>
// #include <fstream>
// #include <string>
 
// using namespace std;
 
// int main()
// {
//     // declaring an object of the type ifstream
//     ifstream in;
//     //declaring string variable st
//     string st;
//     //opening the text file into in
//     in.open("sample62.txt");
 
//     // giving output the string lines by storing in st until the file reaches the end of it
//     while (in.eof()==0) 
//     {
//         // using getline to fill the whole line in st
//         getline(in,st);
//         cout<<st<<endl;
//     }
//     return 0;
// }
