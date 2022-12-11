// To Invert a number given by user using c++ program

/*
logic -->To get inverse number last number should come at first. so,  we can get last number by finding remainder of num/10 after that display accordingly.
         As num is int then it cannot hold decimal values thus if we divide num by 10 then it will reduced last number i.e. if num=3456 then after num/10 the num will become 345.
*/

// Start of program
#include <iostream>
using namespace std;

int main()
{
    int num,rem;                                                     //Declaring two variable named num and rem
    cout<<"Enter a number to be inverted ";
    cin>>num;                                                        // num store user input
    cout<<"Inverted number is: ";
    while (num>0)                                                    // Run a block of code until num gets 0
    {
        rem=num%10;                                                  // rem store remainder of num/10
        cout<<rem;                                                   // prints the rem
        num=num/10;                                                  // divide the num by 10 and store in num 
    }
    
    return 0;
}