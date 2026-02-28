#include <iostream>
#include<vector>
using namespace std;
void printEven(int arr[] , int sizee , int index)
{
    if (index >= sizee) //base case.
        return;
    printEven(arr, sizee, index + 2);// recursive call.

    cout << arr[index] << " ";
}

int main()
{
    int n; //number of elements.
    cin >> n;
    vector<int>arr(n);
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    printEven(arr.data(), n, 0);

    return 0;
}