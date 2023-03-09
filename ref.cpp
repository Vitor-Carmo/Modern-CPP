#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 1;
    int &num_ref = num;
    
    // ao mudar a referência se muda o valor original
    num_ref = 2;

    std::cout << "Esse é o número original: " << num << std::endl;

    std::cout << "Essa é a referência do número original: " << num_ref << std::endl;

    return 0;
}