#include "cadre.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#define TAILLE 10
#define PI 3.14

using namespace std;


cadre::cadre()
{	
	this->x = 10;
	this->y = 5;
	this->largeur = 5;
	this->longueur = largeur*2;
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, "*");
}

cadre::cadre(int n_x, int n_y, int n_largeur, int n_longueur, char* n_motif)
{
	this->x = n_x;
	this->y = n_y;
	this->largeur = n_largeur;
	this->longueur = n_longueur;
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, n_motif);
}

cadre::~cadre()
{
	std::cout << "Destructeur" << std::endl;

	delete[] motif;

}



void cadre::afficheLog() const
{
	cout << this->x << ' ' << this->y << ' ' << this->largeur << ' ' << this->longueur << ' ' << this->motif << endl;
}

void cadre::surface()
{
	cout << "surface: " << this->largeur * this->longueur << endl;
}

void cadre::perimetre()
{
	cout << "perimetre: " << (this->largeur*2) +( this->longueur*2) << endl;
}

bool cadre::isCarre() const
{
	if (longueur == largeur)
	{
		return true;
	}
	else {
		return false;
	}
	
}

void cadre::setLongueur(int n_longueur)
{
	this->longueur = n_longueur;
}

void cadre::setLargeur(int n_largeur)
{
	this->largeur = n_largeur;
}

void cadre::setMotif(char* n_motif)
{
	this->motif = new char[TAILLE];
	strcpy_s(this->motif, TAILLE, n_motif);
}

void cadre::rotate(int Ox, int Oy, int angle)
{
	int xM, yM, x, y;

	angle *= PI / 180;
	xM = this->x - Ox;
	yM = this->y - Oy;
	x = xM * cos(angle) + yM * sin(angle) + Ox;
	y = -xM * sin(angle) + yM * cos(angle) + Oy;
	this->x = round(x);
	this->y = round(y);
}

	



int cadre::getLongueur() const
{
	return longueur;
}

int cadre::getLargeur() const
{
	return largeur;
}

char* cadre::getMotif() const
{
	return this->motif;
}
