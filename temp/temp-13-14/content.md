## Test 13

### Subiectul I
1. 
    - Rezolvare
        * a Dupa transformare avem: `(n%4 == 0 && n%5 == 0)` care este ce avem nevoie
        * b Dupa transformare avem: `n/4 != 1 && n/5 == 0` care este invalid, nu respecte cerinta
        * c Dupa transformare avem: `n%4 == 0 && n%5 != 0` care este invalid, a doua parte nu respecta cerinta
        * d Dupa transformare avem: `n/4 == 0 && n/5 != 0` care este invalid
    - Raspuns corect: `a`
2. 
    - Rezolvare:
        ```json
            f(200200)
                = 2*f(20020)
                    = 2 * f(2002)
                        = 2 * f(200)
                            = 2 * f(20)
                                    = 20
                            = 40
                        = 80
                    = 160
                = 320
        ```
    - Raspuns corect: `d`
3. 
    - Rezolvare:
        ```json
            Primele 8: 5, 55, 555, 557, 565, 567, 57, 575
            9:-> 585
            10: -> 587
            11: -> 65
            12: -> 655
        ```
    - Raspuns corect: `d`
4. 
    - Rezolvare:
        ```json
            Din  enunt avem:
            (1,2,3,4,5,6,7,8,9,10)
            (2,8,2,9,8,9,0,7,7,9)

            7 radacina si tata pentru: 8 si 9
            8 tata pentru: 2,5
            9 tata pentru: 4,6,10
            2 tata pentru: 1,3
            Si observam ca frunzele sunt: 1,3,5,4,6,10
        ```
    - Raspuns corect: `c`
5. 
    - Rezolvare:
        ```json
            Stim ca ni se dau 7 noduri si 20 de muchii.
            Un graf complet este un graf care are un arc intre oricare 2 varfuri.
            Un graf complet cu n varfuri are (n*n-1)/2 muchii.
            Stiind ca avem 20 de muchii, trebuie sa calculam folosind formula de sus, cate noduri putem avea pentru a folosi cele 20 de muchii.
            Un graf complet cu 7 varfuri are: 7*6/2 = 21 muchii, mai mult decat avem noi
            Un graf complet cu 6 varfuri are: 6*5/2 muchii: adica 15, ceea ce este mai putin decat avem noi. Deci daca stergem un nod, putem avea un graf complet.
        ```
    - Raspuns corect: `b`
### Subiectul II

1. 
2. 
3. 

### Subiectul III

1. 
2. 
3. 
    - Rezolvare
        * a
        * b

## Test 14

### Subiectul I
1. 
2. 
3. 
4. 
5. 
### Subiectul II

1. 
2. 
3. 

### Subiectul III

1. 
2. 
3. 
    - Rezolvare
        * a
        * b
