#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
srand(time(0));
//// Variaveis
int Escolha;
float Numeros[2];
//// Escolha de qual tipo de calculo vou fazer e quais numeros
cout << "Qual tipo de calculo queres fazer, somar(1), subtrair(2), multiplicar(3) ou dividir(4) : ";
    cin >> Escolha;
for (int i = 0; i < 2; i++) 
    {
    cout << "\n Me de o " << i+1 <<"º numero : ";
        cin >> Numeros[i];
    }
    switch(Escolha) { ////Calculo desejado
      case 1:    //Somar
            cout << Numeros[0] + Numeros[1];
        break;
      case 2:    //Subtrair
            cout << Numeros[0] - Numeros[1];
        break;
      case 3:    //Multiplicar
            cout << Numeros[0] * Numeros[1];
        break;
      case 4:    //Dividir
            cout << Numeros[0] / Numeros[1];
        break;
      default:    // Caso a resposta seja invalida
            cout << Escolha << " nem e uma opção... bruh..";
    }
return 0;
}
