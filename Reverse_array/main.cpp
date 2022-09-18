//1st method
/*#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n;i++)
        cin>>a[i];
    int i=0;
    int j=n-1;
    while(i<=j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++; j--;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
     return 0;
}
*/
//2nd method

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the size of array: "<<endl;
    int n;   //array size
    cin>> n;
    int a[n];
    for(int i=0; i<n;i++)
        cin>>a[i];

    for(int i=n-1; i>=0; i--)  //
        cout<<a[i]<<" ";
     return 0;
}
