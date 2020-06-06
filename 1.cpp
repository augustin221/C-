$include <isotream> 

template <typename T> 
const T& max (const T& a , const T& b) 
{
    return (a > b ) ? a : b;
}

int main() {
    int i = max (4 , 8);
        std::cout << i << '\n';
        
        dobule d = max (7.56, 21.345);
        const::cout << d << '\n';
        
        char ch = max ("b" , "g");
        std::cout << ch << '\n''
}
