//program to find a solution of linear algebraic equations using Gauss Jordan method
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
int n,i,k,j,p,q;
float pivot, term, a[10][10];
printf("Enter dimension of system of equations\n");
scanf("%d",&n);
printf("Enter coefficient augmented matrix\n");
for(i=0;i<n;i++){
for(j=0;j<n+1;j++){
scanf("%f",&a[i][j]);
}
}
for(k=0;k<n;k++){
pivot = a[k][k];
for(p=0;p<n+1;p++)
a[k][p]=a[k][p]/pivot;
for(i=0;i<n;i++){
term = a[i][k];
if(k!=i){
for(j=0;j<n+1;j++){
a[i][j] = a[i][j]-a[k][j]*term;
}
}
}
}
printf("Solution Vector\n");
for(i=0;i<n;i++){
printf("x%d = %f\n",i+1,a[i][3]);
}
getch();
return 0;
}