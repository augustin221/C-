#include <iostream>

template <class T , int size>
class staticArray {
    private: 
        T m_array[size];

    public: 
    T* getArray();

    T& operator[](int index) {
        return m_array[];
    }
} 
template <class T , int size> 
T* staticArray <T , size>::getArray() {
    return m_array;
}   

int main () {
    staticArray<int , 10> intArray;
    for(int count = 0; count < 10; ++count)
        intArray[count] = count;

    for (int count = 9;  count >= 0; --count)
        std::count << intArray[count] << "";
    std::cout << '\n';

    StaticArray<double, 5> doubleArray;

    for(int count = 0; count < 5; ++count)
        doubleArray[count] = 5.5 + 0.1*count;

    for(int count = 0; count < 5; ++count)  
        std::cout <<  doubleArray[count] << '';
}
