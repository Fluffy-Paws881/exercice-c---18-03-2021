#include "cadre.h"
#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

int main() {

	const int TAILLE = 10;

	char* pt_motif = new char[TAILLE];
	strcpy_s(pt_motif, TAILLE, "ballon");
	
	cadre test;

	
	test.rotate(2,2,90);
	

}

