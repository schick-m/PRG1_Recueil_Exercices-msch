# `while` (1)

Que va afficher à l'exécution chacun des groupes d'instructions ci-dessous ?

~~~cpp
// 1
int i = 0;
while (i - 10) {
   i += 2; cout << i << " ";
}
~~~

|i|i-10?|i += 2|cout|
|-|-|-|-|
|0|oui|2|2|
|2|oui|4|4|
|4|oui|6|6|
|6|oui|8|8|
|8|oui|10|10|
|10|non|||

> 2 4 6 8 10

<details>
<summary>Solution</summary>

~~~
2 4 6 8 10
~~~
</details>


~~~cpp
// 2
int i = 0;
while (i - 10)
   i += 2; cout << i << " ";
~~~

> 10

<details>
<summary>Solution</summary>
   
~~~
10
~~~

Noter que cout ne fait pas partie de la boucle
</details>


~~~cpp
// 3
int i = 0;
while (i < 11) {
   i += 2; cout << i << " ";
}
~~~

|i|i<11?|i+=2|cout|
|-|-|-|-|
|0|true|2|2|
|2|true|4|4|
|4|true|8|8|
|8|true|10|10|
|10|true|12|12|
|12|false|||

> 2 4 6 8 10 12

<details>
<summary>Solution</summary>

~~~
2 4 6 8 10 12
~~~
</details>

~~~cpp
// 4
int i = 11;
while (i--) {
   cout << i-- << " ";
}
~~~
|i|?|i-- et cout|i--|
|-|-|-|-|
|11|true|10|9|
|9|true|8|7|
|7|true|6|5|
|5|true|4|3|
|3|true|3|2|
|2|true|2|1|
|1|true|0|-1|
|-1|true|-2|-3|

> 10 8 6 4 3 2 0 -2 ...
<details>
<summary>Solution</summary>

~~~
10 8 6 4 2 0 -2 -4 …
~~~
boucle infinie
</details>

~~~cpp
//5
int i = 12;
while (i--) {
   cout << --i << " ";
}
~~~
|i|i?|i-2 et cout|
|-|-|-|
|12|true|10|
|10|true|8|
|8|true|6|
|6|true|4|
|4|true|2|
|2|true|0|
|0|false||

> 10 8 6 4 2 0

<details>
<summary>Solution</summary>

~~~
10 8 6 4 2 0
~~~
</details>

~~~cpp
// 6	
int i = 0;
while (i++ < 10) {
   cout << i-- << " ";
}
~~~
|i|i<10|i++|cout|i--|
|-|-|-|-|-|
|0|true|1|1|0|
|0|true|1|1|0|
||||||
||||||
||||||
||||||

> 1 1 1 1 1 1 1 1 ...
<details>
<summary>Solution</summary>

~~~
1 1 1 1 1 1 1 1 .... 
~~~
boucle infinie
</details>

~~~cpp
// 7	
int i = 1;
while (i <= 5) {
   cout << 2 * i++ << " ";
}
~~~
|i|i <= 5| cout 2*i|i++|
|-|-|-|-|
|1|true|2|2|
|2|true|4|3|
|3|true|6|4|
|4|true|8|5|
|5|true|10|6|
|6|false|||

> 2 4 6 8 10

<details>
<summary>Solution</summary>

~~~
2 4 6 8 10
~~~
</details>

~~~cpp
// 8
int i = 1;
while (i != 9) {
   cout << (i = i + 2) << " ";
}
~~~
|i|i!=9?|i=i+2 et cout|
|-|-|-|
|1|true|3|
|3|true|5|
|5|true|7|
|7|true|9|
|9|false||

> 3 5 7 9

<details>
<summary>Solution</summary>

~~~
3 5 7 9
~~~
</details>
