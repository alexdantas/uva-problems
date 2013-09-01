#include <iostream>

bool isOdd(int n)
{
    return !((n % 2) == 0);
}

int cycles(int n)
{
    // number of cycles including 1
    int count = 1;

    while (n != 1)
    {
        if (isOdd(n))
            n = (3 * n) + 1;
        else
            n = n / 2;
        count++;
    }
    return count;
}

int main(int argc, char* argv[])
{
    int i, j;

    while (std::cin >> i >> j)
    {
        int a = i;
        int b = j;

        if (a > b) // swapping if order is messed up
        {
            int tmp = a;
            a = b;
            b = tmp;
        }

        int biggest = 0;

        for (int k = a; k <= b; k++)
        {
            int current = cycles(k);
            if (current > biggest)
                biggest = current;
        }

        std::cout << i << " " << j << " " << biggest << std::endl;
    }

    return 0;
}

