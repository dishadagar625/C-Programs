#include<stdio.h>
int main()

{
    int n;
    printf("enter value for no of terms:");
    scanf("%d",&n);
    int s[n];
    s[0]=0;
    s[1]=1;

    for (int i=2;i<n;i++)
    {s[i]=s[i-2]+s[i-1];
    }
    printf("the required fibonacci series is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",s[i]);

    }
    return 0;

}