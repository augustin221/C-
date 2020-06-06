#ifndef ARRAYINT_H
#define ARRAYINT_H
 
#include <assert.h> 
 
class ArrayInt
{
private:
    int m_length;
    int *m_data;
 
public:
    ArrayInt()
    {
        m_length = 0;
        m_data = nullptr;
    }
 
    ArrayInt(int length)
    {
        assert(length > 0);
        m_data = new int[length];
        m_length = length;
    }
 
    ~ArrayInt()
    {
        delete[] m_data;
    }
 
    void Erase()
    {
        delete[] m_data;
        
        m_data = nullptr;
        m_length = 0;
    }
 
    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
 
    int getLength() { return m_length; }
};
 
#endif