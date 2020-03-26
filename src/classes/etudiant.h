#include <iostream>
#include <string>

using namespace std;

#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant
{
		public:
			Etudiant();
			Etudiant(string nom, int noteSur20, int noteSur10);
			
			//méthodes
			string getEtudiant() const;
			void setEtudiant(string nom);
			int getNoteSur20() const;
			int setNoteSur20(int noteSur20);
			int getNoteSur10() const;
			int getNoteSur10(int noteSur10);
			void Moyenne();

		private:
			string m_nom;
			int m_noteSur20;
			int m_noteSur10;
};

#endif
