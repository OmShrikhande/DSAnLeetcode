#include<iostream>
using namespace std;
int main(){
    // int a=2;
    // int b = a+1;

    // if((a=3)==b){
    //     cout<<"this is if equals";
    // }
    // else{
    //     cout<< "Myname";
    // }


//check if the character is lowercase, uppercase, digit or special character
    int ch;
    char cha;
    cout<< "Enter the character: ";
    cin>> cha;

    ch = cha;

    cout<< "value of ch is: "<< ch <<endl;
    if(ch>96 && ch<123){
        cout<< "lowercase";
    }
    else if(ch>64 && ch<91){
        cout<< "uppercase";
    }
    else if(ch>47 && ch<58){
        cout<< "digit";
    }
    else{
        cout<< "special character";

    }
}