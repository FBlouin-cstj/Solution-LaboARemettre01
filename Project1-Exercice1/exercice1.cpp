// but : faire un compilateur qui permet de savoir si un chiffre est pair ou impair
// auteur : Félix Blouin Maisonneuve 
// date : 01-09-21

#include <iostream>

void main()
{   
    //Declaration des variables
    int nbr, somme;
    
    
    //demander à l'utilisateur un nombre entier
    std::cout << "donnez un nombre entier : ";
    std::cin >> nbr; "\n";

    
    //le nombre donne est diviser par deux car tous les nombre pair sont divisible par 2.                                              
                                                                                                                  //ou                        //Savoir si le nombre est pair ou impair
                                                                                                                                          if (nbr % 2 == 0)
    //et s'il nest pas divisible par deux la "somme" va avoir un reste qui va etre utile pour le "if"
    somme = nbr % 2;

    //si la somme est egal a 0 il y a un cout pour dire que cest pair
    if (somme == 0)
    {
        std::cout << "le nombre est pair";
    }
    // sinon il va dire que cest impair
    else
    {
        std::cout << "le nombre est impair";


        
    }
}





