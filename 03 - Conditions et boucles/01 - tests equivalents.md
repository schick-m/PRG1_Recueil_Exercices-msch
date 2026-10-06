# Tests équivalents ? 

Les deux extraits de code suivants sont-ils équivalents ? Justifiez votre réponse.

~~~cpp 
if (prixActuel > 100) {
   nouveauPrix = prixActuel - 20;
} else {
   nouveauPrix = prixActuel - 10;
}
~~~

~~~cpp 
if (prixActuel < 100) {
   nouveauPrix = prixActuel - 10;
} else {
   nouveauPrix = prixActuel - 20;
}
~~~
> Non, si le résultat est égal à 100, alors le code n'aura pas la même influence.



### Ma reponse

Non, si prixActuel == 100, la valeur de nouveauPrix diffère.
<details>
<summary>Solution</summary>
Non, si prixActuel == 100, la valeur de nouveauPrix diffère. 
</details>