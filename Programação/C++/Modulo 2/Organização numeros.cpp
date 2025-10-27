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
	int aux, tro, num[10]{15, 7, 54, 12, 1, 2, 5, 23, 14, 4};// aux = numero auxiliar, tro = quantas trocas ocorreram, num = numeros.
	do
	{
	tro = 0;// defino como zero no inicio do "do" para caso nao haja trocas feitas e para sair do "do"
		for (int i = 0; i < 9; i++) {// coloquei menor que 9 pois o "i" ira acabar no 8, e 8+1(num[i + 1]) daria 9, caso colocase menor que 9 daria 10, uma posição invalida no for.
			if (num[i] > num[i + 1]) {//troca dos numeros, usei uma variavel para guardar o numero maior e passar a frente
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
				tro++;//como houve uma troca, "tro" aumenta por 1
			}
		}
	} while (tro > 0);
	
	for (int i = 0; i < 10; i++) {//mostrar o resultados
		cout << num[i] << endl;
	}
	return 0;
}
