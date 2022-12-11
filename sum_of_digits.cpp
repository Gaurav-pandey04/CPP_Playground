// To add all digits of a number given by user using c++ program

/*
logic --> To get sum of all digits in a number first we hve to acess all number.
          For that rem is used to get remainder of num/10.
          After that rem is added to exisitng sum.
          After that last number will be reduced by num/10.
*/

// Start of program
#include <iostream>
using namespace std;

int main()
{
    int num,rem,sum;                                                 // Declaring three variable named num, rem and sum
    cout<<"Enter a number to be added ";
    cin>>num;                                                        // num store user input
    sum=0;                                                           // sets the sum to 0
    while (num>0)                                                    // Run a block of code until num gets 0
    {
        rem=num%10;                                                  // rem store remainder of num/10
        sum=sum+rem;                                                 // adds the sum with existing sum and rem
        num=num/10;                                                  // divide the num by 10 and store in num 
    }
    cout<<"The sum of all number in a digit is: "<<sum;
    return 0;
}