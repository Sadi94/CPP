//test

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*int x[6] = {1,2,3,4,5,6};
    int *p=x;
    int i;
    for (i=0; i<2; i++){
        int temp = *(p+i);
    *(p+i) = *(p+5-i);*(p+5-i) = temp;

    }
    for (i=0; i<6;i++)
    cout <<x[i]<< " " << endl;
    return 0;*/

    /*
    static int i =6 ;
    if (--i){
        main();
        printf("%d" , i);
    }
    */

    /*int i=0;
    for (i=1; i<20; i++){
        switch(i){
        case 0:
        i+=5;
        case 1:
        i+=2;
        case 5:
        i+=5;
        default:
            i+=4;
            break;
        }
        printf("%d",i);
    }
    getchar();
    return 0;
    */

    struct Teacher{
    int empid[5];
    int salary[2];

    employee *s;
    }teacher;

    printf("%d%d", sizeof(Teacher),sizeof(teacher.empid));
    return 0;
}
