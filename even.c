#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
  
    return 0;
}