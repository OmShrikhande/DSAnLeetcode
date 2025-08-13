// here we had done patterns with spaces and *

#include<iostream>
using namespace std;

int main(){

    int n, row, col;
    cout << "Enter the number of rows: ";
    cin >> n;



//     Enter the number of rows: 3
//    *
//   **
//  ***

/*
    row =1;
    while(row <=n){
    int space = n - row;

    while(space){
        cout << " ";
        space = space - 1;
    }

    int col = 1;
    while(col <= row){
        cout << "*";
        col = col + 1;

    }
    cout << endl;
    row = row + 1;
    }

*/





// Enter the number of rows: 5
//     1
//    121
//   12321
//  1234321
// 123454321

/*

row =1;
    while(row <=n){
        int space = n - row;

        while(space){
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while(col <= row){
            cout << col;
            col = col + 1;

        }  

        int start = row-1;
        while(start){
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;

    }

*/

// homework 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

}