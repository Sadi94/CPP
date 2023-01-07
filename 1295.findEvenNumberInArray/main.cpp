#include <iostream>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0, temp;
        for(int element : nums)  //for each loop;
        {
            int noOfDigits=0;
            while(element !=0){
                //int rem = element % 10;
                noOfDigits +=1;
                element/=10; //12 ->1 ->0;
            }
            if(noOfDigits%2 ==0) // if the no of digitsare even or not
            count+=1; // that yes this number has even of digit in it
        }
       // return count;
    }
};
int main(){
    vector<int>findNumbers;
    return count;
}
