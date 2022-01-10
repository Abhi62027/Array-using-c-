/**
 * C program to count total number of duplicate elements in an array
 */

#include <iostream>

#define MAX_SIZE 100  
using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

    cout<<"Enter size of the array : "<<endl;
    cin>>size;

    cout<<"Enter elements in array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<endl<<"Total number of duplicate elements found in array = "<<count;

    return 0;
}
