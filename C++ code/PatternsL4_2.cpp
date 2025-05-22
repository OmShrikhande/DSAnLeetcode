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




/*
To print the pattern:
1
22
333
4444
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
*/



/*
to print the pattern:
1
2 3
4 5 6
7 8 9 10

int count =1;
    while(i<n){

        j=0;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }


*/



/*
to print the pattern:
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9


while(i<n){
    j=0;
    int value=i+1;

    while(j<=i){
        cout<<value<<" ";
        value++;
        j++;
    }
    cout<<endl;
    i++;
}


** Another way to print the same pattern is: **
while(i<n){
    j=0;
    while(j<=i){
        cout<<i+j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;

}

*/







/* To print the pattern :
Enter size of determinant: 5
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1


while(i<n){
    j=0;
    while(j<=i){
        cout<<i-j+1<<" "; // in this the formula is used is i-j+1
        j++;
    }
    cout<<endl;
    i++;
}
*/





}