#include<stdio.h>
#include<time.h>
void main()
{
 int s[50],n,pos,i,b,q=0;double m;
 clock_t t1,t2;
 printf("enter no of array elements");
 scanf("%d",&n);
 printf("enter array elements");
 for(i=0;i<n;i++)
 {
 scanf("%d",&s[i]);
 }
 printf("the array elements are:\t");
 for(i=0;i<n;i++)
 {
 printf("%d\t",s[i]);
 }
 t1=clock();
 printf("\nenter position of element to be removed");
 scanf("%d",&pos);
 for(i=pos-1;i<n-1;i++)
 {
  s[i]=s[i+1];
 }
 printf("array after deletion is:\n");
 for(i=0;i<n-1;i++) 
 {
  printf("%d\t",s[i]);
 }
 n=n-1;
 b=s[pos];
 for(i=pos-1;i<n;i++)
 {
  if(s[i]>pos)
  { 
    printf("\nthe next largest element is %d",s[i]);
    q=1;
	break;
	}
}

if(q==0)
printf("\nthere is no such next larger element in the array");

 t2=clock();
 m=(double)(t2-t1)/CLOCKS_PER_SEC;
 printf("\ntime taken to complete execution is %f",m);
}
