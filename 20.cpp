/**
 * C program to sort even and odd elements of an array separately
 */
  
#include <iostream>
#include <limits.h> 
  
#define MAX_SIZE 1000 
using namespace std;
  

void arrange(int arr[], int len, int pivot);
void sort(int arr[], int start, int end);
void print(int arr[], int len);
  
  
  
int main()
{
    int arr[MAX_SIZE], i, n;
    int pivot, evenCount, oddCount;
  
    pivot = 0;
    evenCount = oddCount = 0;
  
   
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements in the array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
  
       
        if(arr[i] & 1)
            oddCount++;
        else
            evenCount++;
    } 
     
    
    pivot = (evenCount > oddCount) ? evenCount : oddCount;
  
    print(arr, n);
  
    
    arrange(arr, n, pivot);
     
    
    cout<<endl<<"Elements after arranging even and odd elements separately"<<endl;
    print(arr, n);
  
    
    sort(arr, pivot, n);
  
   
    sort(arr, 0, pivot);
  
   
    cout<<endl<<"Final array after sorting even and odd elements separately"<<endl;
    print(arr, n);
  
    return 0;
}
  
  
  

void arrange(int arr[], int len, int pivot)
{
    int i, j, temp;
  
    for(i=0; i<pivot; i++)
    {
      
        if(arr[i] & 1)
        {
            for(j=pivot; j<len; j++)
            {
              
                if(!(arr[j] & 1))
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }
}
  
  
  

void sort(int arr[], int start, int end)
{
    int i, j, temp;
    int len = start + end;
  
    for(i=start; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
  
  
  

void print(int arr[], int len)
{
    int i;
    cout<<"Elements in the array: ";
    for(i=0; i<len; i++)
    {
        cout<<"  "<<arr[i];
    }
    cout<<endl;
}
