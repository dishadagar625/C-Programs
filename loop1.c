#include<stdio.h>
int main()
{
    int l=0;
    do
    {l=l+1;
    printf("%d\n",l);
    }while(l<10);
for (int i=1;i<=5;i++)
{
    for (int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
int m=1;    

for (m = 1; m <= 10; m++)
{
    if (m== 5)
    { 
        break;
        }
    printf("%d \n", m);
    } 
    return 0;
}