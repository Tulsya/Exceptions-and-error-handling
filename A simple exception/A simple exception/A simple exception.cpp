#include <iostream>
#include <stdexcept>

class bad_length : public std::exception {
public:
    virtual const char* what() const override {
        return "Вы ввели слово запретной длины!";
    }
};

int function(std::string str, int forbidden_length) {
    int len = str.length();
    if (len == forbidden_length) {
        throw bad_length();
    }
    return len;
}

int main()
{
    system("chcp 1251");

    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::string word;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> word;
        try {
            int len = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\" равна " << len << std::endl;
        }
        catch (const bad_length& e) {
            std::cout << e.what() << " До свидания" << std::endl;
            return 0;
        }
        catch (...) {
            std::cout << "Неизвестная ошибка" << std::endl;
            return 0;
        }
    }
    return 0;
}
