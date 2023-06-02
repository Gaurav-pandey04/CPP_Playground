// wrong code here or something is wrong with the code
#include<iostream>

using namespace std;

int main(){

    int is_prime, i, j;
    is_prime=1;

    for(i=100; i<=500; i++) {
        for(j=2; j<=i/2; j++) {
            if(i%j==0)
            {
             is_prime=0;
            //  cout<<j<<" ";
             break;
            }
            if(is_prime==1)
                {
                    cout<<j<<" ";
                }
        }
    }

    return 0;
}