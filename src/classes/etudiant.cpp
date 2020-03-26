#include <iostream>
#include <string>
#include "etudiant.h"

using namespace std;

Etudiant::Etudiant()
{
	m_nom = "Etudiant";
	m_noteSur20=20;
	m_noteSur10=10;
}

Etudiant::Etudiant(string nom, int note20, int note10)
{
	m_nom = nom;
	this->m_noteSur20 = note20;
	this->m_noteSur10 = note10;
}

string Etudiant::getEtudiant() const
{
	return m_nom;
}

void Etudiant::setEtudiant(string nom)
{
	m_nom = nom;
}

int Etudiant::getNoteSur20() const
{
	return m_noteSur20;
}

int Etudiant::setNoteSur20(int noteSur20)
{
	m_noteSur20 = noteSur20;
	return m_noteSur20;
}

int Etudiant::getNoteSur10() const
{
	return m_noteSur10;
}

int Etudiant::setNoteSur10(int note10)
{
	m_noteSur10 = noteSur10;
	return m_noteSur10;
}

void Etudiant::Moyenne()
{
	float moyenne;	
	moyenne = m_noteSur20+(m_noteSur10*2);
	moyenne = moyenne/2;
	cout << "Votre moyenne est de : " << moyenne << endl;
}
