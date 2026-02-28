#include <iostream>
#include <vector>
using namespace std;

void toBinary(long long n)
{
    if (n == 0)//base case.
        return;
    toBinary(n / 2);//recursive call.
    cout << (n % 2);// after recursion.

}


int main()
{
    int T;
    cin >> T;
    vector<long long> arr(T);  // dynamic array of size T

    //loop to read numbers:
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    //loop to print the binary value:
    for (int i = 0; i < T; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0;
        }
        toBinary(arr[i]);
        cout << endl;
       
    }

    return 0;
}
