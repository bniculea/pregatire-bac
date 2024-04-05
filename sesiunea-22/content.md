# Rezolvare testele 9 si 8 propuse pentru Bac 2021

## Testul 9

### Subiectul I
1. 
    - Rezolvare:
        * a -> Daca luam x = 25 obtinem: (24)*10+5 = 245
        * b -> Daca luam x = 25 obtinem: 2+4+5 = 11
        * c -> Daca luam x = 25 obtinem: 54*10+2 = 542
        * d -> Daca luam x = 25 obtinem: 6 * 10 + 5 = 65
    - Raspuns: `a`
2. 
    - Rezolvare:
        ```json
            Notam 
            {salcie, carpen, larice, fag, ulm}
            {  0       1       2      3    4 }

            Primele 4 solutii sunt 
            (salcie, carpen, larice, fag, ulm) 
            (salcie, carpen, larice, ulm, fag)
            (salcie, carpen, fag, larice, ulm)
            (salcie, carpen, fag, ulm, larice)

            Adica:
            (0 1 2 3 4)
            (0 1 2 4 3)
            (0 1 3 2 4)
            (0 1 3 4 2)

            Deoarece sunt multe variante de generat, putem pleca de la ultima varianta generata anume

            Ultima: -> 4 3 2 1 0
            Penultima: -> 4 3 2 0 1
            Antepenultima: -> 4 3 1 2 0 (ulm fag carpen  larice salcie)
        - Raspuns corect: `c`

        ```
3. 
    - Rezolvare:
        ```json
            Eliminam a,b,c din punct de vedere al sintaxei.
        ```
    - Raspuns corect: `d`
4. 
    - Rezolvare:
        - Dupa ce desenam arborii, observam ca pentru nodurile 3 si 5 avem numar maxim de noduri pentru nivelul 2 (3)
    - Raspuns corect: `a`
5. 
    - Rezolvare:
        - Conform enuntului avem graful de mai jos:
                ![Graf initial](imagini/s1-e5.png)

        - Lanțul care conține numai muchii distincte este lanț simplu. Dacă muchiile unui lanț nu sunt distincte se numește lanț compus.

        - Definiție: Se numește ciclu un lanț simplu în care primul vârf este identic cu ultimul. Dacă toate vârfurile sunt distincte, mai puțin primul și ultimul, se numește ciclu elementar.
        - Tinand cont de teorie, daca adaugam muchiile si obtinem ciclul: `3,5,4,2,5,1,3` conform pozei de mai jos:
            ![Graf initial](imagini/s1-e5-sol.png)
    - Raspuns corect: `b`

### Subiectul II
### Subiectul III

## Testul 8

### Subiectul I
### Subiectul II
### Subiectul III