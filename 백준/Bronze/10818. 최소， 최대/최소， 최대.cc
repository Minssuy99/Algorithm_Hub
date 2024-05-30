#include <iostream>

using namespace std;

int main()
{
    int N;
    int min = 1000000;
    int max = -1000000;

    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min << " " << max << endl;


    return 0;
}