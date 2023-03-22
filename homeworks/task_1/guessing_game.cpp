#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr)); // inicializa a semente de aleatoriedade com o tempo atual

    int random_number = std::rand() % 100; // gera um número aleatório entre 0 e 99
    std::cout << "Try to guess the computer number that is between 0 and 99: ";

    int user_guessing_number;

    std::cin >> user_guessing_number;
    while (true)
    {

        if (user_guessing_number == random_number)
        {
            std::cout << "Congrats, You Won! The computer number is really " << random_number << "."<< std::endl;
            break;
        }

        if (user_guessing_number > random_number)
        {
            std::cout << "The computer number is smaller (<) than " << user_guessing_number << std::endl;
        }
        else
        {
            std::cout << "The computer number is taller (>) than " << user_guessing_number << std::endl;
        }
        std::cout << "Try again: ";
        std::cin >> user_guessing_number;
    };

    return 0;
}
