# Sesiunea 25

## Agenda

* Rezolvare test 1 propus pentru BAC 2021
* Rezolvare test 1 propus pentru BAC 2020
* Rezolvare test 2 propus pentru BAC 2020

## Rezolvare test 1 propus pentru BAC 2021

### Subiect I

1. 
    - Rezolvare:
        - a - Invalid deoarece primul || ne anuleaza conditia plus ca avem == in loc de !=
        - b - `!` din fata parantezei transforma expresia in: `(x > 5 && x < 20) || (x != y)` care este identica cu expresia din enunt
        - c - invalid deoarece primul || ne anuleaza conditia
        - d - `!` din fata parantezei transforma expresia in: `(x>= 5 && x <= 20) || (x != y)` care difera de expresia din enunt
    - Raspuns corect: `b`
2. 
    - Rezolvare:
        ```json
            f(4770777,7) =
                = 1 + f(477077, 7)
                    = 1 + f(47707, 7)
                        = 1 + f(4770, 7)
                            = 0
                        = 1
                    = 2
                = 3
        ```
    - Raspuns corect: `b`
3. 
    - Rezolvare:
        - a este corect d.p.d.v sintactic
        - b incorect, se acceseaza membrii intr-o maniera gresita d.p.d.v sintactic
        - c incorect, acelasi motiv ca la b
        - d incorect, acelasi motiv ca la b
    - Raspuns corect: `a`
4. 
    - Rezolvare:
        - Conform enuntului avem arborele de mai jos:
        ![Graf initial](imagini/t1-2021-s1-e4.png)
        - Astfel vedem ca nodurile de tip frunza sunt: 2,7,8
    - Raspuns corect: `d`
5. 
    - Rezolvare:
        - Graful din enunt arata similar cu cel de mai jos:
        ![Graf initial](imagini/t1-2021-s1-e5.png)
        - Observam ca avem 3 componente conexe
    - Raspuns corect: `c`

### Subiect II
1. 
    * a
        - Rezolvare:
            ```json
                n = 205579
                m = 10
                repeta
                    c = 9
                    n = 20557
                    c <=m true
                        m = 9
                repeta
                    c = 7
                    n = 2055
                    c <= m true
                        m = 7
                repeta  
                    c = 5
                    n = 205
                    c <= m true
                        m = 5
                repeta
                    c = 5
                    n = 20
                    c <= m true
                        m = 5
                repeta
                    c = 0
                    n = 2
                    c <= m true
                        m = 0
                repeta
                    c = 2
                    n = 0
                    c<= m false
                        m = -1
                scrie -1
            ```
    * b
        - Programul afiseaza -1 daca cifrele nu sunt in ordine descrescatoare de la dreapta a stanga, sau prima cifra a numarului in cazul in care acestea sunt in ordine descrescatoare
        - 7899, 7889, 7888
    * c
        ```c++
            #include <iostream>

            using namespace std;

            int main() {
                int n, m;
                cin >> n;
                if(n == 0) {
                    m = 0;
                } else {
                    do {
                        int c = n % 10;
                        n = n / 10;
                        if (c<= m) {
                            m = c;
                        } else {
                            m = -1;
                        }
                    } while (n != 0);
                }
                cout << m;
                return 0;
            }

        ```
    * d
        ```json
            citește n (număr natural) 
            m<-10 
            ┌dacă n=0 atunci  
            │ m<-0 
            │altfel 
            │┌execută  
            ││ c<-n%10; n<-[n/10] 
            ││┌dacă c<=m atunci m<-c 
            │││altfel m<--1    
            ││└■  
            │└cat timp n != 0 
            └■ 
            scrie m
        ```
2. 
    - Rezolvare:
        ```json
            Toate numerele care au paritate diferita si suma 14 sunt:
            1 4 9   
            1 6 7   
            1 8 5
            3 2 9   
            3 4 7   
            3 6 5   
            3 8 3  
            5 0 9 
            5 2 7   
            5 4 5   
            5 6 3   
            5 8 1   
            7 0 7
            7 2 5
            7 4 3
            7 6 1   
            9 0 5   
            9 2 3   
            9 4 1
            Cele cautate conform conditiei ca sunt crescatoare sunt:
            149 167 347   
        ```
3. 
    - Rezolvare:
        ```c++
            strcpy(s1,"bac2021"); // s = "bac2021"
            cout<<strlen(s1)<<endl; | printf("%d\n",lengtf(s1));  // afiseaza 7
            strcpy(s2,s1+3); strcpy(s2+2,"20-"); //s2 = 2021, s2 = 2020-
            strcat(s2,s1+3); // s2 = 2020-2021
            cout<<s2; | printf("%s",s2);// afiseaza 2020-2021
            // programul afiseaza:
            7
            2020-2021
            
        ```
### Subiect III
1. 
    - Rezolvare:
        ```c++
            #include <iostream>

            using namespace std;

            void divX(int n, int x);

            int main() {
                divX(4, 15);
                return 0;
            }

            void divX(int n, int x) {
                for (int i = n; i > 0; i--) {
                    cout << x * i << " ";
                }
            }

        ```
2.
    - Rezolvare:
        ```c++
            #include <iostream>

            using namespace std;


            int main() {
                int n;
                cin >> n;
                int matrice[n][n];
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        cin >> matrice[i][j];
                    }
                }

                // afisam prima coloana
                for (int i = 0; i < n; i++) {
                    cout << matrice[i][0] <<" ";
                }

                // afisam ultima linie dar plecam de la al doilea element
                for (int i = 1; i < n; i++) {
                    cout << matrice[n-1][i]<<" ";
                }

                // afisam ultima coloana dar plecam de sus in jos, si de la penultimul element
                for (int i = n-2; i >= 0; i--) {
                    cout << matrice[i][n-1] << " ";
                }

                // afisam prima linie de la dreapta la stanga dar plecam de la penultimul si mergem pana la al doilea
                for(int i = n-2; i >= 1; i--) {
                    cout << matrice[0][i] << " ";
                }

                return 0;
            }

        ```
3.  
    - Rezolvare:
        * a
            ```json
                O sa implementam un algoritm care va parcurge fisierul si toate numerele de 2 cifre le va pune intr-un vector de frecventa. Dupa ce am parcurs fisierul, o sa parcurgem vectorul de frecventa de la capat si pentru fiecare numar ce are frecventa 0 si cifrele distincte, o sa il salvam fie in variabila pentru primul numar, or in variabila pentru al doilea numar, in functie de valoarea unui contor pe care il vom folosi sa stim daca am gasit sau nu cele 2 numere.
                
                La final, daca contorul nu va avea valoarea 2, se va afisa nu exista, altfel vom afisa valorile celor 2 numere.
            ```
        * b
            ```c++
                #include <iostream>
                #include <fstream>

                using namespace std;


                int main() {
                    ifstream fin("bac.in");
                    int frecventa[100] = {0};
                    int numar;
                    while (fin >> numar) {
                        if (numar >= 10 && numar <= 99) {
                            frecventa[numar]++;
                        }
                    }

                    int contor = 0;
                    int numar1, numar2;

                    for(int i = 99; i >= 10; i--) {
                        if (frecventa[i] == 0) {
                            int copieI = i;
                            int d2 = copieI % 10;
                            copieI = copieI / 10;
                            int d1 = copieI % 10;
                            if (d1 != d2 && contor < 2) {
                                if (contor == 0){
                                    numar1 = i;
                                } else {
                                    numar2 = i;
                                }
                                contor++;
                            }
                        }
                    }

                    if (contor < 2) {
                        cout << "nu exista";
                    } else {
                        cout << numar1 << " " << numar2;
                    }
                    fin.close();
                    return 0;
                }

            ```
## Rezolvare test 1 propus pentru BAC 2020

### Subiect I
### Subiect II
### Subiect III

## Rezolvare test 2 propus pentru BAC 2020

### Subiect I
### Subiect II
### Subiect III