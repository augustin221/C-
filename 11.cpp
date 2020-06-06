#include <iostream>


template <class T , int size >
class StaticArray {
    private: T m_array[size];
    public: T* getArray() {return m_array;}
    T& operator[](int index) {
        return m_array[index];
    }
    void print() {d
        for (int i = 0; i < size; i++) 
            std::cout << m_array[i] << '';
        std::cout << "\n";
    }
};

template <int size> 
class StaticArray <double , size> {
    private:    m_array[size];
    public: double* getArray() { return m_array; } {
        return m_array[index];
    }
    void print() {
        for (int i = 0; i < size; i++) 
            std::cout << std::scientific << m_array[i] << '';
        std::cout << "\n";
    }
        
        int main() {
            staticArray <int ,5> intArray;

            for(int cout = 0; count < 5; ++count)
                inArray[count] = count;
        intArray.print();

        staticArray<double  ,4 >doubleArray;

        for (int count = 0; count < 5; ++count){
            intArray[count] = count;
        intArray.print();

        StaticArray<double , 5>

        for (int count = 0 , count < 4 , ++count);
            doubleArray[count] = (4.0 + 0.1 * count);
        doubleArray.print();

        return 0;
        }
        
        }
}

