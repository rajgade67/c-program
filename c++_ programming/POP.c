#include<stdio.h>

int addition (int no1 ,int no2 )
{
int ans = 0;
ans = no1 + no2;
return ans;
}

int substraction (int no1 ,int no2 )
{
int ans = 0;
ans = no1 - no2;
return ans;

}

int main()
{
    int A =11;
    int B =10;
    int result =0;

    result =addition (A,B);
    printf ("addition  is : %d\n",result);
   
    result =substraction (A,B);
    printf ("substraction is : %d\n",result);

return 0;


}