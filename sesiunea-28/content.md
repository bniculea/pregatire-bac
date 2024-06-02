# Sesiunea 28

## Agenda

* Rezolvare Test 9 Propus BAC 2020
* Rezolvare Test 10 Propus BAC 2020
* Rezolvare Test 11 Propus BAC 2020

## Rezolvare Test 9 Propus BAC 2020

### Subiectul I

1. 
    - Rezolvare
        * a Invalid deoarece nu avem cum sa obtinem 0 dupa o impartire de genul, daca 2020 este divizor de al lui x
        * b Operatie invalida, fiind divizor de al lui X, obtinem 0 in paranteza si dupa aceea am avea x/0 care este invalid (division by zero)
        * c Invalid, similar ca la b
        * d Valid. Daca 2020 este divizor de al lui x, obtinem un alt divizor atunci cand impartim la x. Deci x % acest divizor ne va da tot 0
    - Raspuns corect: `d`
2. 
    - Rezolvare:
        ```json
            Intr-o matrice patratica cu 6 elemente, pentru diagonala secundara avem urmatoarele valori pentru i si j si pentru valoarea de la aceasta pozitie
                i = 0, j = 5 => 0
                i = 1, j = 4 => 4
                i = 2, j = 3 => 2
                i = 3, j = 2 => 2
                i = 4, j = 1 => 4
                i = 5, j = 0 => 0
        ```
    - Raspuns corect: `b` (12)
3. 
    - Rezolvare:
        ```json
            Avem:
            {roșu,galben,verde,albastru,violet}
            { 0  ,  1,     2  ,   3    ,  4}

            Primele 4 solutii sunt:
            (roșu,  galben,  verde),
            (roșu,  galben,  albastru),
            (roșu,  galben, violet),
            (roșu, verde, galben)

            Adica:
            (0, 1, 2),
            (0, 1, 3),
            (0, 1, 4),
            (0, 2, 1)

            Ultima solutie:
            (4, 3, 2)
            Penultima:
            (4,3,1) => (violet, albastru, galben)
        ```
    - Raspuns corect: `a`
4. 
    - Rezolvare:
        ```JSON
            Avem:
            (1,2,3,4,5,6,7,8,9,10)
            (2,5,4,0,4,1,5,5,3,4)

            Adica:
            4 -> Radacina si tata pentru: 3,5,10
            3 -> tata pentru: 9
            5 -> tata pentru 2,7,8
            2 -> tata pentru 1
            1 -> tata pentru 6
        ```
        - Astfel avem arborele de mai jos:
        ![Graf initial](imagini/t9-2020-s1-e4.png) 
        - Observam ca nodul 5 are 3 descendenti directi
    - Raspuns corect: `c`
5. 
    - Rezolvare:
        - Din matricea de adiacenta putem creea graful pentru primele 5 noduri si partial cel de-al 6-lea
        ![Graf initial](imagini/t9-2020-s1-e5.png)
        Drum elementar: Un lanț (drum) se numește elementar dacă în el nu se repetă noduri. Un lanț (drum) se numește simplu dacă în el nu se repetă arce.
        - Trebuie sa finalizam graful astfel incat sa existe doar 3 drumuri elementare care incep din 2 si se termina in 4
        - Observam ca deja avem un drum elementar: `[2->5->3->4]` si daca legam nodule 6 de 1, si de nodul 4 mai avem inca 2 adica:
            * `[2->5->6->1->4]` si `[2->6->1->4]`
        - Insa vedem ca daca mai adaugam si legatura intre 6 si 2, avem tot 3 drumuri elementare dar un grad maxim exterior: 2
    - Raspuns corect: `b`

### Subiecul II

1. 
    * a
        ```json
            N = 8, k = 3
            t = 1
            pentru i = 1, i <= 2; i++
                pentru j = 1, j <= 3;j++;
                    scrie t => 1
                pentru j = 2; j <= 3;j++
                    scrie t => 1
                pentru j = 3; j<=3; j++
                    scrie t => 1
                t = 2
            pentru i = 2; i<=2; i++
                pentru j = 1, j <= 3;j++;
                    scrie t => 2
                pentru j = 2; j <= 3;j++
                    scrie t => 2
                pentru j = 3; j<=3; j++
                    scrie t => 2
                t = 3
            
            pentru i=2; i>=1, i--
                scrie t => 3
            pentru i=1; i>=1; i--
                scrie t => 3 
        ```
        - Programul afiseaza: 1 1 1 2 2 2 3 3

    * b
        -  Observam ca sunt n/k incrementari de t. In cazul nostru, avand k=5, avem nevoie de 46 ca si valoare pentru n, pentru a obtine ultima cifra 10, asta pentru primul numar si 50 pentru cel mai mare
        - Cea mai mica: 46
        - Cea mai mare: 50
    * c
        ```c++
            #include <iostream>

            using namespace std;

            int main() {
                int n,k;
                cin >> n >> k;
                int t = 1;
                for (int i = 1; i<= n/k; i++) {
                    for (int j = 1; j <= k; j++) {
                        cout << t << " ";
                    }
                    t = t + 1;
                }

                for (int i = n%k; i>=1; i--) {
                    cout << t << " ";
                }
                return 0;
            }

        ```
    * d
        ```json
            citește n,k  
                (numere naturale nenule) 
            t<-1 
            ┌pentru i<-1,[n/k] execută 
            | j<-1
            │┌cat timp j <=k execută 
            ││ scrie t,' ' 
            || j <- j+1
            │└■ 
            │ t<-t+1 
            └■ 
            ┌pentru i<-n%k,1,-1 execută 
            │ scrie t,' ' 
            └■ 
        ```
2. 
    - Rezolvare:
        ```json
            f(0) = 0
            f(2020)
                = 0 + f(101)
                    = 1 + f(5)
                        = 5 + f(0)
                            = 0
                        = 5
                    = 6
                = 6
            = 6
        ```
3. 
    - Rezolvare:
        - Din enunt avem graful de mai jos:
        ![Graf initial](imagini/t9-2020-s2-e3.png)
        - Observam ca avem 
            - 3 componente conexe
            - Nodurile din componente cu cele mai putine noduri: 4, 7

### Subiectul III

1. 
    - Rezolvare:
        ```c++
            #include <iostream>

            using namespace std;

            void suma(int, int&);

            int main() {
                int n = 4713835,p;
                suma(n, p);
                cout << p;
                return 0;
            }

            void suma(int n, int &p) {
                int frecventaImpare[10] = {0};
                int rezultat = 0;
                while(n) {
                    int ultimaCifra = n%10;
                    if (ultimaCifra % 2 == 1) {
                        if (frecventaImpare[ultimaCifra] == 0) {
                            rezultat += ultimaCifra;
                            frecventaImpare[ultimaCifra]++;
                        }
                    }
                    n= n/10;
                }
                p = rezultat;
            }
        ```
2. 
    - Rezolvare:
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;


            int main() {
                int n;
                cin >> n;
                char cuvinte[n][21];
                for(int i = 0; i<n; i++){
                    cin >> cuvinte[i];
                }

                int existaPrefixe = 0;
                for(int i =0; i < n-1; i++) {
                    if (strlen(cuvinte[n-1]) > strlen(cuvinte[i])) {
                        continue;
                    } else {
                        int j =0;
                        int estePrefix = 1;
                        while(j < strlen(cuvinte[i]) && j < strlen(cuvinte[n-1])) {
                            if (cuvinte[i][j] != cuvinte[n-1][j]) {
                                estePrefix = 0;
                                break;
                            }
                            j++;
                        }
                        if (estePrefix) {
                            cout << cuvinte[i] << " ";
                            existaPrefixe = 1;
                        }
                    }
                }

                if (!existaPrefixe) {
                    cout << "nu exista";
                }
                return 0;
            }

        ```
3. 
    - Rezolvare:
        * a
            ```json
                O sa implementam un algoritm care va citi numar cu numar, si in timp ce citeste, daca numarul este divizibil cu k, atunci o sa incrementam un contor care va tine lungimea secventei curente. Atunci cand intalnim un numar care nu indeplineste cerinta, o sa verificam daca secventa curenta este mai mare decat lungimea secventei maxime, caz in care o sa o actualizam, si totodata o sa setam si un alt contoir ce numara cate secvente au lungimea maxima cu valoarea 1. Daca in schimb gasim o secventa egala cu secventa maxima, ca si lungime, o sa incrementam contorul care numara secventele maxime. Dupa ce am terminat citirea numerelor din fisier, mai verificam lungimea secventei curente pentru a avea acoperire in cazul in care ultimele numere citite din fisier, sunt toate divizibile cu k.
                Programul este eficient din punct de vedere al timpului de executie deoarece fisierul este citit o singura data si rezultatul este calculat in timp ce numerele sunt citite. In acelasi timp, programul este eficient din punct de vedere al memoriei deoarece nu se folosesc alte structuri de date pentru a stoca numerele, practic, din maximul de 10^6 numere cate pot fi in fisier, noi in memorie o sa tinem cel mult 1.
            ```
        * b
            ```c++
                #include <iostream>
                #include <fstream>

                using namespace std;


                int main() {
                    ifstream fin("bac.txt");
                    int secventaMaxima=0, secventaCurenta = 0, contor = 0;
                    int numar, k;
                    fin >> k;
                    while(fin >> numar) {
                        if (numar % k == 0) {
                            secventaCurenta++;
                        } else {
                            if (secventaCurenta > secventaMaxima) {
                                secventaMaxima = secventaCurenta;
                                secventaCurenta = 0;
                                contor = 1;
                            } else  if (secventaCurenta == secventaMaxima) {
                                contor++;
                            }
                        }
                    }

                    if (secventaCurenta > secventaMaxima) {
                        secventaMaxima = secventaCurenta;
                        contor = 1;
                    } else  if (secventaCurenta == secventaMaxima) {
                        contor++;
                    }

                    cout << secventaMaxima << " " << contor;

                    fin.close();
                    return 0;
                }

            ```

## Rezolvare Test 10 Propus BAC 2020

### Subiectul I

1. 
2. 
3. 
4. 
5. 

### Subiecul II

1. 
2. 
3. 

### Subiectul III

1. 
2. 
3. 

## Rezolvare Test 11 Propus BAC 2020

### Subiectul I

1. 
2. 
3. 
4. 
5. 

### Subiecul II

1. 
2. 
3. 

### Subiectul III

1. 
2. 
3. 