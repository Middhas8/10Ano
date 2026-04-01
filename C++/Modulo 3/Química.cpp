#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
 
using namespace std;
int main() {
	int i=0; 
	string Form;
	cin >> Form;
do { 
	if (isupper(Form[i])) {
		if (i > 0 && !isdigit(Form[i-1])) {
		cout << " 1\n" << Form[i];
		} 
		else {
			cout << endl << Form[i];
		}
	} 
	else if (isdigit(Form[i])) {
		if (i > 0 && !isdigit(Form[i - 1])) {
			cout << " " << Form[i];
		}
		else {
			cout << Form[i];
		}
	} 
	else {
		cout << Form[i];
	}
	i++;
} while ((Form[i] != '.') && i < Form.length());
 
if (!isdigit(Form[i-1])) {//checa se o ultimo possuia um numero, caso nao coloque um 1
	cout << " 1";
}
 
return 0;
}
