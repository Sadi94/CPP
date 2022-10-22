#include <iostream>
//#include<conio.h>
using namespace std;

int main()
{
    int n, row,col;
    cin>>n;

    for(row=1; row<=n; row++){
        for (col=1; col <= row; col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }
   // getch();
    return 0;
}
/*
#include <iostream>
#include<conio.h>

using namespace std;

int main() {

    int rows, i, j;
    cout << "Enter the number of rows : ";
    cin>>rows;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            cout << " "<<j;
        }
        cout << "\n";
    }

    getch();
    return 0;
}
*/
