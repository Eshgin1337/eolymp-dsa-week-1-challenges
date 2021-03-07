#include <iostream>
#include <algorithm>
using namespace std;
int Binary_Search(int arr[], int left, int right, int x)
{
	while(left <= right)
	{
		int mid = left + (right - left)/2;
		if (arr[mid] == x)
			return mid;
		if(arr[mid] < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
int main(void)
{
	int n, q;
	scanf("%d %d", &n, &q);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < q; i++)
	{	
		int x;
		scanf("%d", &x);
		int ans = Binary_Search(arr, 0, n - 1, x);
		if(ans == -1)
		{
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
	}
}