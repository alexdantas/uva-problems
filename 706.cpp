// LCD Display
#include <iostream>

// |-0-|
// 5   1
// |-6-|
// 4   2
// |-3-|
short has[10][7] =
{
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
//    {0, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}, // 9
}

bool has(int n, Bars bar)
{
    switch (n)
    {
    case 0:
        if (bar == SECOND_HORIZONTAL)
            return false;
        else
            return true;
        break;
    case 1:
        if (bar == FIRST_VERTICAL_RIGHT ||
            bar == SECOND_VERTICAL_RIGHT)
            return true;
        else
            return false;
        break;
    case 2:
        break;
    case 8: return true; break;

    }
}

int main(int argc, char* argv[])
{
    std::string numberS;
    std::vector<int> numberV;


    std::cin >> numberS;

    // Storing string digits into an array of integers.
    for (int i = 0; i < numberS.length(); i++)
        numberV[i] = std::stoi(numberS[i]);


    //

    return 0;
}



