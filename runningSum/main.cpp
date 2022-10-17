#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     vector<int> runningSum(vector<int>& nums);
    cout << "Running Sum is: "<<runningSum << endl;

}

//leetcode solution part
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i=1; i< nums.size();++i)
            nums[i]+=nums[i-1];
        return nums;

    }
};
