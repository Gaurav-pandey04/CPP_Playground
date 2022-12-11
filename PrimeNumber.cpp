// To check a given number is prime or not using c++ program

/*
logic --> To check a given number (num) with all its smaller value if remainder is 0 it means number (num) is divisible.
          Thus, it is not prime number.
          Otherwise it is prime number.
*/

// Start of program
#include <iostream>
using namespace std;

int main()
{
    int num,flag,count;                                       // Declared three variables num, flag and count 
    cout<<"Enter the number";
    cin>>num;                                                 // num is use to store a number entered by user 
    flag=0;                                                   // flag is a pointer if it is 0 it means number is prime otherwise it is not by default it is 0
    for ( count = 2; count < num ; count++)                   // count contains smaller number than num starting from 2
    {
        if (num%count==0)                                     // condition to check number is divisible or not by it's smaller values
        {
            cout<<"It is not a prime number";
            flag=1;                                           // If number is not a prime number than flag will be 1
            break;                                            //break's the loop
        }
        
    }

    if (flag==0)                                               // if flag is 0 it means number is prime number  
        cout<<"It is a prime number";

    return 0;
}