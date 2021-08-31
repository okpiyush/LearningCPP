#include <bits/stdc++.h>
using namespace std;

//bubble sorting
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    };
};
//selection sort
void selectionSort(int arr[], int n)
{
  int i, j;
  int min, temp;

  for (i = 0; i < n-1; i++)
  {
    min = i;
    for (j = i+1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
 
//printing arrays
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



//function main
int main()
{
    int arr[] = {45,75,86,95,78,47,20,01,24,15,32,43,52,76,81,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    //bubbleSort(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}