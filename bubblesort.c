#include<stdio.h>
#include<time.h>
#include<stdlib.h>




void func(int n)
{
FILE *fptr; 
fptr = fopen("bub.dat","a");

int a[1000],i,j,temp;
clock_t t1,t2,t3,t4;
double m,o,p;
printf("\n array size %d",n);


printf("\n1.RANDOM :");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % n + 1;
  
}
t1=clock();

//bubble sort
for (i = 0; i < n-1; i++)       
{	  
       for (j = 0; j < n-i-1; j++)  
     	{
        if (a[j] > a[j+1]) 
            {  
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    } 
	} 
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
//bubble sort
for (i = 0; i < n-1; i++)       
{	  
       for (j = 0; j < n-i-1; j++)  
     	{
        if (a[j] > a[j+1]) 
            {  
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    } 
	} 
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
//bubble sort
for (i = 0; i < n-1; i++)       
{	  
       for (j = 0; j < n-i-1; j++)  
     	{
        if (a[j] > a[j+1]) 
            {  
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    } 
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
