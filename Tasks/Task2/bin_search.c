#include <stdio.h>
int bin_search(int key,int arr[],int size){
	int start = 0;
	int end = size-1;
	while (start<=end)
		{
			int mid = (end+start)/2;
			if (arr[mid]==key)
			{
				return mid;
			}
			else if (arr[mid]>key)
			{
				end =mid-1;
			}
			else
			{
				start=mid+1;
			}

		}
		return -1;
	}
int main ()
{
	int my_arr[]={2,3,4,5,6,7};
	int found_index=bin_search(5,my_arr,6);
	printf("found index=%d \n",found_index);
	return 0;
}
