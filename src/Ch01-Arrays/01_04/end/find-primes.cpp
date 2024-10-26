#include <iostream>
#include <vector>

using namespace std;

void findPrimes(const int arr[], size_t size, vector<int> &primes)
{
    for (size_t i = 0; i < size; ++i)
    {

        int num = arr[i];
        bool isPrime = true;

        if (num < 2)
            continue;

        for (int z = 2; z * z <= num; ++z)
        {
            if (num % z == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primes.push_back(num); // thêm num vào primes
        }
    }
}

int main()
{
    int numbers[]{4, 7, 12, 3, 9, 17, 29};

    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes; // khai báo hàm vector

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}