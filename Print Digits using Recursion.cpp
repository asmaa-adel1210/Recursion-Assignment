#include <iostream>
#include<vector>
using namespace std;

void print_digits(long long n)
{
    if (n == 0)//Base case.
        return;
    print_digits(n / 10);   //recursive call.
    cout << n % 10 << " "; //after recursion.
   
}

int main()
{
    int num_of_cases;
    cin >> num_of_cases;
    vector<long long> arr(num_of_cases);
    
    //loop to read numbers 
    for (int i = 0; i < num_of_cases; i++)
    {
        cin >> arr[i];
         
    }
    //loop to print digits
    for (int i = 0; i < num_of_cases ; i++)
    {
        if (arr[i] == 0)
            cout << 0;
        else
            print_digits(arr[i]);
        cout << endl;
    }
    
}
