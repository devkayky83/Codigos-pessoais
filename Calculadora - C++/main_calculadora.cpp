#include <iostream>
#include <windows.h>
#include "calculadora.hpp"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int decisao;
    bool decisao_menu, decisao_menu2;
    char decisao2;

    cout << " _______________\n"
         << "\n 1. CÁLCULADORA "
         << "\n 2. SAIR "
         << "\n _______________" << endl;
    cout << endl;
    cout << " Digite o número correspondente \n ao que deseja fazer: ";
    cin >> decisao;
    system("cls");

    (decisao != 1 && 2) ? decisao_menu = true : decisao_menu = false;

        while (decisao_menu == true)
        {
            decisao_menu = false;
            cout << "\n Nenhuma função corresponde ao que foi digitado!";
            cout << "\n Por favor digite novamente: " << endl;

            cout << "\n _______________\n"
                 << "\n 1. CÁLCULADORA "
                 << "\n 2. SAIR "
                 << "\n _______________" << endl;
            cout << endl;
            cout << " Digite o número correspondente \n ao que deseja fazer: ";
             cin >> decisao;
             system("cls");
    }

        if (decisao == 1)
        {
            menu_calculos();
        }
            else if (decisao == 2)
            {
                return 0;
            }

    cout << "\n\n Deseja fazer algum outro cálculo? (S) para sim, (N) para não: ";
    cin >> decisao2;
    system("cls");

        if (decisao2 == 'S' || decisao2 == 's')
        {
            decisao_menu2 = true;
        }
            else if (decisao2 == 'N' || decisao2 == 'n')
            {
                decisao_menu2 = false;
            }

            while (decisao_menu2 == true)
            {
                menu_calculos();
                cout << "\n\n Deseja fazer algum outro cálculo? (S) para sim, (N) para não: ";
                cin >> decisao2;
                system("cls");

                while (decisao2 == 'N' || decisao2 == 'n') 
                {
                    decisao_menu2 = false;

                    if (decisao_menu2 == false)
                    {
                        return 0;
                    }
                }
            }

            while (decisao_menu2 == false)
            {
                return 0;
            }

    cout << endl;
    return 0;
}
