#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
// Speed up I/O for competitive programming         
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//-----------------------------------------
int 
NumAldeias, NumPerguntas, 
Min, Max,
i, j,
Auxiliar;
vector<int> Aldeias, Perguntas;
cin >> NumAldeias >> NumPerguntas;
for (i = 0; i < NumAldeias; i++) {
	cin >> Auxiliar;
	Aldeias.push_back(Auxiliar);
}
for ( i = 0; i < NumPerguntas; i++)
{
	cin >> Min >> Max;
	Perguntas.push_back(0);
	for ( j = 0; j < Aldeias.size(); j++)
	{
		if (Min <= Aldeias[j] && Aldeias[j] <= Max)
		{
			Perguntas.at(i)++;
		}
	}
}
for (int p : Perguntas) {
cout << p << "\n";
}
	return 0;
	//Falta ainda testar na mooshak
}
