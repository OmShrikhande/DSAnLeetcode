// bitwise operators example
#include<iostream>
using namespace std;

int main(){
    int a =4;
    int b =6;

    cout <<"a & b =" << (a & b) << endl; // 4
    cout <<"a | b =" << (a | b) << endl; // 6
    cout <<" ~b  =" << ( ~b ) << endl; // -7
    cout <<"a ^ b =" << (a ^ b) << endl; // 2


    // left shift and right shift operators 
    cout<<endl;
    cout<<endl;
    
    cout << "Left Shift and Right Shift Operators:" << endl;
    cout<< a <<"<<1 ="<< (a<< 1) << endl; // 8
    cout<< a <<"<<2 ="<< (a<< 2) << endl; // 16
    cout<< a <<">>1 ="<< (a>> 1) << endl; // 2
    cout<< a <<">>2 ="<< (a>> 2) << endl; // 1
    cout<< a <<">>3 ="<< (a>> 3) << endl; // 0
    cout<< a <<">>4 ="<< (a>> 4) << endl; // 0



    cout <<"\nIncrement and Decrement Operators:" <<endl;
    cout << "pre-increment of a: "<< ++a << endl;// 5
    cout << "post-increment of b: "<< b++ << endl;// 6
    cout << "pre-decrement of a: "<< --a << endl;// 4
    cout << "post-decrement of b: "<< b-- << endl;// 7
}