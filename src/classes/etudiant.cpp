#include <iostream>
#include "etudiant.h"

using namespace std;

etudiant::etudiant()
{

}

void etudiant::getEtudiant()
{

}

void etudiant::setEtudiant(string nom)
{
	m_nom = nom;
}

int etudiant::getNote1()
{
	return m_note1;
}

int etudiant::setNote1(int note)
{
	m_note1 = note;
	return m_note1;
}

void etudiant::Moyenne()
{
	float moyenne;	
	cout << "votre moyenne est de " << moyenne << endl;
}
