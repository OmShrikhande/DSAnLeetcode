#include<iostream>
using namespace std;
int main(){

int n, i=0,j;

cout<<"Enter size of determinant: ";
cin>>n;



/*
//To print the pattern: 
//*
//* *
//* * *
//* * * *


while(i<n){
    j=0;
    while (j<=i)
    {
        cout<<" * ";
        j++;
    }
    cout<<endl;
    i++;
    
}
*/


// To print the pattern:

while(i<n){
    j=0;
    while(j<=i)
    {
        cout<<i+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}






}