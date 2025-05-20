#include<iostream>
using namespace std;

int main(){
    int n;
    int a,b;


    // cin>> n;

    // cout<< "value of n is: "<< n <<endl;

    // if(n>0){
    //     cout<< "n is positive" <<endl;       
    // }
    // else{
    //     cout<< "n is not positive" <<endl;
    // }

    // cout<< "Enter the value of a: ";
    // cin>> a;

    // cout<< "Enter the value of b: ";
    // cin>> b;

    // if(a>b){
    //     cout<< "value of A is greatest"<<endl;
    // }
    // if(b>a){
    //     cout<< "value of B is greatest"<<endl;
    // }
    // else{
    //     cout<< "values are same"<<endl;
    // }


    //loops 

//code for printing 0 to n numbers
int i=0;

cout<< "Enter the value of n: ";
cin>> n;
while(i<=n){
    cout<< i<< " + ";
    i++;
}
cout<<endl;



//code for sum of n numbers 
i=0;
int sum=0;
cout<< "the sum of n numbers are: ";
while(i<=n){
    sum = sum + i;
    i++;
}
cout<< sum <<endl;
}
