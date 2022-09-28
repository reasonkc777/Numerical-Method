// program to approximate the functional value at any given x from given n no. of  data using Newton’s backward difference interpolation. 
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
if(n<=1)
return 1;
else
return n*factorial(n-1);
}
int main()
{
int n,i,j,k;
float v=0, p,xp,x[10],fx[10], bd[10],h,s;
printf("Enter number of points\n");
scanf("%d",&n);
printf("Enter the value at which interpolated value is needed\n");
scanf("%f",&xp);
for(i=0;i<n;i++)
{
printf("Enter the value of x and fx at i=%d\n",i);
scanf("%f%f",&x[i],&fx[i]);
}
h = x[1]-x[0];
s = (xp-x[n-1])/h;
for(i=0;i<n;i++)
{
bd[i]=fx[i];
}
for(i=n-1;i>0;i--)
{
for(j=0;j<i;j++)
{
bd[j]=(bd[j+1]-bd[j]);
}
}
v = bd[n-1];
for(i=1;i<n;i++)
{
p=1;
for(k=1;k<=i;k++)
{
p = p*(s+k-1);
}
v = v+(bd[n-i-1]*p)/factorial(i);
}
printf("Interpolation value = %f",v);
getch();
return 0;
}