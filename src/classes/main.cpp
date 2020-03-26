#include <iostream>
#include <string>
#include "etudiant.h"

using namespace std;

int main()
{
		Etudiant Etudiant;
		string nom;
		int note20 = 0; 
		int note10 = 0;
		cout << "entrez le nom de l'etudiant" << endl;
		cin >> nom;
		Etudiant.setEtudiant(nom);
		cout << "entrez la première note de l'etudiant sur 20 : " << endl;
		cin >> note20;
		Etudiant.setNoteSur20(note20);
		cout << "entrez la deuxième note de l'etudiant sur 10 : " << endl;
		cin >> note10;
		Etudiant.setNoteSur10(note10);
		Etudiant.Moyenne();
}
