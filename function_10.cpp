#include<iostream>
using namespace std;
int function(int m,int n)
{
	if(m == 0)
		return 1;
	else if(m == n)
		return 1;
	if(0 < m && m < n)
		return function(m-1,n-1) + function(m,n-1);
	return 0;
}
int main()
{
	int m, n;
	cin >> n >> m;
	cout << function(m,n) << endl;
}
