#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <map>

using namespace std;
int main() {
    vector<char> fraseChar;
    vector<string> fraseString;
    string temp;
    map <char, string>Codigo;//Caractere/Codigo correspondente.
        Codigo['A'] = ".-";    Codigo['B'] = "-...";    Codigo['C'] = "-.-.";
        Codigo['D'] = "-..";    Codigo['E'] = ".";    Codigo['F'] = "..-.";
        Codigo['G'] = "--.";    Codigo['H'] = "....";    Codigo['I'] = "..";
        Codigo['J'] = ".---";    Codigo['K'] = "-.-";    Codigo['L'] = ".-..";
        Codigo['M'] = "--";    Codigo['N'] = "-.";    Codigo['O'] = "---";
        Codigo['P'] = ".--.";    Codigo['Q'] = "--.-";    Codigo['W'] = ".--";
        Codigo['R'] = ".-.";    Codigo['S'] = "...";    Codigo['T'] = "-";    
        Codigo['U'] = "..-"; Codigo['V'] = "...-";    Codigo['W'] = ".--";    
        Codigo['X'] = "-..-";    Codigo['Y'] = "-.--";    Codigo['Z'] = "--..";    
        Codigo[' '] = "/";    Codigo['.'] = ".-.-.-";    Codigo['!'] = "-.-.--";    
        Codigo['@'] = ".--.-.";    Codigo['/'] = "-..-.";    Codigo['?'] = "..--..";    
        Codigo[','] = "--..--";    Codigo['1'] = ".----";    Codigo['2'] = "..---";    
        Codigo['3'] = "...--";    Codigo['4'] = "....-";    Codigo['5'] = ".....";    
        Codigo['6'] = "-....";    Codigo['7'] = "--...";    Codigo['8'] = "---..";    
        Codigo['9'] = "----.";
       
    Codigo['0'] = "-----";

    cout << "Me de a frase : ";
    getline(cin, temp);
    for (int a = 0; a < temp.size(); a++)
    {
        fraseChar.push_back(temp[a]);
        fraseChar[a] = toupper(fraseChar[a]);
    }
        for (int a = 0; a < temp.size(); a++) {
            for (int b = 0; b < Codigo.size(); b++) {
                if (Codigo[fraseChar[a]] == Codigo[b]) {
                    cout << Codigo[b] << " ";
                }
            }
        }
  return 0;
}
