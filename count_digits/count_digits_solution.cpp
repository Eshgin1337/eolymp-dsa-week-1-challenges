#include<iostream>
using namespace std;
int main()
{
	
	int count = 0;
	long long n;
	cin >> n;
	if(n == 0)
		cout << 1 << endl;
	if (0 < n)
	{
		while(n != 0)
		{
			n = n/10;
			++count;
		}
		cout << count << endl;
	}
}
