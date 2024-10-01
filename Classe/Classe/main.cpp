//#include "Classe.h"
#include "Erreur.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	
	try
	{
		//Essai de classe

	}


	catch (Erreur const& e)
	{
		cerr << "ERREUR : " << e.what() << "\nNiveau d'Erreur : " << e.getNiveau() << endl;
	}
}