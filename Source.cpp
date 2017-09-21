#include <iostream>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n, cnt = 1;
	cin >> n;
	while (n--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
			cout << "Case " << cnt++ << ": Invalid" << endl;
		else if (a == b&&b == c)
			cout << "Case " << cnt++ << ": Equilateral" << endl;
		else if (a == b || b == c || a == c)
			cout << "Case " << cnt++ << ": Isosceles" << endl;
		else
			cout << "Case " << cnt++ << ": Scalene" << endl;
	}
	return 0;
}