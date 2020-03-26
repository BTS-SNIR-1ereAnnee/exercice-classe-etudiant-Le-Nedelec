#include <iostream>
#include "etudiant.h"

using namespace std;
int main()
{
		etudiant etudiant1;
		string nom;
		int note = 0, stockage = 0;
		cout << "entrez le nom de l'etudiant" << endl;
		cin >> nom;
		etudiant1.setEtudiant(nom);
		cout << "entrez la note de l'etudiant sur 20 : " << endl;
		cin >> note;
		etudiant1.setNote1(note);

		etudiant1.Moyenne();
}
