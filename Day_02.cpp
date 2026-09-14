#include <iostream>
#include <climits>
using namespace std;
void binaryConversion(int n)
{
    int binaryNo = 0;
    int place = 1;

    while (n != 0)
    {
        int digit = n % 2;
        binaryNo = binaryNo + digit * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binaryNo;
}

int main()
{
    binaryConversion(987);

    int x = 239;
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    cout << ans;

    return 0;
}
