# Exercitii recapitulative pentru stabilire program

## Mai jos o sa gasesti o lista de exercitii micute, cu un grad de dificultate ce va creste gradual incearca sa faci ce poti, cum poti. Felul in care le rezolvi ma va ajuta pe mine sa stabilesc cum abordam materialul pentru Bacalaureat. Spor!

## Agenda
1. Variabile
2. Instructiuni conditionale
3. Instructiuni repetitive
4. Vectori
5. Vectori 2D (Matrici)

## Variabile
- Nota:
    - Nu este nevoie de un program intreg pentru exercitiile de mai jos. Doar scrierea instructiunilor este de ajuns
1. Declara doua variabile in care sa putem stoca numere naturale.

2. Declara trei variabile in care sa stocam numere reale.

3. Scrie o secventa de instructiuni in care sa stocam media aritmetica a doua numere. Asigura-te ca vei declara variabilele inainte de a le folosi. Nu este neaparat nevoie ca variabilele sa fie initializate.

4. Ce se va afisa la rularea instructiunilor de mai jos?
    ```c++
        int nr1 = 10;
        int nr2 = 7;

        cout << (nr1 + nr2) / 2
    ```

5. Ce se va afisa la rularea instructiunilor de mai jos?
    ```c++
        int nr1 = 20;
        int nr2 = 1;

        cout << (nr1 + nr2) / 2.0;
    ```
6. Care este diferenta, ca si tip, intre urmatoarele valori: `'a'` si `"a"`?

7. Declara o variabila numita `adresa`. In aceasta variabila stocheaza urmatoarele cuvinte: `"Livezilor nr.73 Timisoara, Timis"`.

8. Daca am dori sa salvam cuvantul `"Starfield"` intr-o variabila de tip vector (sau sir) de caractere, care va fi dimensiunea minima necesara stocarii acestuia? (Hint, codeblocks e mai slaban aici si va accepta un raspuns gresit:D)

## Instructiuni conditionale

- Nota: la fel ca la sectiunea anterioara, nu este neaparat nevoie sa scrii un program intreg pentru rezolvarea exercitiilor de mai jos. Doar setul necesar de instructiuni este de ajuns.

1. Scrie un set de instructiuni care verifica daca variabila `varsta` (care este numar natural) contine o valoare para, caz in care va afisa cuvantul `"para"` sau `"impara"` in caz contrar.

2. Scrie un set de instructiuni care compara doua variabile de tip intreg, si care va afisa variabila cea mai mare.

3. Ce se va afisa in urma executiei instructiunilor de mai jos:
    ```c++
        int nr = 0;

        if (nr = 0) {
            cout << "nr este 0";
        } else {
            cout << "nr este diferit de 0";
        }
    ```

## Instructiuni repetitive
- Nota: pentru exercitiile in care se cere sa se spuna ce se va afisa, incearca sa rezolvi pe foaie sau in minte, si dupa aceea valideaza cu un IDE (codeblocks, Visual Studio, CLion, etc)

1. Scrie un program C++ care citeste de la tastatura un numar natural `n`, unde `n` >= 10. Programul va afisa, folosind o instructiune repetitiva (e.g `for`, `while`) toate numerele de la 0 la `n`, cate unul pe fiecare linie.\
    - Date de intrare: `n = 10`
    - Date de iesire:
    ```json
    0
    1
    2
    3
    4
    ...
    10
    ```

2. Scrie un program C++ care citeste de la tastatura un numar natural `n`, unde `n` >= 30. Programul va afisa, folosind o instructiune repetitiva (e.g `for`, `while`) toate numerele de la 0 la `n`, din 2 in 2, cate unul pe fiecare linie.
    - Date de intrare: `n = 30`
    - Date de iesire:
    ```json
    0
    2
    4
    6
    8
    10
    ...
    30
    ```

3. Scrie un program C++ care citeste de la tastatura un numar natural `n`, unde `n` >= 30. Programul va afisa, folosind o instructiune repetitiva (e.g `for`, `while`) toate numerele de la `n` la 0, din 2 in 2, cate unul pe fiecare linie.
    - Date de intrare: `n = 30`
    - Date de iesire:
    ```json
    30
    28
    26
    24
    22
    20
    18
    ...
    0
    ```
4. Ce se va afisa in urma executarii instructiunii de mai jos:
    ```c++
    #include <iostream>

    using namespace std;

    int main()
    {
        for (int i = 0; i < 10; i++) {
            if (i % 2 != 0) {
                continue;
            }
            cout << i << " ";
        }
    }
    ```

5. Ce se va afisa in urma executarii instructiunii de mai jos:
    ```c++
    #include <iostream>

    using namespace std;

    int main()
    {
        for (int i = 0; i < 10; i++) {
            if (i % 2 != 0) {
                break;
            }
            cout << i << " ";
        }
    }
    ```
     

## Vectori (siruri/array-uri)
- Nota: profesorii romani dintr-un motiv greu de inteles, numesc sirurile sau array-urile (cum e in engleza) drept vectori. Acesta poate parea confuz de aceea, atunci cand vorbim de vectori/array-uri/siruri o sa ne referim la acelasi lucru.
- Nota 2: Exercitiile de mai jos presupun scrierea unui programel C++.

1. Scrie un program C++ care citeste de la tastatura 10 numere si le salveaza intr-un vector.

2. Scrie un program C++ care determina cel mai mic numar dintr-un vector ce contine numere intregi.
    - Date de intrare: `[1 3, 4, -1, 5, 7, 99, -11, 2, -12, 223]`
    - Date de iesire: `-12`

3. Scrie un program C++ care determina cel mai mare numar dintr-un vector ce contine numere intregi.
    - Date de intrare: `[1 3, 4, -1, 5, 7, 99, -11, 2, -12, 21]`
    - Date de iesire: `99`

4. Scrie un program C++ care citeste un numar `n` si un numar `k` de la tastatura, dupa care va citi `n` numere reale pe care le va salva intr-un vector. Programul va determina de cate ori apare numarul `k` in vector sau `-` in cazul in care numarul nu exista in vector.
    - Date de intrare:
        - `n` = 9
        - `k` = 11
        - [2,4,11,6,4,11,4,8,9]
    - Date de iesire: `2`
    - Date de intrare:
        - `n` = 7
        - `k` = 3
        - [2,4,6,4,4,8,9]
    - Date de iesire: `-1`

## Vectori 2D (Matrici)
- Nota: la fel ca si in sectia anterioara, aici va trebui scris un program intreg pentru fiecare exercitiu.

1. Scrie un program in C++ care citeste de la tastatura un numar natural `n`. Dupa aceea, programul va citii de la tastatura o matrice patratica `n` x `n`. La final, programul va afisa matricea citita.

2. Scrie un program in C++ care citeste de la tastatura doua numere naturale `n` si `m`. Dupa aceea, programul va citii de la tastatura o matrice cu `n` linii si `m` coloane. La final, programul va afisa matricea citita.

3. Scrie un program in C++ care citeste de la tastatura un numar natural `n`. Dupa aceea, programul va citii de la tastatura o matrice patratica `n` x `n`. La final, programul va afisa elementele de pe diagonala principala.



## Etc - bla bla-ul sesiunii :D
Nu te stresa daca nu le poti face pe toate, sau vreuna dintre ele, incearca sa rezolvi  cat de bine poti tu, dupa cum am spus la inceput, asta ne va ajuta sa vedem cum vom continua.

Sporuri!! 🏋️‍♂️