// but : faire un compilateur qui permet de savoir si un chiffre est pair ou impair
// auteur : Félix Blouin Maisonneuve 
// date : 01-09-21

#include <iostream>

void main()
{   //Declaration des variables
    int nbr, somme;
    //demander àl'utlisateur un nombre entier
    std::cout << "donnez un nombre : ";
    std::cin >> nbr; "\n";

    //le nombre donne est diviser par deux car tous les nombre pair sont divisible par 2.
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


    //plan de test
    //nbr écran
    //1   impair
    //2   pair
    //-1  impair
    //-2  pair
    //0   pair
  } //a   ce n'est pas un nombre
}





