#include<iostream>

using namespace std;

int main(){
    int i, j, size, temp, arr[20];

    cout<<"Enter the size of arrays ";
    cin>>size;

    cout<<"Enter the elements of arrays ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    j=size-1;

    for(i=0; i<size; i++){
        for(j; j<size-i; j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"The sorted array is ";
    for(j=0; j<size; j++)
        cout<<arr[j]<<"";

    return 0;
}