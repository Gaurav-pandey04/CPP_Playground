// CPP Program to compare two number without using "==" operator

#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 10;

    if (!(x^y))
        cout<<"X is equal to y"<<endl;
    else
        cout<<"X is not equal to y"<<endl;

    return 0;
}