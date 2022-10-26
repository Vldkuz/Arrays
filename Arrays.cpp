#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int size;
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand();
    }

    for (int i = 0; i < size-1; ++i)
    {
        if (arr[i + 1] <= arr[i])
        {
            cout << "Массив не возрастающий" << endl;
            return 0;
        }
    }

    cout << "Массив возрастающий" << endl;

    return 0;
}
