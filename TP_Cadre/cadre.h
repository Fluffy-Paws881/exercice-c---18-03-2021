#pragma once
#include <string>
#include <iostream>

class cadre {

private:

	int x, y, largeur, longueur;

	char* motif;

public:

	//constructeurs
	cadre();//version avec les parametre par defaut
	cadre(int n_x , int n_y, int n_largeur, int n_longueur, char* n_motif);

	//destructeur
	~cadre();
	

	
	void afficheLog()const;
	void surface();
	void perimetre();
	bool isCarre()const;

	//mutateurs
	void setLongueur(int n_longueur);
	void setLargeur(int n_largeur);
	void setMotif(char* n_motif);
	void rotate(int Ox, int Oy, int angle); //rotation

	//accesseurs
	int getLongueur()const;
	int getLargeur()const;
	char* getMotif()const;

};