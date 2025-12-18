#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string nomes[3] = { "Clara","Mateus","Bruno" }, produtos[3] = { "bolo rei","batatas", "Alface" };
	int quantidade[3][3], a = 0, soma = 0, QPorPessoa[3] = { 0 }, QporTipo[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << nomes[i] << " tem quantos/quantas " << produtos[j] << " : ";
			cin >> a;
			if (j == 2)cout << "\n------------------------\n\n";
			if (a > 20 || a < 0) {
				cout << " Errado, numeros apenas de 0 a 20.\n";
				j--;
			}
			else {
				quantidade[i][j] += a;
				soma += a;
				QPorPessoa[i] += a;
				QporTipo[i] += a;
			}
		}
	}
	a = 0;
	do
	{
		system("cls");
		cout << "Escolha uma opção\n------------------------\n";
		cout << "1- Quantidades de produtos\n";
		cout << "2- Quantidades por pessoa\n";
		cout << "3- Quantidades por tipo\n";
		cout << "4- Não quero nada\n------------------------\n Opção : ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Há no total " << soma << " produtos";
			break;
		case 2:
			for (int i = 0; i < 3; i++)
			{
				cout << "\nA pessoa chamada " << nomes[i] << " recebeu no total " << QPorPessoa[i];
			}
			break;
		case 3:
			for (int i = 0; i < 3; i++)
			{
				cout << "\nO produto " << produtos[i] << " teve um total " << QporTipo[i];
			}
			break;
		case 4:
			cout << "Byee";
			break;
		default:
			cout << "Inválido :(";
			break;
		}
		cin.get(); cin.ignore();
	} while (a!=4);
	
	
	return 0;
}
