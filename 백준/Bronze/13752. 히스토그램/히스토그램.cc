#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int k;
        cin >> k;

        for (int i = 0; i < k; ++i) {
            cout << "=";
        }
        cout << '\n';
    }

    return 0;
}
