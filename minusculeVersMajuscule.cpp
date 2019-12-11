/*
 Conversion en majuscule
 */
#include <iostream>





void minusculesVersMajuscules(char chaine[]);

int main() {
   
   char chaine[255];
   
   std::cout << "Tapez une chaîne de caractères à transposer en majuscules : ";
   std::cin >> chaine;
   
   std::cout << chaine;
   
   minusculesVersMajuscules(chaine);
   
   std::cout << "La même chaîne en majuscules est : " << chaine << std::endl;
   return EXIT_SUCCESS;
}


/**
 Converti une chaine en majuscules

 @param chaine la chaine à convertir
 */
void minusculesVersMajuscules(char chaine[]) {
    
    int compteur = 0;
           
    while(chaine[compteur] != '\0')  // condition pour entrer dans la boucle tant que on est pas au caractere de fin de chaine 
    {
        if(chaine[compteur] >= 'a' && chaine[compteur] <='z') // condition qui convertie uniquement les caractere de l'alphabet et pas les crocher parenthese et autre 
        {
            chaine[compteur] = chaine[compteur] + ('A'-'a'); // calcule qui enleve 32 a la valeur c'est a dire la difference entre une lettre majuscule et minuscule dans la table ascii'
        }
    compteur++;
    }    
}
