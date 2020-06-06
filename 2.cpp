#include <iostream>
 
template <class T>
T average(T *array, int length)
{
    T sum = 0;
    for (int count=0; count < length; ++count)
        sum += array[count];
 
    sum /= length;
    return sum;
}
 
int main()
{
    int array1[] = { 6, 4, 1, 3, 7 };
    std::cout << average(array1, 5) << '\n';
 
    double array2[] = { 4.25, 5.37, 8.44, 9.25 };
    std::cout << average(array2, 4) << '\n';
 
    return 0;
}

