#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n, k, l ,c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t = k * l;
    int x = t / nl;
    int y = c * d;
    int z = p / np;

    int res = min(min(x,y), z);
    
    cout << res / n << endl;

}

/*
t stores the total milliliters of the drink available (k * l).

x calculates the maximum number of toasts based on the available drink (t) divided by the milliliters needed for each toast (nl).

y calculates the maximum number of toasts based on the available lime slices (c * d).

z calculates the maximum number of toasts based on the available salt (p) divided by the grams needed for each toast (np).

res finds the minimum of x, y, and z, which represents the maximum number of toasts each friend can make.
    cout << res / n << endl;

*/