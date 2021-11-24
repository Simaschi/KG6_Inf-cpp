#include<iostream>
using namespace std;
int main()
{
	char a;	//Ausgabe

	system ("cls");

	cout << "Herzlich Willkomen beim Kafee-Automaten ! \n"; 
	cout << "Bitte wählen Sie aus: \n"; 
	cout << "(k) Kaffe \n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode \n";

	cin >> a;

	cout << "Sie haben sich für Auswahl " << a << " entschieden. \n";

	system("pause");
	return 0;

}
