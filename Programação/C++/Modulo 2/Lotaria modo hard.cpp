#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int cod[5], num, certos = 0;//cod=codigo do cofre, adv=codigos advinhados, res=numeros advinhados certos, n=usado para auxiliar
    for (int a = 0; a < 5; a++) {
        cod[a] = (rand() % 50) + 1;//gerar os numeros aleatorios
        for (int b = 0; b < a; b++)
        {
            if (cod[a] == cod[b])//checar se a numeros iguais
            {
                cod[a] = (rand() % 50) + 1;//mudar o numero igual
                b = -1;//resetar o for
            }
        }
    }
    for (int a = 0; a < 5; a++)
    {
        cout << "\nMe de o " << a + 1 << "º numero do codigo : ";
            cin >> num;
            for (int b = 0; b < 5; b++)
            {
                if (num == cod[b])
                {
                    certos++;
                }
            }
    }
    if (certos == 0) {
        cout << "Putz, melhor sorte na proxima...\n";
    } else if (certos != 5) {
        cout << "Parabéns, voce acertou " << certos << " numeros do codigo!\n";
    } else {
        cout << "Ehh, parabéns... VOCE GANHOU 1 LIBRA LIBANESA!!!\n";
    }
    cout << "O codigo era \n";
    for (int a = 0; a < 5; a++)
    {
        cout << " " << cod[a];
    }
}
