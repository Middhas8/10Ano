#include <iostream>
#include <string>

using namespace std;

int main()
{
    string CasosDeTeste[20];
    int T_NumCasosTestes, NumAlunos, TrocasNecessarias, Alunos[2];
    cin >> T_NumCasosTestes;
    for (int i = 0; i < T_NumCasosTestes; i++) {
    TrocasNecessarias = 0;
    cin >> NumAlunos; 
        for (int ii = 0; ii  < NumAlunos; ii ++)
        {
            
            if (ii == 0)
            {
                cin >> Alunos[0];
            }
            else
            {
                cin >> Alunos[1];
                if (!(Alunos[0] < Alunos[1]))
                {
                    TrocasNecessarias++;
                }
                else
                {
                    Alunos[0] = Alunos[1];
                }
            
            }
            if (TrocasNecessarias > 1)
                CasosDeTeste[i] = "NAO\n";
            else
                CasosDeTeste[i] = "SIM\n";
            }
        }

    for (int i = 0; i < T_NumCasosTestes; i++)
    {
        cout << CasosDeTeste[i];
    }
    return 0;
    //Ainda e necessario testar na Mooshark
}
