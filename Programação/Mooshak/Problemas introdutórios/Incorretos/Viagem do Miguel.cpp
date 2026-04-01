#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()//Funciona para os inputs pequenos que sao dados de exemplo, mas nao funciona para os que o mooshak testa :(
{
	ios_base::sync_with_stdio(false);     
	cin.tie(NULL);
	//Codigo abaixo

	struct Aviao {// Estrutura dos avioes
		int x, y;// Coordenadas
		char sentido; // 'E' x positivo, 'S' y negativo, 'O' x negativo, 'N' y positivo
		int id;// Identificador
	};

	vector<Aviao> avioes;// Os avioes
	set<pair<int, int>> nuvens;// As nuvens, x e y
	set<pair<int, int>> paresVistos;//Sobreposicoes

	int NumeroAvioes, NumeroNuvens, Segundos;
	
	cin >> NumeroAvioes >> NumeroNuvens >> Segundos;
	
	for (int i = 0; i < NumeroAvioes; i++)
	{
		Aviao AviaoAtual;
		cin >> AviaoAtual.x >> AviaoAtual.y;
		AviaoAtual.sentido = 'E';// Todos os avioes vao para o leste inicialmente
		AviaoAtual.id = i;//Saber qual aviao
		avioes.push_back(AviaoAtual);
	}
	for (int i = 0; i < NumeroNuvens; i++) {
		int x, y;
		cin >> x >> y;
		nuvens.insert({ x,y });	
	}

	for (int i = 0; i < Segundos; i++)
	{

		for (int ii = 0; ii < NumeroAvioes; ii++)
		{
			bool PodeMover = true;
			int xParaIr = avioes[ii].x, yParaIr = avioes[ii].y;
			switch (avioes[ii].sentido)
			{
			case 'E':
				xParaIr++;
				break;
			case 'S':
				yParaIr--;
				break;
			case 'O':
				xParaIr--;
				break;
			case 'N':
				yParaIr++;
				break;
			}
			if (nuvens.count({ xParaIr, yParaIr })) {
				PodeMover = false;
				switch (avioes[ii].sentido)
				{
				case 'E':
					avioes[ii].sentido = 'S';
					break;
				case 'S':
					avioes[ii].sentido = 'O';
					break;
				case 'O':
					avioes[ii].sentido = 'N';
					break;
				case 'N':
					avioes[ii].sentido = 'E';
					break;
				}
			}
			if (PodeMover)
			{
				switch (avioes[ii].sentido)
				{
				case 'E':
					avioes[ii].x++;
					break;
				case 'S':
					avioes[ii].y--;
					break;
				case 'O':
					avioes[ii].x--;
					break;
				case 'N':
					avioes[ii].y++;
					break;
				}
			}
		}
		for (int a = 0; a < NumeroAvioes; a++)
			for (int b = a + 1; b < NumeroAvioes; b++)
				if (avioes[a].x == avioes[b].x && avioes[a].y == avioes[b].y)
					paresVistos.insert({ a, b });
	}

	//Codigo acima
	return 0;
}