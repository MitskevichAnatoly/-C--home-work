#include<iostream>
#include <stdio.h>
#include <cstdlib>

int main()
{
 const int n=5;
 int A[n][n];
 int i,j;
 int a=1;
 for(i=0;i<(n/2+n%2);i++)
 {
   for(j=0;j<(n-2*i);j++)    A[j+i][i]=a++;
   for(j=0;j<(n-2*i)-1;j++)  A[n-i-1][j+i+1]=a++;
   for(j=0;j<(n-2*i)-1;j++)  A[n-j-2-i][n-i-1]=a++;
   for(j=0;j<(n-2*i)-2;j++)  A[i][n-2-i-j]=a++;
 }
 for(i=0;i<n;i++)
 {
    if (i>0) printf("\n");
    for(j=0;j<n;j++) printf("%2d ",A[i][j]);
 }
 printf("\n");
 system("pause");
}
