#include <iostream>
using namespace std;
int main()
{
	int n;
	cin.tie(NULL);
	cin >> n;

	for (int i = n; i >=1; i--)
	{
		cout.sync_with_stdio(false);
		cout << i << "\n";
	}

	return 0;
}
