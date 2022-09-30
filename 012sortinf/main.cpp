// Upload your working solution!

#include <bits/stdc++.h>

using namespace std;


class Solution
{
    public:
    //void sort012(int a[], int n)
    void sort012(vector<int> & num)
    {
        // code here
       /*
        int n = (int)nums.size();

        int f=0, s=0,t=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                f++;
            else if(nums[i]==1)
                s++;
            else
                t++;
        }

        for(int i=0;i<f;i++){
            nums[i]=0;
        }
        for(int i=f;i<f+s;i++){
            nums[i]=1;
        }
        for(int i=f+s;i<f+s+t;i++){
            nums[i]=2;
        }

        */


        // Method
        /*
        int l=0;
        int m=0;
        int h=n-1;

        while(m<=h){
            int x = nums[m];
            if(x==0){
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if(x==1){
                m++;
            }
            else{
                swap(nums[h], nums[m]);
                h--;
            }
        }

    }
   */

        int lo = 0;
        int hi = num.size()-1;
        int mid = 0;

        while (mid <= hi){
           switch(num[mid]){

               //if the element is 0

               case 0:
               swap(num[lo++], num[mid++]);
               break;

                //if the element is 1

               case 1:
               mid++;
               break;

                //if the element is 2

               case 2:
               swap(num[mid], num[hi--]);
               break;
           }
        }
    }

};
