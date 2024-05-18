#include<stdio.h>
#include<time.h>
#include<stdlib.h>



void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 

}


void func(int n)
{

FILE *fptr; 
fptr = fopen("quick.dat","a");
int a[1000],i,j,temp,key;
clock_t t1,t2,t3,t4;
double m;
printf("\n\n the size of array is %d\n",n);

printf("\n1.RANDOM\n");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % n + 1;

}

t1=clock();
quickSort(a, 0, n-1);

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
printf("time complexity for random no: is %f",m);

fprintf(fptr,"%d :",n);
 fprintf(fptr,"%f\n",m);
 fclose(fptr);

//2nd
printf("\n1.ASCENDING\n");

for (i = 0; i<n; i++) 
{
    a[i] = i+1;
    
}

t1=clock();
quickSort(a, 0, n-1);
t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",m);

//3rd
printf("\n1.DESCENDING");

t1=clock();
quickSort(a, 0, n-1);
t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;
printf("\ntime complexity for random no: is %f",m);

}


void main()
{
func(100);
func(200);
func(300);
func(400);
}
