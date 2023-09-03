#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, n, m, result;
	cin >> x >> n >> m;
	x = x%m;
	result = x;
	if(x >= 1 && n >= 2)
	{
		for(int i = 1; i < n; i++)
		{
			result = result * x%m;
		}
		cout << result%m << endl;
	}
}
