#include <iostream>
#include <cstring>
 
template <class T, int size> // size является параметром non-type шаблона
class StaticArray
{
private:
	// Параметр size отвечает за длину массива
	T m_array[size];
 
public:
	T* getArray() { return m_array; }
 
	T& operator[](int index)
	{
		return m_array[index];
	}
};
 
template <typename T, int size>
void print(StaticArray<T, size> &array)
{
	for (int count = 0; count < size; ++count)
		std::cout << array[count] << ' ';
}
 
// Шаблон функции print() с частично специализированным шаблоном класса StaticArray<char, size> в качестве параметра
template <int size>
void print(StaticArray<char, size> &array)
{
	for (int count = 0; count < size; ++count)
		std::cout << array[count];
}
 
int main()
{
	// Объявляем массив типа char длиной 14
	StaticArray<char, 14> char14;
 
	strcpy_s(char14.getArray(), 14, "Hello, world!");
 
	// Выводим элементы массива
	print(char14);
 
	// Теперь объявляем массив типа char длиной 12
	StaticArray<char, 12> char12;
 
	strcpy_s(char12.getArray(), 12, "Hello, dad!");
 
	// Выводим элементы массива
	print(char12);
 
	return 0;
}