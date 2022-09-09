#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 4*x*x-7*x+5
#define E 0.005
int  main()
{
	
   int itr=1;
   float xl, xm, xu,fxl, fxu, fxm;
   printf("Assume first initial guess:\n");
   scanf("%f",&xl);
   printf("Assume second initial guess:\n");
   scanf("%f",&xu);
   fxl=f(xl);
   fxu=f(xu);
   if (fxl*fxu>0)
   printf("Solution doesnot exit\n");
   else
   {
	begin:
	xm=(xl+xu)/2;
	fxm=f(xm);
	if((fxl*fxm)<0)
		xu=xm;
      else
      {
	xl=xm;
	 fxl=fxm;
      }
      if((fabs(xu-xl)/xl)<E)
      {
	xm=(xl+xu)/2;
	 printf("\nRoot=%.2f",xm);
	 printf("\nFuctional value =%f",f(xm));
	 printf("\nIteration steps =%d",itr);
      }
      else
      {
itr++;
	 goto begin;
	 
      }
   }
   return 0;
}

