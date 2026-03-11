#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name; // 첫 번째 단어 추출
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name; // 두 번째 단어 추출
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
    return 0;
}