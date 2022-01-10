/**
 * C program to merge two sorted array in ascending order
 */

#include <iostream>
#define MAX_SIZE 100     
using namespace std;
int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    
    cout<<"Enter the size of first array : ";
    cin>>size1;

    
    cout<<"Enter elements in first array : ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }
    
    cout<<endl<<"Enter the size of second array : ";
    cin>>size2;

    
    cout<<"Enter elements in second array : ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }

    mergeSize = size1 + size2;

    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }
    
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

    cout<<endl<<"Array merged in ascending order : ";
    for(i=0; i<mergeSize; i++)
    {
        cout<<"  "<<mergeArray[i];
    }

    return 0;
}
