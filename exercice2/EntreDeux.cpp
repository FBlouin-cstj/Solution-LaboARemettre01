//But: Écrivez un programme qui demande a l'utilisateur de saisir 3 entiers A,B,C et qui indique si C est compris entre A et B ou C est compris entre B et A
//Auteur: Félix Blouin Maisonneuve 
//Date: 2 septembre 21






#include <iostream> // cette ligne permet d'utiliser les lignes d'output et d'input


void main()
{
	
	//declaration des variables 
	int nb1;
	int nb2;
	int nb3;
	//je demande à l'utilisateur de saisir un nombre entier  
	std::cout << "veuillez entrer un nombre entier";
	//lecture du nombre sur le clavier
	std::cin >> nb1;
	// refaire la meme chose avec le deuxième nombre
	std::cout << "\n veuillez entrer un deuxième nombre entier";
	std::cin >> nb2;
   // refaire le meme processus
	std::cout << "\n veuillez entrer un troisième nombre entier";
	std::cin >> nb3;

	// si le nombre est entre le nombre 1 et 2 il va entrer
	if (nb3 >=nb1 && nb3 <= nb2)

	
	{
		
		std::cout << "le nombre : " << nbr3 << " fait partie de la limite entre : " << nbr1 << " et " << nbr2 << "\n";

	}
	else
	{
	
   //sinon si le nombre est entre le nombre 2 et 1 il va entrer
		if (nbr3 <= nbr1 && nbr3 >= nbr2)
		{
			std::cout << "le nombre : " << nbr3 << " fait partie de la limite entre : " << nbr2 << " et " << nbr1 << "\n";
		}
		else
		{
			//sinon dire que le nombre nest pas dans la limite
			std::cout << "le nombre : " << nbr3 << " ne fait partie de la limite";
		}
	}

	//plan de test
	// nbr1  |  nbr2  |  nbr3
	//   1        3       2
	// resultat entre 1 et 2
	//   3        1       2
	// resultat entre 2 et 1
	//   1        3       4
	// resultat entre rien
	//   -4      -2      -3
	// resultat entre 1 et 2

}
			
			
			
			
			
			
			
			
			


	
  