// HW_BP_3_2.cpp : Задача 2. Счётчик

#include <iostream>
#include <windows.h>


class Counter
{
public:

    int usCount;

    Counter(); // конструктор без параметров

    Counter(int Count_); // конструктор с параметром

    int get_count();

    int get_countUpp();

    int get_countDown();

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

int Counter::get_count()
{
    std::cout << "Введите начальное значение счётчика: ";
    std::cin >> usCount;
    Count = usCount;
    return Count;
}

int Counter::get_countUpp()
{
    return Count++;
}

int Counter::get_countDown()
{
    return Count--;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, ".1251"); SetConsoleCP(1251);

    std::string ch_str;

    Counter* counter = new Counter;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

    std::cin >> ch_str;

    std::cout << std::endl;

    if (ch_str == "да")
    {
        Counter Counter(int);

        counter->get_count();

    }
    else
    {
        Counter Counter;
    }
    std::string action;

    std::cout << std::endl;

    while (true)
    {
        std::cout << "Введите команду('+', '-', '=' или 'x'): ";

        std::cin >> action;

        if (action == "+")
        {
            counter->get_countUpp();
        };
        if (action == "-")
        {
            counter->get_countDown();
        };
        if (action == "=")
        {
            counter->get_curCount();

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
