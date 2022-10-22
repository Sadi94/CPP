#include <iostream>

using namespace std;

int sum(int array[],int n){
	int sum =0;
	for (int i=0; i< n; i++)
	sum =sum + array[i];
	return sum;

}

int main()
{
    int a1[]={1,2,6,9,8,7,6,5};
    int a2[]={100};
	int a3[]={99,99};
	int a4[]={4,-4,9,-9};
   // int n = sizeof(a1) / sizeof(a1[0]);
    cout<< "a1 sum: "<<sum(a1,8)<<endl;
    cout<< "a2 sum: "<<sum(a2,1)<<endl;
    cout<< "a3 sum: "<<sum(a3,2)<<endl;
    cout<< "a4 sum: "<<sum(a4,4)<<endl;
	return 0;

}
