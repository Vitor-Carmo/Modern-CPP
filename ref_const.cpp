#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 1;
    // desse modo eu posso tentar mudar o valor original mas isso não vai ocorrer
    const int &num_ref = num;
    

    std::cout << "Esse é o número original: " << num << std::endl;

    std::cout << "Essa é a referência do número original: " << num_ref << std::endl;

    return 0;
}