#include <iostream>
using namespace std;

int main(){
    int a = 3;
    cout << a << endl;

    char b = 'A';
    cout<< b <<endl;

    bool bl = true;
    cout<< bl <<endl;

    float f = 1.2;
    cout<< f << endl;

    double d = 1.23434234;
    cout<< d << endl;

    int sa = sizeof(a);
    cout<< "Size of a is : "<< sa << endl;

    // type casting
    int c = 'a';
    cout<< c << endl;

    char ch = 96;
    cout<< ch << endl; 

    unsigned int u = -1;
    cout<< u << endl;

    //relational operators
    int x = 5;
    int y = 10;

    bool result = (x == y);
    cout << "x == y: " << result << endl;
}