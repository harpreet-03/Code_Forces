
#include <iostream>

using namespace std;
int main()
{
    int n;
    string str;

    cin >> n;

    int X = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> str;
        if (str == "++X" || str == "X++")
        {
            ++X;
        }
        else
        {
            --X;
        }
    }

    cout << X << endl;

    return 0;
}