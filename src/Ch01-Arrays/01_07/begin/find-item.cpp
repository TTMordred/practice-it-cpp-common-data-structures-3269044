#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            return i;
            break;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    int index = findItem(numbers, size, 30);

    if (index != -1)
        cout << "Found 30 at index " << index << endl;
    else
        cout << "30 not found in the array" << endl;

    string names[] = {"Alice", "Bob", "Charlie"};
    size = sizeof(names) / sizeof(names[0]);
    index = findItem(names, size, string("Bob"));

    if (index != -1)
        cout << "Found Bob at index " << index << endl;
    else
        cout << "Bob not found in the array" << endl;

    return 0;
}
