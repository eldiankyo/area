#include <iostream>

int main()
{
    unsigned short Width, Length;
    unsigned int Area;

    std::cout << "Add meg a szélességet: ";
    std::cin >> Width;
    std::cout << "Add meg a hosszúságot: ";
    std::cin >> Length;

    Area = Width * Length;

    std::cout << "A terület " << Area << " négyzetméter.\n";

    return 0;
}