#include <iostream>
using namespace std;

void pyramid(int n, int row)
{
    // Base case
    if (row > n)
        return;

    // Print spaces
    for (int i = 0; i < n - row; i++)
        cout << " ";

    // Print stars
    for (int i = 0; i < 2 * row - 1; i++)
        cout << "*";

    cout << endl;

    // Recursive call
    pyramid(n, row + 1);
}

int main()
{
    int n;
    cin >> n;

    pyramid(n, 1);

    return 0;
}