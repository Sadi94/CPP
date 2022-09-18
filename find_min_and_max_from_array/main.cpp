#include <bits/stdc++.h>
using namespace std;

//int main(int argc, char const *argv[])
int main()
{
    cout<<"Enter the size of an array: ";
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
            cin>> arr[i];
    }
    //min max logic
    int currmin=arr[0];
    int currmax=arr[0];

    for(int i=0;i<n;i++){
        //max element
        if (arr[i]>currmax){
            currmax=arr[i];
        }
        //min element
        if(arr[i]<currmin){
            currmin=arr[i];
        }
    }
    cout<<"Max value: "<<currmax<<endl;
    cout<<"Min value: "<<currmin<<endl;

    return 0;
}
