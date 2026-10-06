# Références

Coder en C++ les questions suivantes

**NB** : les instructions sont dépendantes les unes des autres

1) Créer une variable `var1` initialisée 1



### Ma reponse

`int var1 = 1;`
<details>
<summary>Réponse</summary>

`int var1 = 1;`

</details>

2) Créer une référence `ref1` sur `var1`



### Ma reponse

`int& ref1 = var1;`
<details>
<summary>Réponse</summary>

`int& ref1 = var1;`

</details>

3) Créer une référence `ref2` non initialisée



### Ma reponse

Pas possible, une référence est toujours initialisée
<details>
<summary>Réponse</summary>

Pas possible, une référence est toujours initialisée

</details>

4) Passer la valeur de `var1` à 2



### Ma reponse

`var1 = 2;`
<details>
<summary>Réponse</summary>

`var1 = 2;`

</details>

5) Passer la valeur de `ref1` à 3



### Ma reponse

`ref1 = 3;`
<details>
<summary>Réponse</summary>

`ref1 = 3;`

</details>

6) Afficher la valeur de `var1`



### Ma reponse

`cout << var1; // => 3`
<details>
<summary>Réponse</summary>

`cout << var1; // => 3`

</details>

7) Afficher la valeur de `ref1`



### Ma reponse

`cout << ref1; // => 3` (aucune syntaxe particulière : une référence s'utilise comme la variable)
<details>
<summary>Réponse</summary>

`cout << ref1; // => 3` (aucune syntaxe particulière : une référence s'utilise comme la variable)

</details>

8) Créer une référence constante `cref1` sur `var1`, puis tenter de passer la valeur de `cref1` à 4



### Ma reponse

`const int& cref1 = var1;`

`cref1 = 4;` ne compile pas : une référence constante permet de lire la variable, pas de la modifier. `var1 = 4;` reste possible et `cref1` vaut alors 4.
<details>
<summary>Réponse</summary>

`const int& cref1 = var1;`

`cref1 = 4;` ne compile pas : une référence constante permet de lire la variable, pas de la modifier. `var1 = 4;` reste possible et `cref1` vaut alors 4.

</details>

