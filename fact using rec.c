
# include<stdio.h>
int fact(int n)
{

if(n==0)
    return(1);
return(n*fact(n-1));


}
int main()
{
    int n,x;
    printf("Enter the number\n");
    scanf("%d",&n);
     x=fact(n);
    printf("Factorial of number is %d\n",x,n);
    return 0;
}
