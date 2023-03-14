#include <iostream>

class Blah
{
public:
    void someFunction()
    {
        std::cout << "non const" << std::endl;
    }

    void someFunction()
        const
    {
        std::cout << "const" << std::endl;
    }
};

int main()
{
    Blah blah;
    blah.someFunction();
    
    const Blah& blah_ref  = blah;

    blah_ref.someFunction();


    return 0;
}
