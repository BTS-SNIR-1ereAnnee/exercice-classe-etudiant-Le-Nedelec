#include <iostream>
#include <string>

using namespace std;

class etudiant
{
		public:
			etudiant();

			void getEtudiant();
			void setEtudiant();
			int getNote();
			int setNote();
			void Moyenne();

		private:
			string m_nom;
			int m_note;
};
