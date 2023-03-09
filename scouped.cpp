#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
    int some_number = 1;

    {
        int blah = 2;
    }
    // da um erro pq não está no mesmo escopo
    //some_number = blah;
    return 0;
}