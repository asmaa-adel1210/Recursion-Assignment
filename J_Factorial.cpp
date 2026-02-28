#include <iostream>
using namespace std;

long long factorial(long long n)
{
	if (n <= 1)//base case.
		return 1;
	else //recursive case.
		return (n * factorial(n - 1));
}

int main()
{
	long long N;
	cin >> N;
	cout << factorial(N) << endl;
	return 0;
 
}
