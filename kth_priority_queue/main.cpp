#include<bits/stdc++.h>
#include <iostream>

using namespace std;
/*
void run(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdin);
#endif // ONLINE_JUDGE
}
*/

int main()
{
    //run();
    int t;
    cout<<"Enter test Cases number: ";
    cin>> t;
    while(t--){
        int n;
        cout<<"Enter Array size: ";
        cin>> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        int k;
        cout<<"Enter k-th value: ";
        cin>> k;

        priority_queue<int, vector<int>,greater<int> > p;
        for (int i=0;i<n;i++){
            p.push(a[i]);
        }
        int ans,i=1;
        while(!p.empty()){
            if(i==k){
                ans=p.top();
                break;
            }
            i++;
            p.pop();
        }
        cout<<"K-th smallest element in the given array is: "<<ans<<endl;
    }
    return 0;
}
