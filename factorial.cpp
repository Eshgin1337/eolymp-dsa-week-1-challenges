#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long factorial = 1;
	if(0 <= n && n <= 20)
	{
		for(int i = 1; i <= n; i++)
		{
			factorial *= i;
		}
		cout << factorial << endl;
	}
}

