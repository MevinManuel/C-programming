#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void func(int n)
{
FILE *fptr; 
fptr = fopen("linear.dat","a");

int a[1000],c,e,i;
clock_t t1,t2,t3,t4;
double m,o,p;
printf("\n array size %d",n);


printf("\n1.RANDOM :");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % n + 1;
  
}
t1=clock();

printf("\nLINEAR SEARCH");
     printf("\nEnter a number to be searched\n");
     scanf("%d", &e);
     for (c = 0; c < n; c++)
      {
      if (a[c] == e)    
      {
      printf("Element is present");
      break;
      }
      break;
      }

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
 fprintf(fptr,"%d :",n);
 fprintf(fptr,"%f\n",m);

printf("time complexity for random no: is %f",m);

//2nd

printf("\n\n2.ASSENDING :");

for (i = 0; i<n; i++) 
{
    a[i] =i+1 ;
   
}

t1=clock();
printf("\nLINEAR SEARCH");
     printf("\nEnter a number to be searched\n");
     scanf("%d", &e);
     for (c = 0; c < n; c++)
      {
      if (a[c] == e)    
      {
      printf("Element is present");
      break;
      }
      break;
      }


t2=clock();
p=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",p);

//3rd

printf("\n\n3.DESCENDING :");

for (i = 0; i<n; i++) 
{
    a[i] =n-i ;
    
}

t1=clock();
printf("\nLINEAR SEARCH");
     printf("\nEnter a number to be searched\n");
     scanf("%d", &e);
     for (c = 0; c < n; c++)
      {
      if (a[c] == e)    
      {
      printf("Element is present");
      
      }
      
      }

t2=clock();
o=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",o);
fclose(fptr);

}


void main()
{
func(100);
func(200);
func(300);
func(400);


}
