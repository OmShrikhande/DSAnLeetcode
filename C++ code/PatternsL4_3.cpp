
//make a code for the pattern printing

#include<iostream>
using namespace std;

int main(){
	int n;
    cout<<"Enter a number:";
	cin >> n;
	
	// int row =1 ;



// to print the pattern of 
// AAA
// BBB
// CCC
/*
    while(row <= n){
		int col =1;
		while(col <=n){
			char ch = 'A'+row-1;
			cout << ch;
			col = col+1;
		}
		cout << endl;
		row = row + 1;
	}
    cout << endl;
*/



// to print the pattern of 
// ABC
// ABC
// ABC
/*
int r =1;
 
    while(r <= n){
        int col = 1;
        while(col <=n){
            char ch = 'A'+col+1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        r = r + 1;

    }
*/


// A B C
// D E F 
// G H I

/*
char ch = 'A';
int r = 1;

while(r<=n){
    int col =1;
    while(col<=n){
        cout <<ch << " ";
        ch = ch + 1;
        col = col + 1;
    }
    cout << endl;
    r = r + 1;
}

*/

}