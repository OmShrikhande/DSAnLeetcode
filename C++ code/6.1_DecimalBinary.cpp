#include<iostream>
#include<math.h>
using namespace std;

int main(){

 int number;
    cout<<"Enter a number: ";
    cin >> number;



    //decimal to binary conversion    //using bit manipulation
    //1. Get the last bit using AND operation with 1
    //2. Add it to the answer after multiplying it with 10^i
    //3. Right shift the number by 1 to process the next bit
    //4. Repeat until the number becomes 0
    
/*
    int ans=0, i =0;
    while(number != 0){
        int bit = number & 1;
        ans = (bit * pow(10,i))+ans;

        number = number >>1;
        i++;

    }
*/



//decimal to binary conversion    //using simple logic
    //1. Get the last digit using modulo operation with 10
    //2. If the digit is 1, add 2^i to the answer
    //3. Divide the number by 10 to process the next digit
    //4. Repeat until the number becomes 0


    int i=0;
    int ans= 0;
    while (number != 0 ){
        int digit = number %10;
        
        if (digit== 1){
            ans = ans + pow(2,i);
        }
        number = number /10;
        i++;        
    }


    
    cout << "Answer is : "<< ans << endl;
}