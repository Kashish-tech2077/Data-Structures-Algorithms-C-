#include <iostream>
using namespace std;

int main()
{
    // Program to convert Binary to Decimal Number.

    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter num: ";
    cin >> num;

    while(num > 0)
    {
        // Modulus with 10
        rem = num % 10;
        // Divide by 10
        num = num / 10;
        // Answer
        ans = rem * mul + ans;
        
        mul *= 2;
    }
    cout << ans << endl;
}