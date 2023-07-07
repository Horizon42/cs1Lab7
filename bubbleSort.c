#include <stdio.h>

void bubbleSort(int arr[], int x)
{
   int i, j, temp; 
   int swap[7];
   for (i = 0; i < x; i++)
      swap[i] = 0;
   for (i = 0; i < x-1; i++)
   {
       for (j = 0; j < x-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swap[j]++;
           }
       }
   }
   for (i = 0; i < x; i++)
      printf("Number of swaps needed for index %d: %d\n", i, swap[i]);
}

int main()
{
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int x = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, x);
   return 0;
}