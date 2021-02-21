#include<iostream>
using namespace std;
int recursion(int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum = sum + i;
	return sum + n;
}

int main()
{
	int n;
	cin >> n;
	cout << recursion(n) << endl;
}
