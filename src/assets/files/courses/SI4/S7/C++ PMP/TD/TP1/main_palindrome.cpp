#include <iostream>
#include <string>

int main()
{
    std::string aString;
    std::cout << "please, give a string: ";
    std::cin >> aString;
    std::cout << "String : " << aString << std::endl;
    int size = aString.size();
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (aString.at(i) != aString.at(j))
        {
            std::cout << "Its not a palindrome" << std::endl;
            return 0;
        }
    }
    std::cout << "It's a palindrome !" << std::endl;

    return 0;
}