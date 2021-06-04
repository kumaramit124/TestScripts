/* C program to remove duplicate elements in an array */
#include<stdio.h>

// Code without the usage of pointers
int remove_duplicate_elements(int arr[], int n)
{

	if (n==0 || n==1)
	{
		return n;
	}

	int temp[n];

	int j = 0;
	int i;
	for (i=0; i<n-1; i++)
	{
		if (arr[i] != arr[i+1])
		{
			temp[j++] = arr[i];
		}
	temp[j++] = arr[n-1];
	}

	for (i=0; i<j; i++)
	{
		arr[i] = temp[i];
	}

	printf("Return the duplicate element\n");
	return j;
}

/** @fun    : main
 *  @desc   : The main function which calles the method to cal the
 *            duplicate element in an array
 *  @return : On sucess fun return 0
 * */
int main()
{
	int n;
	//scanf(“%d”,&n);
	int arr[] = {1,2,3,4,2,3,5,6,7};
	n = sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d",arr[i]);
	}
        printf("\n");
	n = remove_duplicate_elements(arr, n);


	for (i=0; i<n; i++)
		printf("%d ", arr[i]);

	return 0;
}
