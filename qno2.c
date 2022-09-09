#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return 3*x - sin(x) -1;
}
float fd(float x){
	return 3 + cos(x);
}
int main()
{
   int itr=1;
   float xi, x1, fxi, fdxi, root, e;
   printf("\nEnter the initial value:");
   scanf("%f",&xi);
   printf("Enter tolerable error:");
   scanf("%f",&e);
   begin:
   fxi=f(xi);
   fdxi=fd(xi);
   x1=xi-(fxi/fdxi);  
   if((fabs(x1-xi)/x1)<e)
   {
   	
   	printf("\nRoot=%f",x1);
      printf("\nFuction value= %f",f(x1));
      printf("\nIteration steps= %d",itr);
   }
   else
   {
   	xi=x1;
   	fxi=f(x1);
      itr ++;
      goto begin;
      }
   getch();
 }
