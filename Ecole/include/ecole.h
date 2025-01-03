#ifndef ECOLE_H
#define ECOLE_H

#include <iostream>
#include <string>

using namespace std;

class Etudiant {
private:
	string nom;
	int *notes;
	int nbNotes;
	int age;
	int capaciteN;
	
public:
	Etudiant(string, int);
	~Etudiant();
	
	void ajouterNote(int);
	void afficher();

	string getName(){return nom;}
	int getAge(){return age;}
};

class Classe {
private:
	Etudiant **etudiant;
	int nbEtudiant;
	int capaciteEtudiants;
public:
	Classe(int, int);
	~Classe();
	void ajouterEtudiant(Etudiant);
	void afficherTous();
};

#endif