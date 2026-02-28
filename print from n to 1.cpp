#include <iostream>
using namespace std;
void print(int n)
{
	if (n > 0)
	{
		cout << n;
		if (n > 1)
		{
			cout << " ";
			print(n - 1);
		}
	}
}


int main()
{
	int number;
	cin >> number;
	print(number);

}