//Line 1: line comment: -- This is a program that implements and tests the quicksort algorithm
//Line 2: line comment: -- to sort an array of integers.
//Line 4: line comment: -- Global variable use by the random number generator function.
//Line 7: line comment: -- A simple random number generator.
//Line 8: line comment: -- Change the global variable next_random 
//Line 9: line comment: -- to produce a different sequence of pseudorandom numbers.
//Line 19: line comment: -- Swap the elements of array a at positions i and j
//Line 20: line comment: -- assuming that i and j are valid indices
//Line 28: line comment: -- Impelementation of the quick sort algorithm
//Line 52: line comment: -- Print contents of an array
//Line 65: line comment: -- Test quickSort
//Line 74: line comment: -- Create an array of random numbers from 0 to 999
#include <stdio.h> 
 #include "cgen.h"
 #include <string.h> 
	#include "thetalib.h"
  int next_random;
int next()
{
next_random = (next_random * 1103515245 + 12345) % 2147483648;

if(next_random < 0){
 next_random = -next_random;
 
 }

 return next_random;
}
void swap(int a[],int i,int j)
{
int temp;

temp = a[i];
a[i] = a[j];
a[j] = temp;

 return;
}
void quickSort(int a[],int low,int high)
{
int pivot ,i ,j;

if(low < high){
 pivot = low;
 i = low;
 j = high;
 while(i < j){
 while(a[i] <= a[pivot] && i < high){
 i = i + 1;
 
 }
 while(a[j] > a[pivot]){
 j = j - 1;
 
 }
 if(i < j){
 swap(a,i,j);
 
 }
 
 }
 swap(a,pivot,j);
 quickSort(a,low,j - 1);
 quickSort(a,j + 1,high);
 
 }

 return;
}
void printArray(int a[],int size)
{
int i;

for(i=0;i<size;i+=1){
 writeInteger(a[i]);
 if(i == size - 1){
 continue;
 
 }
 writeStr(", ");
 
 }
writeStr("\n");

 return;
}
int main(int argc, char *argv[])
{
const int aSize = 100;
 int i;
 int a[100];
 writeStr("Give a seed for the random number generator: ");
 readInteger(next_random);
 for(i=0;i<aSize;i+=1){
 a[i] = next() % 1000;
 
 }
 writeStr("Random array generated: ");
 printArray(a,aSize);
 quickSort(a,0,aSize - 1);
 writeStr("Sorted array: ");
 printArray(a,aSize);
}

//Accepted!
