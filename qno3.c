//program to composite trapezoidal rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*x*x+2*x-5
int main(){
float x0,xn,f0,fn,result,h,a,r;
int i,k;
printf("Enter lower limit\n");
scanf("%f",&x0);
printf("Enter upper limit\n");
scanf("%f",&xn);
printf("Enter value of k\n");
scanf("%d",&k);
h = (xn-x0)/k;
f0 = f(x0);
fn = f(xn);
result = f0+fn;
for(i=1;i<=k-1;i++)
{
a = x0+i*h;
result = result+2*(f(a));
}
result = result*h/2;
printf("The value of integration =%f\n",result);
getch();
return 0;
}