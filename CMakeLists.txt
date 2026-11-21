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

add_executable(retrait_argent
        "04 - Fonctions recursivite surcharge/09 - retrait argent.cpp")

add_executable(permutation_par_reference
        "04 - Fonctions recursivite surcharge/08 - permutation par reference.cpp")

add_executable(volume_pyramide
        "04 - Fonctions recursivite surcharge/03 - volume pyramide.cpp")
add_executable(operations_arithmetiques "04 - Fonctions recursivite surcharge/10 - operations arithmetiques.cpp")
add_executable(permutation_par_adresse "04 - Fonctions recursivite surcharge/12 - permutation par adresse.cpp")

add_executable(factorielle
        "04 - Fonctions recursivite surcharge/16 - factorielle.cpp")

add_executable(Fibonacci
        "04 - Fonctions recursivite surcharge/17 - Fibonacci.cpp")

add_executable(librairie
        "04 - Fonctions recursivite surcharge/20 - librairie.cpp"
        "04 - Fonctions recursivite surcharge/annexe.cpp"
        "04 - Fonctions recursivite surcharge/annexe.h")
add_executable(calcul_vectoriel "05 - Arrays vector string/06 - Calcul vectoriel.cpp")
add_executable(medaille_olympiques "05 - Arrays vector string/21 - Médailles olympiques.cpp")

add_executable(resize_push_pop
        "05 - Arrays vector string/08 - resize, push_back, pop_back.cpp")

add_executable(vector_to_string
        "05 - Arrays vector string/09 - to_string.cpp")

add_executable(rotateRight
        "05 - Arrays vector string/10 - rotateRight.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")

add_executable(supprimer_centre
        "05 - Arrays vector string/11 - supprimer éléments centraux.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")

add_executable(supprimer_valeur
        "05 - Arrays vector string/12 - supprimer une valeur.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")

add_executable(rendre_unique
        "05 - Arrays vector string/13 - rendre unique.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")

add_executable(remplacer_valeurs_paires
        "05 - Arrays vector string/14 - remplacement valeur.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")

add_executable(croissant EXCLUDE_FROM_ALL
        "05 - Arrays vector string/15 - croissant.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")
set_property(TARGET croissant PROPERTY CXX_STANDARD 20)

add_executable(ensemble EXCLUDE_FROM_ALL
        "05 - Arrays vector string/16 - ensemble.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")
set_property(TARGET ensemble PROPERTY CXX_STANDARD 20)

add_executable(recherche_dichotomique EXCLUDE_FROM_ALL
        "05 - Arrays vector string/17 - recherche dichotomique.cpp"
        "05 - Arrays vector string/annexe.cpp"
        "05 - Arrays vector string/annexe.h")
set_property(TARGET recherche_dichotomique PROPERTY CXX_STANDARD 20)

add_executable(moyenne_notes EXCLUDE_FROM_ALL
        "05 - Arrays vector string/18 - moyenne de notes.cpp")

add_executable(matrice_vecteur EXCLUDE_FROM_ALL
        "05 - Arrays vector string/19 - matrice et vecteur.cpp")

add_executable(matrice_caracteres EXCLUDE_FROM_ALL
        "05 - Arrays vector string/20 - Tableau 2d de caractères.cpp")

add_executable(analyse_caractere EXCLUDE_FROM_ALL
        "05 - Arrays vector string/22 - char.cpp")

add_executable(milieu_chaine EXCLUDE_FROM_ALL
        "05 - Arrays vector string/28 - Milieu une chaine de caracteres.cpp")

add_executable(chiffres_romains EXCLUDE_FROM_ALL
        "05 - Arrays vector string/29 - chiffres romains.cpp")

add_executable(analyse_entier EXCLUDE_FROM_ALL
        "05 - Arrays vector string/30 - analyse nombre entier.cpp")

add_executable(prenom_nom_acronyme EXCLUDE_FROM_ALL
        "05 - Arrays vector string/31 - Prenom nom et acronyme.cpp")

add_executable(palindrome EXCLUDE_FROM_ALL
        "05 - Arrays vector string/32 - mot palindrome.cpp")

add_executable(compter_occurrences EXCLUDE_FROM_ALL
        "05 - Arrays vector string/33 - Compter le nombre occurrences.cpp")

add_executable(analyser_adresse EXCLUDE_FROM_ALL
        "05 - Arrays vector string/34 - analyser une adresse.cpp")

add_executable(prenom_nom_acronyme_2 EXCLUDE_FROM_ALL
        "05 - Arrays vector string/35 - Prenom nom et acronyme 2.cpp")

add_executable(remplacer_occurrences EXCLUDE_FROM_ALL
        "05 - Arrays vector string/36 - Remplacer toutes les occurrences.cpp")

add_executable(somme_n_premiers_entiers EXCLUDE_FROM_ALL
        "06 - Gestion des erreurs/02 - Somme des n premiers entiers.cpp")

add_executable(supprimer_element_vector EXCLUDE_FROM_ALL
        "06 - Gestion des erreurs/03 - vector erase.cpp")
