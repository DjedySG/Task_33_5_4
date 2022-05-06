#include <iostream>
#include <vector>

template <class T>
T average(T* array, int length)
{
    T sum = 0;
    for (int count = 0; count < length; ++count)
        sum += array[count];

    sum /= length;
    return sum;
}

template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array (8):";
    for (int i = 0; i < 8; ++i)
    {
        std::cin >> array[i];
    }
}

int main()
{
    int array1[8];
    input(array1);
    std::cout << average(array1, 8) << '\n';
}

