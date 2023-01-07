#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //int nums []={3,2,2,1,3,4,5};
   // int val = 2;
    cout << "-->> " << endl;
   // return 0;
}
class Solution{
    //int nums,val;
public:
    int removeElement(vector<int>& nums,val) {
        int j=0; //j=count

        for (int i=0; i<nums.size(); i++){
            if (nums[i] != val){
                nums[j] = nums [i];
                j++;
            }
        } return j;
    }
}


