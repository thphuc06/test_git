#include <iostream>
using namespace std;

template <typename T>
T gay(T a, T b)
{
    return T;

}

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int func(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

bool asc(int a, int b)
{
    return a > b;
}

bool desc(int a, int b)
{
    return a < b;
}

void sort(int arr[], int n, bool (*cmp)(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cmp(arr[i], arr[j]))
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    cout << func(3, 2, sum);
    int arr[5] = {2, 3, 5, 1, 6};

    sort(arr, 5, asc);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << sum(3.0, 5.2);

    return 0;
}