#include <iostream>
#include <windows.h>

using namespace std;

int player1 = 0, player2 = 0, empate = 0, verifica = 0; 
bool fim = false, jogador1 = true, jogador2 = false; 
char board[3][3]; 
string play1, play2; 

void start() 
{
    for (int i = 0; i < 3; i++) //
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' '; 
        }
    }
}

void show() 
{
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
       
        cout << " " << (board[i][0]) << " |";
        cout << " " << (board[i][1]) << " |";
        cout << " " << (board[i][2]) << endl; 
        if (i != 2) 
        {
            cout << "___ ___ ___\n" << endl; 
        }
    }
    cout << endl;
}

bool verificafim() 
{
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' ||
        board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' ||
        board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' ||
        board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' ||
        board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' ||
        board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
        board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ||
        board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') 
    {
        player1++;  
        fim = true; 
        return true;
    }
    if (board[0][1] == 'O' && board[0][2] == 'O' && board[0][0] == 'O' ||
        board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' ||
        board[2][1] == 'O' && board[2][2] == 'O' && board[2][0] == 'O' ||
        board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' ||
        board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O' ||
        board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ||
        board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O' ||
        board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') 
    {
        player2++;  
        fim = true; 
        return true;
    }

    if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
        board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') 
    {
        empate++;   
        fim = true; 
        return true;
    }
}

void play() 
{
    start();
    jogador1 = true, jogador2 = false, fim = false;
    int linha, coluna;
    do
    {
        if (jogador1 == true)
        {
            system("cls");
            do
            {
                
                show();
                cout << " - " << play1 << endl;  

                cout << "   Linha: ";  
                cin >> linha;
                linha--; 

                cout << "   Coluna: "; 
                cin >> coluna;
                coluna--; 

                verifica = board[linha][coluna] != ' ' || linha < 0 || linha > 2 || coluna < 0 || coluna > 2;
                 

                if (verifica) 
                {
                    system("cls");
                    cout << "\n Esta posição digitada não esta dentro da condição 3x3 do tabuleiro!";
                    cout << "\n Digite novamente:" << endl;
                }

            } while (verifica);

            board[linha][coluna] = 'X';

            
            verificafim();
            jogador1 = false; 
            jogador2 = true;
                }
                    else if (jogador2 == true)
                    {
                        system("cls");
                        do
                        {

                            show();
                            cout << " - " << play2 << endl;

                            cout << "   Linha: "; 
                            cin >> linha;
                            linha--; 

                            cout << "   Coluna: "; 
                            cin >> coluna;
                            coluna--;

                            verifica = board[linha][coluna] != ' ' || linha < 0 || linha > 2 || coluna < 0 || coluna > 2;
               

                                if (verifica) 
                                {
                                    system("cls");
                                    cout << "\n Esta posição digitada não esta dentro da condição 3x3 do tabuleiro!";
                                    cout << "\n Digite novamente:" << endl;
                                }

                                } while (verifica); 

                                board[linha][coluna] = 'O';

           
                                verificafim();
                                jogador1 = true; 
                                jogador2 = false;
                    }

                        } while (fim == false);
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int opcao;

    cout << "\n Nome do Jogador 1: ";
    cin >> play1;
    cout << "\n Nome do Jogador 2: ";
    cin >> play2;

    do
    {
        play();
        system("cls");

       
        cout << "\n " << play1 << ": " << " " << player1 << endl;
        cout << "\n " << play2 << ": " << " " << player2 << endl;
        cout << "\n Empate: " << empate << endl;
        show();

       
        cout << "\n Jogar Novamente?" << endl;
        cout << "\n 0-Sim" << endl;
        cout << "\n 1-Não" << endl;
        cout << "\n Digite o número correspondente: ";
        cin >> opcao;

    } while (opcao == 0); 
    system("cls");
    cout << "\n " << play1 << ":" << " " << player1 << endl;
    cout << "\n " << play2 << ":" << " " << player2 << endl;
    cout << "\n Empate: " << empate << endl;
}