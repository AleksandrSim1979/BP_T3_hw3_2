// HW_BP_3_2.cpp : Задача 2. Счётчик

#include <iostream>
#include <windows.h>


class Counter
{
public:

    

    Counter(); // конструктор без параметров

    Counter(int Count_); // конструктор с параметром

    void count();

    void countUpp();

    void countDown();

    int get_curCount()
    {
        return Count;
    }

private:

    int Count;
};


Counter::Counter(int Count_)
{
    Count = Count_;
}
Counter::Counter()
{
    Count = 1;
}

void Counter::count()
{
    std::cout << "Введите начальное значение счётчика: ";
    int usCount;
    std::cin >> usCount;
    Count = usCount;
}

void Counter::countUpp()
{
    Count++;
}

void Counter::countDown()
{
    Count--;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, ".1251"); SetConsoleCP(1251);

    std::string ch_str;

    Counter* counter = nullptr;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

    std::cin >> ch_str;

    std::cout << std::endl;

    if (ch_str == "да")
    {
        int c = 0;

        counter = new Counter(c);

        counter->count();
    }
    else
    {
        counter = new Counter;
    }
    std::string action;

    std::cout << std::endl;

    while (true)
    {
        std::cout << "Введите команду('+', '-', '=' или 'x'): ";

        std::cin >> action;

        if (action == "+")
        {
            counter->countUpp();
        };
        if (action == "-")
        {
            counter->countDown();
        };
        if (action == "=")
        {
            std::cout << counter->get_curCount();

            std::cout << std::endl;
        };
        if (action == "x")
        {
            break;
        }

    }
    std::cout << "До свидания!" << std::endl;

    delete counter;

    return 0;
}
