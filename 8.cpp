#include <iostream>
int main()
{
    // Объявляем целочисленный объект-массив (создаётся экземпляр Repository8<T>, где T = int)
    Repository8<int> intRepository;
 
    for (int count=0; count<8; ++count)
        intRepository.set(count, count);
 
    for (int count=0; count<8; ++count)
        std::cout << intRepository.get(count) << '\n';
 
    // Объявляем объект-массив типа bool (создаётся экземпляр специализации Repository8<bool>)
    Repository8<bool> boolRepository;
    
    for (int count=0; count<8; ++count)
        boolRepository.set(count, count % 5);
 
    for (int count=0; count<8; ++count)
        std::cout << (boolRepository.get(count) ? "true" : "false") << '\n';
 
    return 0;
}