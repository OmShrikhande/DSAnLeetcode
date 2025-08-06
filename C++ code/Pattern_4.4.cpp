// In this i am doing the taingular vertical pattern of characters

#include<iostream>
using namespace std;

int main(){


    int n, row, col;
    cout << "Enter the number of rows: ";
    cin >> n;




// Enter the number of rows: 4
// A 
// B B 
// C C C 
// D D D D
    
/*
row = 1;
    while(row<=n){
        col =1;
        while(col<=row){
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
*/
    


// Enter the number of rows: 3
// A 
// B C
// D E F
/*
row = 1;
char ch = 'A';
    while(row<=n){
        col =1;
        while(col<=row){
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
*/




// Enter the number of rows: 4
// D 
// C D
// B C D
// A B C D
/*
row = 1;
while(row <=n){
    col =1;
    char ch = 'A' + n - row;
    while(col<=row){
        cout << ch << " ";
        ch = ch + 1;
        col = col + 1;
    }
    cout << endl;
    row = row+1;
}
*/

}