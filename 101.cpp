// The Blocks Problem

#include <iostream>
#include <vector>
#include <stack>

std::vector< std::stack <int> > block;

void move(int a, int b, bool over)
{
    while (!(block[a].empty()))
    {
        int tmp = block[a].top();
        block[a].pop();

        block[a].push(tmp);
    }
    while (!(block[b].empty()))
    {
        int tmp = block[b].top();
        block[b].pop();

        block[b].push(tmp);
    }
}

void pile(int a, int b, bool over)
{

}

int main(int argc, char* argv[])
{
    // reading max size
    int blockSize;
    std::cin >> blockSize;
    block.resize(blockSize);

    // initializing blocks
    for (int i = 0; i < blockSize; i++)
        block[i].push(i);

    while (true)
    {
        std::string string1, string2;
        int a, b;

        std::cin >> string1;
        if (string1 == "quit")
            break;

        // alright, da certo!
        if (string1 == "move")
        {
            if (string2 == "over")
                move(a, b, true);
            else // onto
                move(a, b, false);
        }
        else // string pile
        {
            if (string2 == "over")
                pile(a, b, true);
            else // onto
                pile(a, b, false);
        }
    }

    return 0;
}




