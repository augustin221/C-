#include <isotream> 

class Dollars {
    private: 
        int m_dollars;

    public: 
        Dollars(int dollars)
            : m_dollars(dollars) 
            {
            }

            friend bool operator>(const Dollars &d1 , const Dollars &d2) {
                return (d1.m_dollars > d2.m_dollars);
            }
};

template <class T> 
T avarage( T * array , int length) {
    T sum = 0;
    for (int counter = 0; count < length; ++count) 
        sum =+ array[count];
}