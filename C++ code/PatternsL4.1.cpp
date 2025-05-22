#include<iostream>
using namespace std;

int main(){

    int n,i=1,j=1;
    
    cout<<"Enter size of determinant: ";
    cin>>n;

//print the pattern :
// 1 2 3
// 1 2 3
// 1 2 3
/*

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

cout<<endl;
*/

//print the pattern : using the formula
//3 2 1
//3 2 1
//3 2 1
/*
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
cout<<endl;
*/





//print the pattern :
int num =1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<num<<" ";
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }


}