//But: Écrivez un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
//5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
//deuxième chiffre sur la deuxième ligne, ainsi de suite.
//Auteur: Félix Blouin Maisonneuve 
//Date: 2 septembre 21
1
2
3
4
5





#include <iostream> // cette ligne permet d'utiliser les lignes d'output et d'input


void main()
{
	
	//declaration de la variable dans lequel le chiffre sera stocké
	int nb;
	//je demande à l'utilisateur un nombre à cinq chiffres 
	std::cout << "veuillez entrer un nombre à cinq chiffes";
	//comande pour que l'utlilsateur enter une information
	std::cin >> nb;
	// le programme vérifie que le nombre a bien 5 chiffres
	if (nb < 10000 || nb > 99999)

	{

		std::cout << "le nombre " << nb << " ne contient pas 5 chiffres\n";
	}

	{
	else
		// le nombre lorsque dividé par 10000,1000,100,10 et , nous donne, dans l'ordre.
		// les dizaines de milliers, les milliers, les centaines, les dizaines et les unités.
		// Nous utilisons ensuite le modulo pour l'isoler des chiffres qui son avant.
		std::cout << nb / 10000 << "\n";
		std::cout << nb / 1000 % 10 << "\n";
		std::cout << nb / 100 % 10 << "\n";
		std::cout << nb / 10 % 10 << "\n";
		std::cout << nb / 1 % 10 << "\n";
	}


}
//plan de tests 
// nb   écran 
//56     le nombre ne contient pas 5 chiffres 
//123456 le nombre ne contient pas 5 chiffres
//-56    le nombre ne contient pas 5 chiffres
// 01234 le nombre ne contient pas 5 chiffres




}