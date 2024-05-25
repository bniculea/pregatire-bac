# Rezolvare test 6,7,8 propuse pentru BAC 2020

## Testul 6

### Subiectul I
1. 
    - Rezolvare
        - Daca evaluam expresia, avem: (x >=18) && (x>= 19 && x<= 20) && (x<=21>)
        - Astfel numerele care valideaza expresia sunt: 19, 20
        * a -> invalid
        * b -> invalid
        * c -> valid
        * d -> invalid
    - Raspuns corect:  `c`
2. 
    - Rezolvare:
        ```json
            Avem:
            {caprifoi, iasomie, liliac, tamarix, scumpie}
            {  0     ,    1   ,    2  ,    3   ,    4   }

            Primele 4 solutii sunt: 
            (caprifoi, iasomie, liliac, tamarix, scumpie),
            (caprifoi, iasomie, liliac, scumpie, tamarix),
            (caprifoi, iasomie, tamarix, liliac, scumpie),
            (caprifoi, iasomie, tamarix, scumpie, liliac)

            Adica:
            (0,1,2,3,4),
            (0,1,2,4,3),
            (0,1,3,2,4),
            (0,1,3,4,2)

            Ultima solutie este:
            (4,3,2,1,0)
            Penultima este:
            (4,3,2,0,1) -> (scumpie, tamarix, liliac, caprifoi, iasomie)
        ```
    - Raspuns corect: `c`
3. 
    - Rezolvare:
        - Chiar daca nu stim formula matematica, ne dam seama dupa sintaxa:
        * a -> Valid, de asemenea si singura valida din punct de vedere sintactic
        * b -> invalid
        * c -> invalid
        * d -> invalid
    - Raspuns corect: `a`
4. 
    - Rezolvare:
        - Din enunt avem arborele de mai jos:
        ![Graf initial](imagini/t6-2020-s1-e4.png)
        - Observam ca pe nivelul 2 gasim nodurile: 6,1,2
    - Raspuns corect: `d`
5. 
    - Rezolvare:
        - Din enunt avem graful initial:
        ![Graf initial](imagini/t6-2020-s1-e5.png) 
        - Pentru ca un graf sa fie tare conex, trebuie sa avem drum intre oricare 2 varfuri ale grafului
        - Observam ca daca adaugam muchiile: [4,3] si [1,2] graful devine tare conex
    - Raspuns corect: `b`

### Subiectul II
1. 
   * a
        ```json
            n = 7
            nr = 0, i = 1
            cat timp 1<= 7
                x = 0
                y = 1
                j = 1
                cat timp j < i executa fals
                i = 2
                daca y > 0
                    nr = 1
            cat timp 2 <= 7
                x = 0
                y = 1
                j = 1
                cat timp j<i (1 <2)
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                i = 3
                daca y > 0 fals
            cat timp 3 <= 7
                x = 0
                y = 1
                j = 1
                cat timp j < i (1 < 3)
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                cat timp  j < i (2 < 3)
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 3
                i = 4
                daca y > 0 atunci
                    nr = nr+1 = 2
            cat timp i <= n (4<= 7)
                x = 0
                y = 1
                j = 1
                cat timp j < i (1 < 4>) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                cat timp  j<i (2 <4) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 3
                cat timp j<i (3 <4) executa
                    r = 2*x-y = -2-1=-3
                    x = 1
                    y - -3
                    j = j+1 =4
                i = 5
                 daca y > 0 fals
            cat timp i<= n (5 < 7)
                x = 0
                y = 1
                j = 1
                cat timp j<i (1<5) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                cat timp j<i (2 < 5) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 3
                cat timp j<i (3 < 5) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 4
                cat timp j < i (4 < 5) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 5
                i = 6
                daca y > 0
                    nr = nr+1 = 3
            
            cat timp i<= n executa
                x = 0
                y = 1
                j = 1
                cat timp j<i (1 <6 ) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                cat timp j<i (2 < 6) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 3
                cat timp j<i (3 < 6) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 4
                cat timp j < i (4 < 6) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 5
                cat timp j < i (5 < 6) executa
                    r = 2*x-y = -3
                    x = 1
                    y = -3
                    j = 6
                i = 7
                daca y > 0 fals
            cat timp i<=n (7<=7)
                x = 0
                y = 1
                j = 1
                cat timp j<i (1 <7 ) executa
                    r = 2*x-y = -1
                    x = 1
                    y = -1
                    j = 2
                cat timp j<i (2 < 7) executa
                    r = 2*x-y = 1
                    x = -1
                    y = 1
                    j = 3
                cat timp j<i (3 < 7) executa
                    r = 2*x-y = -3
                    x = 1
                    y = -3
                    j = 4
                cat timp j < i (4 < 7) executa
                    r = 2*x-y = 5
                    x = -3
                    y = 5
                    j = 5
                cat timp j < i (5 < 7) executa
                    r = 2*x-y = -1
                    x = 5
                    y = -1
                    j = 6
                cat timp j < i (6 < 7) executa
                    r = 2*x-y = 9
                    x = -1
                    y = 9
                    j = 7
                daca y > 0 
                    nr = nr+1 = 4
            
            scrie nr => 4
                
        ```
   * b
        - Deoarece la fiecare numar impar se incrementeaza nr, numerele cautate sunt: `19` si `20`
   * c
        ```c++
            #include <iostream>
            #include <fstream>

            using namespace std;
            int main() {
                int n;
                cin >> n;
                int nr = 0, i = 1;
                while (i<=n) {
                    int x = 0, y = 1, j = 1;
                    while (j < i) {
                        int r = 2*x-y;
                        x = y;
                        y = r;
                        j = j+1;
                    }

                    i = i+1;
                    if (y > 0) {
                        nr = nr+1;
                    }
                }

                cout << nr;
            }
        ```
   * d
        ```json
            citește n (număr natural nenul)
            nr<-0;
            ┌pentru i<-1,n execută
            │ x<-0; y<-1; j<-1
            │ ┌cât timp j<i execută
            │ │ r<-2*x-y; x<-y; y<-r
            │ │ j<-j+1
            │ └■
            │ ┌dacă y>0 atunci
            │ │ nr<-nr+1
            │ └■
            └■
            scrie nr
        ```
2. 
    - Rezolvare:
        ```json
            - O sa incercam sa dam valori pentru a ne da seama ce face aceasta functie
            Incepem cu x1 = 9 si calculam f(10, 9)
            f(10, 9) =
                = 1 + f(1, 9)
                    = 9 + f(1, 8)
                        = 8 + f(1, 7)
                            = 7 + f(1, 6)
                                = 6 + f(1, 5)
                                    = 5 + f(1,4)
                                        = 4 + f(1,3)
                                            = 3 + f(1,2)
                                                = 2 + f(1,1)
                                                    = 1
                                                = 3
                                            = 6
                                        = 10
                                    = 15
                                = 21
                            = 28
                        = 36
                    = 45
                = 46
            Incercam x1 = 7 si calculam f(10, 7)
            f(10,7) 
            = 1 + f(3, 7)
                = 2 + f(3, 4)
                    = 1 + f(3, 1)
                        = 3 + f(2, 1)
                            = 2+ f(1, 1)
                                = 1
                            = 3
                        = 6
                    = 7
                = 9
            = 10
            Pare ca trebuie un x1 si mai mic, luam x1 = 6 si calculam f(10,  6)
            f(10, 6) =
                = 1 + f(4, 6)
                    = 1 + f(4, 2)
                        = 2 + f(2, 2)
                            = 1
                        = 3
                    = 4
                = 5
            Si am gasit x1 = 6.

            Acum pentru a gasi x2 astfel incat f(x2, 10) sa fie 1, observam ca pentru un a egal cu b obtinem 1, adica luam x2 = 10;

        ```
3. 
    - Rezolvare:
        - Observam ca prima coloana are numerele in scadere, avand o diferenta de 5 intre fiecare 2 numere consecutive de pe prima coloana, iar pe linie, merg crescator
        ```c++
            #include <iostream>

            using namespace std;

            int f(int, int);
            int main() {
            int a[4][5] = {
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
            };
            for(int i = 0; i<4; i++) {
                for(int j = 0; j < 5; j++) {
                    // daca e prima coloana
                        if (j == 0) {
                            // si daca e prima linie, hardcodam la 16
                            if (i == 0) {
                                a[i][j] = 16;
                            } else {
                            // altfel calculam in functie de indexul liniei
                            a[i][j] = 16-5*i;
                            }
                        } else {
                            // pentru restul de elemente, fiecare numar este egal cu valoarea
                            // de pe prima coloana + indexul coloanei
                            a[i][j] = 16-5*i + j;
                        }
                }
            }

                for(int i = 0; i<4; i++) {
                    for(int j = 0; j < 5; j++) {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
            }

        ```


### Subiectul III

## Testul 7

### Subiectul I
### Subiectul II
### Subiectul III

## Testul 8

### Subiectul I
### Subiectul II
### Subiectul III