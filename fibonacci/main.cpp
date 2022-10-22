#include<bits/stdc++.h>
#define ll long long

using namespace std;

//class

class myClass{
  public:

   string name;  //
   int age;  //4 byte
   double salary; //8 byte
};

// void print(string str,int age,int salary){

//     cout<<str<<endl;
//     cout<<age<<endl;
//     cout<<salary<<endl;

// }

int main(){

ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);



     int n;
     cin>>n;


     //one type
     // int a=0,b=1,res=0;

     // cout<<a<<" "<<b<<" ";


     // for(int i=2;i<n;i++){

     //    res=a+b;

     //    a=b;
     //    b=res;
     //    cout<<res<<" ";
     // }
     // cout<<endl;


     //array


     int ar[n];

     ar[0]=0,ar[1]=1;

     for(int i=2;i<n;i++){

        ar[i]=ar[i-1]+ar[i-2];


     }

     for(int i=0;i<n;i++){
       cout<<ar[i]<<" ";
     }

     cout<<endl;

}
