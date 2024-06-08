# Rezolvare variante propuse: 12,13,14 BAC 2020

## Test 12

### Subiectul I
1. 
    - Rezolvare:
        * a -> Invalid -> obtinem 1 si pentru x = -1 si y = 21 sau orice numere care inmultite nu dau 0
        * b -> Invalid, obtinem 1 si pentru orice y care este diferit de 20 si x diferit de 0
        * c -> Invalid, obtinem 1 si pentur un y care este egal cu 20 si x = 1
        * d -> `!` transforma expresia in: `x*(y-20)>0` adevarat doar pentru x, si y conform enuntului
    - Raspuns corect: `d`
2. 
    -  Raspuns corect: `a` => 20*2 = 40
3. 
    - Rezolvare:
        ```json
            f(54321)
                = calculam f(5432) si la intoarcere nu afisam nimic pentru ca `n` nu e par
                    = calculam f(543) si la intoarcere afisam `2` deoarece `n` este par
                        = calculam f(54) si la intoarcere nu afisam nimic pentru ca `n` nu e par
                            = calculam f(5) si la intoarcere afisam `4` deoarece `n` este par
                                = calculam f(0) si la intoarcere nu afisam nimic.
                            = afisam 4
                        = afisam 2
            
        ```
    - Raspuns corect: `b`
4. 
    - Rezolvare:
        - Din matricea de adiacenta avem graful de mai jos:
            ![Graf initial](imagini/t12-s1-e4.png)
        - Si avem:
            - Varful 1: 
                - Grad interior: 1
                - Grad exterior: 2
            - Varful 2:
                - Grad interior: 2
                - Grad exterior: 2
            - Varful 3:
                - Grad interior: 2
                - Grad exterior: 1
            - Varful 4:
                - Grad interior: 3
                - Grad exterior: 2
            - Varful 5:
                - Grad interior: 1
                - Grad exterior: 1
            - Varful 6:
                - Grad interior: 1
                - Grad exterior: 2
        - Daca stergem muchiile: [1,4] si [6,3] ajungem la conditia ceruta
    - Raspuns corect: `b`
5. 
    - Rezolvare:
        - Din enunt avem graful de mai jos:
        ![Graf initial](imagini/t12-s1-e5.png)
        - Observam ca avem nevoie de cel putin 2 muchii, sa eliminam (e.g 1-3 si 2-1) pentru a obtine graful partial neconex
    - Raspuns corect: `c`
### Subiectul II

1. 
    * a
        ```json
            n = 2592
            nr = 0
            c = 9
            cat timp c >=0
                m = 2592
                cat timp m!=0 si m%10!=c
                    m = 259
                cat timp m!= 0 si m%10 !=c fals
                daca m!= 0
                    nr = 9
                c = c-1 = 8
            cat timp c >= 0
                m <- n = 2592
                cat timp m!= 0 si m%10 != c
                    m = 259
                cat timp m!= 0 si m%10 != c
                    m = 25
                cat timp m!= 0 si m%10 != c
                    m = 2
                cat timp m!= 0 si m%10 != c
                    m = 0
                daca m!= 0 fals
                c = c-1 = 7
            cat timp c >= 0
                m <- n = 2592
                cat timp m!= 0 si m%10 != c
                    m = 259
                cat timp m!= 0 si m%10 != c
                    m = 25
                cat timp m!= 0 si m%10 != c
                    m = 2
                cat timp m!= 0 si m%10 != c
                    m = 0
                daca m!= 0 fals
                c = c-1 = 6
            cat timp c >= 0
                m <- n = 2592
                cat timp m!= 0 si m%10 != c
                    m = 259
                cat timp m!= 0 si m%10 != c
                    m = 25
                cat timp m!= 0 si m%10 != c
                    m = 2
                cat timp m!= 0 si m%10 != c
                    m = 0
                daca m!= 0 fals
                c = c-1 = 5
            cat timp c >= 0
                m <- n = 2592
                cat timp m!= 0 si m%10 != c
                    m = 259
                cat timp m!= 0 si m%10 != c
                    m = 25
                daca m!= 0
                    nr = 95
                c = c-1 = 6
                -----
            Programul creeaza un numar format din cifrele de la 9 la 0 care se gasesc in numar
            
            Si va returna 952
        ```
    * b: `2000, 2002, 2200`
    * c
        ```c++
            #include <iostream>

            using namespace std;

            int main()
            {
                int n;
                cin >> n;
                int c = 9, nr=0;
                while (c >= 0) {
                    int m = n;
                    while (m!= 0 && m%10 != c) {
                        m = m /10;
                    }

                    if(m != 0) {
                        nr = nr * 10 + m%10;
                    }
                    c = c-1;
                }
                cout << nr;
                return 0;
            }

        ```
    * d
        ```json
            citește n (număr natural nenul)
            nr<-0
            ┌pentru c<- 9,0,-1 execută
            │ m<-n
            │┌cât timp m≠0 și m%10c execută
            ││ m<-[m/10]
            │└■
            │┌dacă m<-0 atunci
            ││ nr<-nr*10+m%10
            │└■
            │
            └■
            scrie nr

        ```
2. 
    - Rezolvare
        ```c++
            #include <iostream>

            using namespace std;

            struct flori {
                int cod;
                int nrVarietati;
                int nrExemplare[11];
            }f[21];

            int main()
            {
                f[0].cod;
                f[0].nrVarietati;
                f[0].nrExemplare[3];
                
                return 0;
            }
        ```
3. 
    - Rezolvare:
        ```json
            Numerele sunt de forma: x x x x 6 si sunt crescatoare
            Ultimul: 23456
            Penultimul: 13456
            Antepenultimul: 12456
        ```
        - Raspuns: 12456, 13456, 23456

### Subiectul III

1. 
    - Rezolvare
        ```c++
            #include <iostream>

            using namespace std;

            int pDoi(int n);

            int main()
            {
                cout << pDoi(32);
                return 0;
            }

            int pDoi(int n) {
                int rezultat = 0;
                for(int i = n; i >=1; i--) {
                    int estePutere = 1;
                    int numar = i;
                    while(numar > 1) {
                        if (numar % 2 != 0) {
                            estePutere = 0;
                            break;
                        }
                        numar = numar / 2;
                    }
                    if (estePutere) {
                        rezultat = i;
                        break;
                    }
                }
                return rezultat;
            }

        ```
2. 
    - Rezolvare
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;


            int main()
            {
                char text[101];
                cin.getline(text, 101);
                int pozitieUltimaVocala = -1;
                for(int i = strlen(text)-1; i>=0; i--) {
                    if(strchr("aeiou", text[i]) != NULL) {
                        pozitieUltimaVocala = i;
                        break;
                    }
                };

                if (pozitieUltimaVocala == -1) {
                    cout << "nu exista";
                } else {
                    strcpy(text+pozitieUltimaVocala, text+pozitieUltimaVocala+1);
                    cout << text;
                }

                return 0;
            }
        ```
3. 
    - Rezolvare
        * a
            ```json
                O sa proiectam un algoritm care va citi n de la tastatura dupa care vom avea o instructiune repetitiva, ce va rula cat timp n va fi mai mare sau egal cu 1. Imediat cum intram in while, vom scrie in fisier n dupa care vom calcula urmatoarea valoare a lui n anume: daca n e mai mic sau egal cu 10 sau va fi impar, urmatorul n va fi egal cu n-1, altfel, va fi egal cu n/2. Algoritmul este eficient din punct de vedere al memoriei deoarece nu folosim vreo structura de date pentru a stoca numerele, ele fiind calculate din mers. In acelasi timp, algoritmul este eficient din punct de vedere al timpului deoarece vom scrie direct in ordine descrescatoare, nu mai va fi nevoie de o alta prelucrare pentru a le sorta.
            ```
        * b
            ```c++
                #include <iostream>
                #include <fstream>

                using namespace std;


                int main()
                {
                    ofstream fout("bac.out");
                    int n;
                    cin >> n;
                    while(n >= 1) {
                        fout << n << " ";
                        if (n <= 10 || n % 2 == 1) {
                            n = n-1;
                        } else {
                            n = n / 2;
                        }
                    }

                    return 0;
                }

            ```

## Test 13

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
