//But: �crivez un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien
//5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
//deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite.
//Auteur: F�lix Blouin Maisonneuve 
//Date: 2 septembre 21
1
2
3
4
5





#include <iostream> // cette ligne permet d'utiliser les lignes d'output et d'input


void main()
{
	
	//declaration de la variable dans lequel le chiffre sera stock�
	int nb;
	//je demande � l'utilisateur un nombre � cinq chiffres 
	std::cout << "veuillez entrer un nombre � cinq chiffes";
	//comande pour que l'utlilsateur enter une information
	std::cin >> nb;
	// le programme v�rifie que le nombre a bien 5 chiffres
	if (nb > -0nb < 10000 || nb > 99999)

	{

		std::cout << "le nombre " << nb << " ne contient pas 5 chiffres\n";
	}

	{
	else
		// le nombre lorsque divid� par 10000,1000,100,10 et , nous donne, dans l'ordre.
		// les dizaines de milliers, les milliers, les centaines, les dizaines et les unit�s.
		// Nous utilisons ensuite le modulo pour l'isoler des chiffres qui son avant.
		std::cout << nb / 10000 << "\n";
		std::cout << nb / 1000 % 10 << "\n";
		std::cout << nb / 100 % 10 << "\n";
		std::cout << nb / 10 % 10 << "\n";
		std::cout << nb / 1 % 10 << "\n";
	}


}
//plan de tests 
// nb   �cran 
//56     le nombre ne contient pas 5 chiffres 
//123456 le nombre ne contient pas 5 chiffres
//-56    le nombre ne contient pas 5 chiffres
// 01234 le nombre ne contient pas 5 chiffres




}