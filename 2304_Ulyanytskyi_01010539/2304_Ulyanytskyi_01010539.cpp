#include <iostream>

int main()
{
    const int start_num = 100;
    const int end_num = 999;
    const int difference = end_num - start_num;

    int counter = 0;

    for (int i = 0; i < end_num - start_num; i++) {
        int units = (i + difference) % 10;
        int decade = ((i + difference) / 10) % 10;
        int hundreds = (i + difference) / 100;

        if (hundreds == decade || hundreds == units || decade == units) {
            ++counter;
        }            
    }

    std::cout << "Counter: " << counter;

    return 0;
}