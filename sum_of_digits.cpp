#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n < 0)
		n = -n;
	int sum = n%10;
	while(1)
	{
		n = n/10;
		sum = sum + n%10;
		if(n == 0)
			break;
	}
	cout << sum << endl;
}
