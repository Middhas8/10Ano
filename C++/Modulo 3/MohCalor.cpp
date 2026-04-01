#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i = 0, M, N = 0, Ti, I = 0;
	bool Cond = false;
	cin >> M >> N;
	for (i = 0; i < N; i++)
	{
		cin >> Ti;

		if (Ti > M + 5)
		{
			I++;
		}
		else
		{
			I = 0;
		}

		if (I >= 6)
		{
			Cond = true;
		}
		else {
			Cond = false;
		}

	}
	if (Cond == true) {
		cout << "Wave";
	}
	else {
		cout << "Flat";
	}

	return 0;
}
