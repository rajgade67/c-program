#include<stdio.h>
int main ()

{

    char cArr[4] = { 'a','b','c','d'};
    int iArr[4] = {10,20,30,40};
    float fArr[4] = { 10.f,20.f,30.f,40.f};
    double dArr[4] ={10.0,20.0,30.0,40};

    printf("size of charater array :%lu\n",sizeof(cArr));
    printf("size of integer array :%lu\n",sizeof(iArr));
    printf("size of float array :%lu\n",sizeof(fArr));
    printf("size of double array :\n",sizeof(dArr));

    return 0;
}