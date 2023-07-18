#include <iostream>
#include <cstdlib>

void print(char* text)
{
    std::cout << text << std::endl;
}

char* input(char* text="")
{
    char* result;
    if (text != "")
    {
        std::cout << text;
    }
    std::cin >> result;
    return result;
}

int randNumber(int min=0, int max=10)
{
    return (rand() % (max - min + 1)) + min;
}

int main(int argc, char* argv[])
{
    int pc_choice, user_min, user_max;
    char* user_choice;

    print("Jogo de adivinhação");

    user_min = (int)input("Insira o numero mais baixo: ");
    user_max = (int)input("Insira o numero mais alto: ");

    pc_choice = randNumber(user_min, user_max);

    while (user_choice != "N")
    {
        user_choice = input("Insira um número: ");
        if ((int)user_choice > pc_choice)
        {
            print("O número que você escolheu é maior");
        }
        else if ((int)user_choice < pc_choice)
        {
            print("O número que você escolheu é menor");
        }
        else
        {
            print("Parabéns você acertou!");
            user_choice = input("Quer jogar denovo?");
        }
    }

    return 0;
}
