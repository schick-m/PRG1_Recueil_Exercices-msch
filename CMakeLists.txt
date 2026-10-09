cmake_minimum_required(VERSION 4.3)
project(PRG1_Recueil_Exercices_msch)

set(CMAKE_CXX_STANDARD 14)

if(FALSE)
add_executable(PRG1_Recueil_Exercices_msch
        "02 - Types references arithmetique/05 - Taille et définition des entiers.cpp"
        "02 - Types references arithmetique/08 - Mantisse et exposant.cpp"
        "02 - Types references arithmetique/22 - volume une bouteille.cpp"
        "02 - Types references arithmetique/23 - conversion entre unites.cpp"
        "03 - Conditions et boucles/08 - Frais de livraison.cpp"
        "03 - Conditions et boucles/10 - Note ECTS.cpp"
        "03 - Conditions et boucles/11 - equation du second degre.cpp"
        "03 - Conditions et boucles/14 - accroissement d un avoir bancaire (1).cpp"
        "03 - Conditions et boucles/17 - accroissement d un avoir bancaire (2).cpp"
        "03 - Conditions et boucles/19 - accroissement d un avoir bancaire (3).cpp"
        "03 - Conditions et boucles/20 - Balle qui rebondit.cpp"
        "03 - Conditions et boucles/22 - Triangle d'étoiles.cpp"
        "03 - Conditions et boucles/23 - ppmc.cpp"
        "04 - Fonctions recursivite surcharge/03 - volume pyramide.cpp"
        "04 - Fonctions recursivite surcharge/04 - annee bissextile.cpp")

# Cible individuelle pour lancer cet exercice sans sélectionner la cible globale.
add_executable(volume_pyramide
        "04 - Fonctions recursivite surcharge/03 - volume pyramide.cpp")
endif()

add_executable(PRG1_Recueil_Exercices_msch
        "04 - Fonctions recursivite surcharge/05 - liste caracteres.cpp")

add_executable(correction_erreurs
        "04 - Fonctions recursivite surcharge/06 - correction erreurs.cpp")

add_executable(permutation_par_reference
        "04 - Fonctions recursivite surcharge/08 - permutation par reference.cpp")

add_executable(volume_pyramide
        "04 - Fonctions recursivite surcharge/03 - volume pyramide.cpp")
