#include <iostream>
using namespace std;

void invertedPyramid(int n, int row)
{
    // Base case
    if (row > n)
        return;

    // Print spaces
    for (int i = 0; i < row - 1; i++)
        cout << " ";

    // Print stars
    for (int i = 0; i < 2 * (n - row) + 1; i++)
        cout << "*";

    cout << endl;

    // Recursive call
    invertedPyramid(n, row + 1);
}

int main()
{
    int n;
    cin >> n;

    invertedPyramid(n, 1);

    return 0;
}
