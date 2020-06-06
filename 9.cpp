#include <iostream>
#include <cstring>

template <class T, int size> 
class StaticArray {
    private:
        T m_array[size];
    public:
        T* getArray() { return m_array;}

        T& operator[] (int index){
            return m_array[index];
        }
};

template <typename T , int size>
void print(StaticArray<T , size> &array) {
    for(int count = 0; count < size; ++count)
        std::cout << array[count] << '';
}

int main()
{
	// Объявляем целочисленный массив
	StaticArray<int, 5> int5;
	int5[0] = 0;
	int5[1] = 1;
	int5[2] = 2;
	int5[3] = 3;
	int5[4] = 4;
 
	// Выводим элементы массива
	print(int5);
 
	return 0;
}