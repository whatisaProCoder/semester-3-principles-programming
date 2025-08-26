// Write a C++ program to find the maximum of 3 numbers.

#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else if (c > a && c > b)
        return c;
}

int main() {
    int a, b, c;

    cout << "Enter the three numbers :" << endl;
    cin >> a >> b >> c;

    int maxn = max(a, b, c);

    cout << "Maximum number : " << maxn << endl;
}

/* OUTPUT
Enter the three numbers :
3 7 4
Maximum number : 7
*/