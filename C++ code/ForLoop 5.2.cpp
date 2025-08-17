#include<iostream>
using namespace std;

int main(){

    int n;

    cout <<"Enter a number: ";
    cin >> n;


    //basic for loop 
    cout << "printitng count from 1 to n:" << endl;
    for(int i =1;i<=n;i++)
    {
        cout << i << endl;

    }


    // for loop with multiple variables
    cout << "printitng count via multiple variable: " << endl;
    for(int a=0, b=1; a>=0 && b>=1; a--, b--){
        cout<<a <<" "<<b<<endl;
    }


    //sum of n numbers 

cout << "sum of n numbers: " << endl;
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " numbers is: " << sum << endl;
}