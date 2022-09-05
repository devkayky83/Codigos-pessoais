#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

double soma()
{
    int numero, contagem = 1;
    double somas = 0, vetor[200];

    cout << "\n Digite quantos números irá somar: ";
    cin >> numero;
    system("cls");

        if (numero <= 1)
        {
            cout << "\n Não é possivel realizar somas com essa quantidade de números!";
        }

            for (int i = 0; i < numero; i++)
            {

                cout << "\n Digite o " << contagem++ << "º número: ";
                cin >> vetor[i];
                system("cls");

                somas = somas + vetor[i];
            }

    cout << "\n A soma tem como resposta: " << somas;
    cout << "\n _____________________________";
    return somas;
}

double sub()
{
    int decisao1, decisao2;
    double numero1, numero2, subtra1, subtra2, resultado;

    cout << "\n Digite o primeiro número: ";
    cin >> numero1;
    cout << "\n Digite o segundo número: ";
    cin >> numero2;
    system("cls");

    resultado = numero1 - numero2;
    cout << endl;
    cout << " " << numero1 << " - " << numero2 << " = " << resultado;
    cout << "\n ________________";
    cout << endl;
    cout << "\n Deseja continuar subtraindo? (1) para sim, (2) para não: ";
    cin >> decisao1;
    system("cls");


        if (decisao1 == 1){
        
            subtra1 = resultado;
            cout << "\n Digite o número: ";
            cin >> subtra2;
            system("cls");

            resultado = resultado - subtra2;
            cout << endl;
            cout << " " << subtra1 << " - " << subtra2 << " = " << resultado;
            cout << "\n ________________";
            cout << endl;
            cout << "\n Deseja continuar subtraindo? (1) para sim, (2) para não: ";
            cin >> decisao2;
            system("cls");

            if (decisao2 == 2){
                return 0;
            }

                while (decisao2 == 1)
                {
                    subtra1 = resultado;
                    cout << "\n Digite o número: ";
                    cin >> subtra2;
                    system("cls");

                    resultado = resultado - subtra2;
                    cout << endl;
                    cout << " " << subtra1 << " - " << subtra2 << " = " << resultado;
                    cout << "\n ________________";
                    cout << endl;
                    cout << "\n Deseja continuar subtraindo? (1) para sim, (2) para não: ";
                    cin >> decisao2;
                    system("cls");
            
                    if (decisao2 == 2){
                        return 0;
                    }
                }
                return resultado;
            }else{
                do{
                return 0;
            }while (decisao1 == 2);
        }
    }

double mult()
{
    int numero, contagem = 1;
    double multi = 1, vetor[200];

    cout << "\n Digite quantos números irá multiplicar: ";
    cin >> numero;
    system("cls");

        for (int i = 0; i < numero; i++)
        {

            cout << "\n Digite o " << contagem++ << "º número: ";
            cin >> vetor[i];
            system("cls");

            multi = multi * vetor[i];
        }

    cout << "\n A multiplicação tem como resposta: " << multi;
    cout << "\n ________________________________________";
    return multi;
}

double div()
{
    int decisao1, decisao2;
    double numero1, numero2, divi, divi1, divi2;

    cout << "\n Digite o primeiro número: ";
    cin >> numero1;
    cout << "\n Digite o segundo número: ";
    cin >> numero2;
    system("cls");

    divi = numero1 / numero2;
    cout << endl;
    cout << " " << numero1 << " / " << numero2 << " = " << setprecision(3) << divi;
    cout << "\n ________________";
    cout << endl;
    cout << "\n Deseja continuar dividindo? (1) para sim, (2) para não: ";
    cin >> decisao1;
    system ("cls");


        if (decisao1 == 1){
        

            divi1 = divi;
            cout << "\n Digite o número: ";
            cin >> divi2;
            system("cls");

            divi = divi / divi2;
            cout << endl;
            cout << " " << divi1 << " / " << divi2 << " = " << divi;
            cout << "\n ________________";
            cout << endl;
            cout << "\n Deseja continuar dividindo? (1) para sim, (2) para não: ";
            cin >> decisao2;
            system("cls");

            if (decisao2 == 2){
                return 0;
            }

                while (decisao2 == 1)
                {
                    divi1 = divi;
                    cout << "\n Digite o número: ";
                    cin >> divi2;
                    system("cls");

                    divi = divi / divi2;
                    cout << endl;
                    cout << " " << divi1 << " / " << divi2 << " = " << divi;
                    cout << "\n ________________";
                    cout << endl;
                    cout << "\n Deseja continuar dividindo? (1) para sim, (2) para não: ";
                    cin >> decisao2;
                    system("cls");
            
                    if (decisao2 == 2){
                        return 0;
                    }
                }
                return divi;
            }else{
                do{
                return 0;
            }while (decisao1 == 2);
        }
            return divi;
}

double rai()
{
    int tiporaiz;
    double resultado, numero_raiz;

    cout << "\n - (2) Raiz Quadrada, (3) Raiz Cúbica: ";
    cin >> tiporaiz;
    system("cls");

        if (tiporaiz == 2)
        {
            cout << "\n Digite o número: ";
            cin >> numero_raiz;
            system("cls");

            resultado = sqrt(numero_raiz);
            cout << endl;
            cout << " Raiz quadrada de " << numero_raiz << " é " << setprecision(3) << resultado;
            cout << "\n ___________________________";
            return resultado;
            }
            else if (tiporaiz == 3)
            {

                cout << "\n Digite o número: ";
                cin >> numero_raiz;
                system("cls");

                resultado = cbrt(numero_raiz);
                cout << endl;
                cout << " Raiz cúbica de " << numero_raiz << " é " << setprecision(3) << resultado;
                cout << "\n ___________________________";
                return resultado;
            }
}

double porcentagem()
{
    double porcentagem1, porcentagem2, resultado, porcentagem_num;

    cout << "\n Digite a porcentagem: ";
    cin >> porcentagem1;
    cout << "\n Digite o número: ";
    cin >> porcentagem2;
    system("cls");

    porcentagem_num = porcentagem1 / 100;
    resultado = porcentagem_num * porcentagem2;
    cout << endl;
    cout << " " << porcentagem1 << "% "
         << "de " << porcentagem2 << " é " << setprecision(3) << resultado;
    cout << "\n ________________";
    return resultado;
}

double potencia()
{
    double potencia1, potencia2, resultado;

    cout << "\n Digite o número: ";
    cin >> potencia1;
    cout << "\n Digite o número pelo qual será elevado: ";
    cin >> potencia2;
    system("cls");

    resultado = pow(potencia1, potencia2);
    cout << endl;
    cout << " " << potencia1 << " elevado à " << potencia2 << " é " << resultado;
    cout << "\n _______________________";
    return resultado;
}

double trig()
{

    int letra;
    double angulo, resposta;
    double seno, cosseno, tangente, cateto1, cateto2, hipotenusa;

    cout << "\n - (1) Seno, (2) Cosseno"
         << "\n\n - (3) Tangente, (4) Hipotenusa";
    cout << "\n\n Digite o método pelo qual deseja cálcular: ";
    cin >> letra;
    system("cls");

        if (letra == 1)
        {

            cout << "\n Digite o ângulo: ";
            cin >> angulo;
            system("cls");

            resposta = (angulo * M_PI) / 180;

            seno = sin(resposta);
            cout << "\n Seno de " << angulo << "º: " << setprecision(5) << seno;
            cout << "\n _______________________________";
            return seno;
        }
            else if (letra == 2)
            {

            cout << "\n Digite o ângulo: ";
            cin >> angulo;
            system("cls");

            resposta = (angulo * M_PI) / 180;

            cosseno = cos(resposta);
            cout << "\n Cosseno de " << angulo << "º: " << setprecision(5) << cosseno;
            cout << "\n _______________________________";
            return cosseno;
            }
            else if (letra == 3)
            {

            cout << "\n Digite o ângulo: ";
            cin >> angulo;
            system("cls");

            resposta = (angulo * M_PI) / 180;

            tangente = tan(resposta);
            cout << "\n Tangente de " << angulo << "º: " << setprecision(5) << tangente;
            cout << "\n _______________________________";
            return tangente;
            }
            else if (letra == 4)
            {

            cout << "\n Digite o primeiro cateto: ";
            cin >> cateto1;
            cout << "\n Digite o segundo cateto: ";
            cin >> cateto2;
            system("cls");

            hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

            cout << "\n A hipotenusa é: " << hipotenusa;
            cout << "\n _______________________";
            return hipotenusa;
            }
}

double menu_calculos()
{

    char resposta;

    cout << "\n\n 1. OPERAÇÕES SIMPLES"
         << "\t\t\t\t\t !. INFORMAÇÕES ÚTEIS .!"
         << "\n\t\t\t\t\t\t\t_________________________"
         << "\n\n\t\t\t\t\t\t - Valor aproximado de PI: 3,14";
    cout << "\n ________________________" << endl;
    cout << "\n\n\n - (+) Adição, (-) Subtração \n\n - (x) Multiplicação, (/) Divisão"
         << "\n\n - (=) Raiz, (%) Porcentagem \n\n - (&) Potencia, (F) Funções Trigonométricas" << endl;
    cout << endl;
    cout << "\n Digite o simbolo correpondente ao método pelo qual deseja cálcular: ";
    cin >> resposta;
    system("cls");

        if (resposta == '+')
        {
            soma();
        }
            else if (resposta == '-')
            {
                sub();
            }
            else if (resposta == 'x')
            {
                mult();
            }
            else if (resposta == '/')
            {
                div();
            }
            else if (resposta == '=')
            {
                rai();
            }
            else if (resposta == '%')
            {
                porcentagem();
            }
            else if (resposta == '&')
            {
                potencia();
            }
            else if (resposta == 'F' || "f")
            {
                trig();
            }
}
