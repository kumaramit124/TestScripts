#include<stdio.h>

int removeDuplicates(int arr[], int arr_size)
{
    int i,j;
    if (arr_size==0 || arr_size==1) {
        return arr_size;
    }

    //start traverse an element
    j = 0;
    for(i=0; i<arr_size-1; i++)
    {
	if(arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
	}
        arr[j++] = arr[arr_size-1];
    }

    printf("remove the duplicate element\n");
    return j;
}

int main()
{
    int n = 0;
    int i;
    int arr[] = {2,4,5,3,2,4,6,7,4};
    int arr1[] = {0};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("the size of arr: %d\n", arr_size);
    
    // removeDuplicates() returns new size of array.
    n = removeDuplicates(arr, arr_size);
    printf("duplicate: %d\n", n);
    for(i=0; i<n; i++)
    {
        printf("Arr: %d\n", arr[i]);
    }
    return 0;
}
