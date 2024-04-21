# Rezolvare subiecte Testul 3 si 2 propuse pentru BAC 2021

## Testul 3

### Subiectul I
1. 
    - Rezolvare
        * a -> Cade deoarece este imposibil sa obtinem un numar care sa satisfaca, conditia
        * b -> `!` transforma expresia in: `x >=-21 && x<= -2 || (x >= 2 && x<=21)` care respecta intervalul din enunt.
        * c -> Deoarece avem `||` obtinem 1 si pentru un numar din afara intervalului din enunt (de exemplu `1`)
        * d -> `!` transforma expresia in: `x>= -21 || x<= 21 || x<= -2 && x >= 2` Care este invalida.
    - Raspuns corect: `b`
2. 
    - Rezolvare:
        ```json
            f(54321) =
            = afisam * afisam 54321 calculam f(543) si la intoarcere afisam "/"
                = afisam * afisam 543 calculam f(5) si la intoarcere afisam "/"
                    = afisam * afisam 5 calculam f(0) si la intoarcere afisam "/"
                        = afisam * si /
                    = afisam /
                = afisam /
            = afisam /
        ```
    - Raspuns corect: "*54321*543*5*////" -> `c`
3. 
    - Rezolvare:
        ```json
              0   1    2    3    4    5
            MAVA MCA MCFR MNHCV MNLR MNT

            Primele 5 solutii:
            (0      1    2    3)
            (MAVA, MCA,MCFR, MNHCV),

            (0      1    2     4)
            (MAVA, MCA, MCFR, MNLR),

            (0      1     2    5)
            (MAVA, MCA, MCFR, MNT),

            (0      1    3       4)
            (MAVA, MCA, MNHCV, MNLR)

            (0      1     3     5)
            (MAVA, MCA, MNHCV, MNT). 

            Acum sa evaluam variantele:
            a -> (MNHCV, MNLR, MCFR, MNT)  adica (3 4 2 5) invalida, cu siguaranta am avut (2 3 4 5) inainte
            b -> (MCA, MNHCV, MNLR, MNT) adica (1 3 4 5) -> valida
            c -> (MCA, MCFR, MNHCV, MNLR, MNT) adica (1 2 3 4 5) invalida, trebuie doar 4
            d -> (MAVA, MCA, MNHCV, MCFR) adica (0 1 3 2) -> invalida, am avut (0 1 2 3) inainte
        ```
    - Raspuns corect:  `b`
4. 
    - Rezolvare:
        - Din matricea de adiacenta obtinem graful de mai jos:
        ![Graf initial](imagini/t3-s1-e4.png)
        - Din teorie stim ca un arbore este un graf aciclic si conex maximal, adica daca mai eliminam o muchie, nu mai este conex si daca mai adaugam o muchie, nu mai este aciclic,
        - Daca stergem muchiile: [3,1], [1,2] si[3,5] obtinem arborele de mai jos: 
        ![Graf initial](imagini/t3-s1-e4-b.png)
    - Raspuns corect: `a`
5. 
    - Rezolvare:
        - Conform enuntului avem graful initial: 
        ![Graf initial](imagini/t3-s1-e5-initial.png)
        - Acum stim ca trebui ca in subrafurile posibile sa ramanem cu nodurile 2, 3, 6
        - Prin subgraf, intelegem ca din graful initial stergem nodurile cu tot cu muchiile sale.
        - Astfel avem  grafurile din care stergem pe rand:
            - nodurile 5 si 4
            - nodurile 5 si 7
            - nodurile 5, 4, si 1
            - nodurile 5, 7, si 1
            - nodurile 5, 1, 4, si 7
            - nodurile 5, 4, si 7
        - Raspuns corect: `b`
### Subiectul II
1. 
    - a
        ```json
            n = 250887
            x = 0
            m = 0
            p = 1
            cat timp x < 10 executa
                cn = n = 250887
                cat timp cn != 0 executa
                    c = cn % 10 = 7
                    cn = 25088
                    daca c = x false
                cat timp cn != 0 executa
                    c = cn % 10 = 8
                    cn = 2508
                    daca c = x false
                cat timp cn != 0 executa
                    c = cn % 10 = 8
                    cn = 250
                    daca c = x false
                cat timp cn != 0 executa
                    c = cn % 10 = 0
                    cn = 25
                    daca c = x true
                        m = 0
                        p = 10
                cat timp cn != 0 executa
                    c = cn % 10 = 5
                    cn = 2
                    daca c = x false
                cat timp cn!= 0 executa
                    c = cn % 10 = 2
                    cn = 0
                    daca c = x false
                x = 2
            cat timp x < 10 executa
                cn = 250887
                cat timp cn != 0 executa
                    c = cn % 10 = 7
                ....
            Observam ca se va creea un numar nou, folosind doar cifrele care sunt egale cu 2, 4,6 sau 8, care sunt prezente in numar. Adica din numarul 250887, obtinem: 8820
        ```
    - b
        ```json
            - Folosind explicatia de mai sus, pentru oricare din numere de mai jos, dupa rularea programului, obtinem acelasi numere:  864, 642, 422, etc.
        ```
    - c
        ```c++
            #include <iostream>

            using namespace std;

            int main()
            {
                int n;
                cin >> n;
                int x = 0, m = 0, p = 1;
                while (x < 10) {
                    int cn = n;
                    while (cn != 0) {
                        int c = cn % 10;
                        cn = cn /10;
                        if (c == x) {
                            m = c * p + m;
                            p = p * 10;
                        }
                    }
                    x = x+2;
                }
                cout << m;
                return 0;
            }
        ```
    - d
        ```json
            citește n
            (număr natural nenul)
            x<-0; m<-0; p<-1
            ┌cât timp x<10 execută
            │ cn<-n
            |┌daca cn≠0 atunci
            │|┌execută
            ││|c<-cn%10; cn<-[cn/10]
            ││|┌dacă c=x atunci
            ││|│ m<-c*p+m; p<-p*10
            ││|└■
            ||└■cât timp cn≠0
            │└■
            │ x<-x+2
            └■
            scrie m
        ```
2. 
    - Rezolvare:
        ```c++
            struct exponate_info {
                char nume[21];
                char colectie[21];
            };

            struct muzeu{
                int numar;
                exponate_info exponat[100];
            }m;
        ```
3. 
    - Rezolvare:
        ```c++
            strcpy(s,"muzeu"); // S= "muzeu"
            s[0]=s[0]+1; // s = "nuzeu"
            cout<<s[1]<<s[0]<<endl; | printf("%c%c\n",s[1],s[0]); // afisam "un"
            strcpy(s,"muzeu"+2); // "muzeu" + 2 = "zeu", s = "zeu
            cout<<s; | printf("%s",s); afisam "zeu"
        ```
    - Programul afiseaza:
        ```json
            "un zeu"
        ```
### Subiectul III
1. 
    - Rezolvare:
        ```c++
            #include <iostream>

            using namespace std;

            int suma(int n);

            int main()
            {
                int n = 12;
                cout << suma(12);
                return 0;
            }

            int suma(int n) {
                int rezultat = 1; // initializam cu 1 pentru ca 1 sigur nu este prim

                for(int i = 1; i <=n; i++) {
                    if (n % i == 0) {
                        int estePrim = 1;
                        for(int j = 2; j * j <= i; j++) {
                            if ( i % j == 0) {
                                estePrim = 0;
                                break;
                            }
                        }
                        if (estePrim == 0) {
                            rezultat += i;
                        }
                    }
                }
                return  rezultat;
            }
        ```
2. 
    - Rezolvare:
        ```c++
            #include <iostream>

            using namespace std;

            int suma(int n);

            int main()
            {
                int m, n;
                cin >> m >> n;
                int matrice[m][n];
                for(int i = 0; i<m; i++) {
                    for(int j = 0; j < n; j++) {
                        cin >> matrice[i][j];
                    }
                }
                int exista =0;
                for(int i = 0; i<m; i++) {
                    int locColoana1 = matrice[i][0];
                    if (locColoana1 == 0) {
                        continue;
                    }
                    for(int j = 0; j < n; j++) {
                        if (matrice[j][n-1] == locColoana1) {
                            exista = 1;
                            cout << locColoana1 << " ";
                            break;
                        }
                    }
                }

                if (exista == 0) {
                    cout << "nu exista";
                };
                return 0;
            }
        ```
3. 
    - Rezolvare:
        - a
            ```json
                Deoarece avem nevoie sa salvam atat numarul de aparitii cat si pozitia la care s-a gasit un anume numar, in functie de cifra zecilor, o sa declaram o structura ce va avea 2 membri: pozitia la care s-a gasit ultimul numar cu o anumite cifra a prietenilor dar si numarul de aparitii al acestei cifre. Dupa aceea vom declara un vector ce va avea 10 elemente, fiecare fiind o structura cum am explicat mai sus. Dupa aceea, in timp ce parcurgem numar cu numar, aflam care este cifra zecilor, si bazat pe aceasta actualizam atat numarul de aparitii cat si ultima pozitie la care s-a gasit. Dupa ce am terminat de citit numerele din fisier, parcurgem vectorul de structuri sa gasim care este valoarea maxima de aparitii, dupa care vom mai face o parcurgere pentru a afisa pozitia tuturor elementelor care au un numar de aparitii egal cu valoarea maxima. Programul este eficient din punct de vedere al timpului de executie deoarece fisierul este parcurs o singura data si dupa aceea, o sa mai parcurgem de 2 ori un vector ce va avea doar 10 elemente si nu 10^6 cate pot fi in total.
            ```
        - b
            ```c++
                #include <iostream>
                #include <fstream>

                using namespace std;

                struct prieten {
                    int pozitie;
                    int aparitii = 0;
                };

                int main()
                {

                    ifstream  fin("bac.in");

                    struct prieten prieteni[10];
                    int numar;
                    int pozitie = 1;
                    while(fin >> numar) {
                        int cifraZecilor = numar / 10 % 10;
                        prieteni[cifraZecilor].aparitii++;
                        prieteni[cifraZecilor].pozitie = pozitie;
                        pozitie++;
                    } de astfel de structuri,    }
                    }

                    for(int  i = 0; i < 10; i++) {
                        if(prieteni[i].aparitii == aparitiiMaxime) {
                            cout << prieteni[i].pozitie << " ";
                        }
                    }


                    fin.close();
                    return 0;
                }
            ```
## Testul 2
### Subiectul I
### Subiectul II
### Subiectul III