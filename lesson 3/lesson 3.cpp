#include <iostream>

int main()
{
    int a;
    int b;
    int c;

    std::cout << " Enter the number: ";
    std::cin >> a ;

    std::cout << " Enter more number: ";
    std::cin >> b;

    std::cout << "Change the values in places \n";

    if (b > a)
    {
        c = b;
        b = a;
        a = c;
    }
        std::cout << "Smaller number:" << b << std::endl;
        std::cout << "More number:" << a << std::endl;
  
    return 0;
}
