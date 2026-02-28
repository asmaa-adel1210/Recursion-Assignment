#include <iostream>
#include <string>
using namespace std;

int countVowels(string s, int index)
{
    // Base case
    if (index >= s.length())
        return 0;

    
    char c = tolower(s[index]); 

    
    int count = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;


    return count + countVowels(s, index + 1);
}

int main()
{
    string s;
    getline(cin, s); 

    cout << countVowels(s, 0) << endl;

    return 0;
}
