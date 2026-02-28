#include <iostream>
using namespace std;
void print(int n)
{
	if (n > 0)
	{
		cout << "I love Recursion" << endl;
		print(n - 1);
	}

}

int main()
{
	int Number;
	cin >> Number;
	print(Number);
	return 0;

}
