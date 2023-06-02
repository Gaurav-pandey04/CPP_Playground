//Bubble sorting
#include<iostream>

using namespace std;

int main(){
    int size, i, j, temp, arr[50];

    cout<<"Enter the array size"<<endl;
    cin>>size;

    cout<<"Enter the elemenmts of the array"<<endl;
    for(i=0; i<size; i++)
        cin>>arr[i];

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"The sorted array is: ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;
}