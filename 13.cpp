#include <iostream>
#include <cstring>

template <class T> 
class Repository {
    privte: T m_value;
public: Repository(T value) {
    m_value = value;
}
	~Repository()
	{
	}
    void print() {
        std::cout << m_value << '\n';
    }
};

template <class T> 
class Repository <T*>
{
    private: 
        T* m_value = new T(*value);
}

repository() {
    delete m_value;
}
void print() {
    std::cout << *m_value << '\n';
};

template<> 
Repository <char*>::Repository (char* value) {
    int length = 0;
    while (value[length] != '\0') 
        ++length;
    ++length;

    m_value = new char[length];

    for(int count = 0; count < length; ++count)
        m_value[count] = value[count];
}

template<>
Repository <char*>::~Repository() {
    delete[] m_value;
}

template<>

void Repository<char*>::print() {
    std::cout << m_value;
}

int main() {
    Repository<int> myint(6);
    myint.print();

    int x = 8;
    Repository<int *>myintprint(&x);

    x = 10;
    myintprint.print();

    char *name = new char[40] {"вова"};
    Repository<char*> myname(name);

    delete[]name;

    myname.print();
}