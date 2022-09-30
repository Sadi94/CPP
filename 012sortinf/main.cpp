#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
class Solution
{
    public:
    //void sort012(int a[], int n)
    void sort012(int num,vector<int> & nums)
    {
        // code here

        int lo = 0;
        int hi = num.size()-1;
        int mid = 0;

        while (mid <= hi){
           switch(nums[mid]){

               //if the element is 0

               case 0:
               swap(nums[lo++], nums[mid++]);
               break;

                //if the element is 1

               case 1:
               mid++;
               break;

                //if the element is 2

               case 2:
               swap(nums[mid], nums[hi--]);
               break;
           }
        }
    }

};
