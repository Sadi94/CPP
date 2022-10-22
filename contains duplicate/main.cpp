#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//219. contains duplicate ii
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])>0 && abs(mp[nums[i]]-i)<= k){
                return true;
            }
            mp[nums[i]]=i;

        }
        return false;

    }
};

//66. plus One
//    plus two just carry value will be 2
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 1;
        int n = digits.size();
        for (int i = n-1; i>= 0; i--){
            int num = digits[i] + carry;
            digits[i]= num%10;
            carry= num/10;

        }
        if (carry>0){
            digits.push_back(0);
            n=digits.size();
            for (int i=n-1; i>0; i--){
                digits[i]= digits[i-1];

            }
            digits[0] = carry;

        }
        return digits;

    }
};
/*
int main()
{
    cout << " " << endl;
    return 0;

}
*/
