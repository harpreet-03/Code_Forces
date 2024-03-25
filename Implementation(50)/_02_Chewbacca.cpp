#include <iostream>
#include <climits> 
using namespace std;

// ChewBacca :>

int main()
{
    long long  n;
    cin >> n;

    string num = to_string(n);
    for (int i = 0; i < num.length(); i++)
    {
        int digit = num[i] - '0';
        if (i==0 && digit == 9)
            continue;

       num[i] = min(digit, 9-digit + '0'); //Inverting the digit
    }

    cout<< num << endl;

    return 0;
}
