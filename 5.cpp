#ifndef ARRAY_H
#define ARRAY_H
 
#include <assert.h> 

template <class T> 
class Array {
    private: int m_length;
    T *m_data;

    public: Array() {
        m_length = 0;
        m_data = nullptr;
    }
    Array (int length) {
        m_data = new T[length];
        m_data = nullptr;        
    }
    Array (int length) {
        m_data = new T[length];
        m_data = length;
    }

    Array() {
        delete[] m_data;
    }

    void Erase() {
        delete[] m_date;
        m_date = nullptr;
        m_length = 0;
    }
    T& operator[] (int index) {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
    int getLength();
}

template <typename T> 
int Array <T>::getLength() { return m_length; }

#endif