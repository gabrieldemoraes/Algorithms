#include <iostream>
#include <string>
#include <vector>

std::vector<int> intToBinary(int &value)
{
    std::vector<int> binaryValue;
    for (int i = 0; value > 0; ++i)
    {
        binaryValue.push_back(value % 2);
        value = value / 2;
    }
    return binaryValue;
}

void rightToLeft(std::vector<int> &binary, std::string &sRightToLeft)
{
    for (std::vector<int>::iterator it = binary.begin(); it != binary.end(); ++it)
    {
        sRightToLeft += std::to_string(*it);
        std::cout << *it;
    }
    std::cout << std::endl;
}

void leftToRight(std::vector<int>& binary, std::string &sLeftToRight)
{
    for (std::vector<int>::reverse_iterator it = binary.rbegin(); it != binary.rend(); ++it)
    {
        sLeftToRight += std::to_string(*it);
        std::cout << *it;
    }
    std::cout << std::endl;
    
}

int main()
{
    int value;
    
    std::string sRightToLeft, sLeftToRight;

    std::cin >> value;

    std::vector<int> binary = intToBinary(value);

    rightToLeft(binary, sRightToLeft);

    leftToRight(binary, sLeftToRight);

    std::cout << sRightToLeft << std::endl;
    std::cout << sLeftToRight << std::endl;

    return 0;
}

