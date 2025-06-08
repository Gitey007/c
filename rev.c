# include<stdio.h>
void main()
{
 int a,n,rev=0;
 printf("enter a positive integer");
 scanf("%d",&n);
 while(n>0)
 {
 a=n%10;
 n=n/10;
 rev=rev*10+a;
 }
 printf("Reverse of a number=%d", rev);
}