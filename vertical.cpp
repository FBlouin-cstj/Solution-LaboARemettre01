// but : faire un compilateur qui permet de savoir si cest possible de mettre les chiffres à la verticale
// auteur : Félix Blouin Maisonneuve
// date : 01-09-21

#include <iostream>

void main()
{

    int nbr
        nbr1;
        nbr2;
        nbr3;
        nbr4;
        nbr5;
        t2;
        t3;
        t4;
        t5;

    std::cout << " veuilez donnez un nombre : ";
    std::cin >> nbr; "\n";

    if (nbr >= 10000, nbr <= 99999)
    {
        //pour le premier chiffre
        nbr1 = nbr / 10000;
        std::cout << nbr1 << "\n";
        //pour le deuxieme chiffre
        nbr2 = nbr / 1000;
        t2 = nbr2 % 10;
        std::cout << t2 << "\n";
        //pour le 3 chiffre
        nbr3 = nbr / 100;
        t3 = nbr3 % 10;
        std::cout << t3 << "\n";
        //pour le 4 chiffre
        nbr4 = nbr / 10;
        t4 = nbr4 % 10;
        std::cout << t4 << "\n";
        //pour le 5 chiffre
        nbr5 = nbr % 10;
        std::cout << nbr5 << "\n";

    }
    //sinon il affiche un message derreur
    else
    {
        std::cout << "Ce nombre ne contient pas 5 chiffres.";
    }
}