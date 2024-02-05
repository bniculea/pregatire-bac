# Sesiunea 14

## Agend
- Rezolvare exercitii propuse sesiunea 13
- Scurta recapitulare algoritm de sortare
- Introducere in vectorul de aparitii / de frecventa
- Exercitii introductive vector de aparitii
- TBD

## Rezolvare exercitii propuse sesiunea 13

1. Subiectul III, Exercitiul 2 din Bac 2023 Iunie
    - Solutie:
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;

            int main() {

                int ns, np;
                cin >> ns >> np;
                int matrice[ns][np];
                for (int i =0; i < ns; i++) {
                    for(int j = 0; j < np; j++) {
                        cin >> matrice[i][j];
                    }
                }

                for (int i = 0; i < ns; i++) {
                    int indexNp = 0;
                    for (int j = 1; j < np; j++) {
                        if (matrice[i][j] > matrice[i][indexNp]) {
                            indexNp = j;
                        }
                    }
                    cout << (i+1)<<":"<<indexNp+1 <<" ";
                }
                return 0;
            }
        ``` 
2. Subiectul III, Exercitiul 2 din Bac 2022 Iunie
    - Solutie:
        ```c++
            #include <iostream>

            int calculeazaMinimum(int a, int b, int c, int d);
            int calculeazaMinimum(int a, int b, int c);
            int calculeazaMinimum(int a, int b);

            using namespace std;

            int main() {
                int m, n;
                cin >> m >> n;
                int matrice[m][n];

                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        cin >> matrice [i][j];
                    }
                }

                int nisipAdaugat = 0;
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        int minValue;
                        int parcelaNord = matrice[i-1][j];
                        int parcelaEst = matrice[i][j + 1];
                        int parcelaSud = matrice[i + 1][j];
                        int parcelaVest = matrice[i][j-1];
                        if (i == 0) {
                            if (j == 0) {
                                minValue = calculeazaMinimum(parcelaEst, parcelaSud);
                            } else if (j == n-1) {
                                minValue = calculeazaMinimum(parcelaSud, parcelaVest);
                            } else {
                                minValue = calculeazaMinimum(parcelaSud, parcelaVest, parcelaEst);
                            }
                        } else if (i == m-1) {
                            if (j == 0) {
                                minValue = calculeazaMinimum(parcelaNord, parcelaEst);
                            } else if (j == n-1) {
                                minValue = calculeazaMinimum(parcelaNord, parcelaEst);
                            } else {
                                minValue = calculeazaMinimum(parcelaNord, parcelaVest, parcelaEst);
                            }
                        } else {
                            minValue = calculeazaMinimum(parcelaNord, parcelaEst, parcelaVest, parcelaSud);
                        }


                        if (matrice[i][j] < minValue) {
                            int diferenta = minValue - matrice[i][j];
                            matrice[i][j] = diferenta;
                            nisipAdaugat += diferenta;
                        }
                    }
                }

                cout << nisipAdaugat;
            }

            int calculeazaMinimum(int a, int b) {
                if (a < b) {
                    return a;
                } else {
                    return b;
                }
            }

            int calculeazaMinimum(int a, int b, int c) {
                int minBC = calculeazaMinimum(b, c);
                return calculeazaMinimum(a, minBC);
            }

            int calculeazaMinimum(int a, int b, int c, int d) {
                int min = a;
                if (b < min) min = b;
                if (c < min) min = c;
                if (d <min) min = d;
                return min;
            }
        ```

3. Subiectul III, Exercitiul 2 din Bac 2022 Speciala
    - Solutie:
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;

            int main() {

                int n;
                cin >> n;
                int matrice[n][n];

                for(int i =0; i < n; i++) {
                    for (int j =0; j < n; j++) {
                        cin >> matrice[i][j];
                    }
                }

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (j > i) {
                            matrice[i][j-1] = matrice[i][j];
                        }
                    }
                }

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n-1; j++) {
                        cout << matrice[i][j] << " ";
                    }
                    cout << endl;
                }
                return 0;
            }
        ```

4. Subiectul III, Exercitiul 2 din Bac 2021 august
    - Solutie:
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;

            int main() {

                int n, k;
                cin >> k >> n;
                int matrice[n][n];
                for (int i =0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == j) {
                            matrice[i][j] = k * (i+1);
                        } else if (j > i) {
                            matrice[i][j] = (k * (i+1)) + (j-i);
                        } else {
                            matrice[i][j] = (k * (i+1)) - (i-j);
                        }
                    }
                }

                for (int i =0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        cout << matrice[i][j] << " ";
                    }
                    cout << endl;
                }

                return 0;
            }
        ```
## Scurta recapitulare algoritm de sortare
- Mai jos vedem cel mai simplu algoritm pe care putem sa il folosim  pentru a sorta un vector. Acesta se mai  numeste si sortare prin metoda bulelor (`bubblesort`)
- Practic avem 2 for-uri, primul merge de la `0` la `n-1`, celalalt merge de la `0` la `n-1-i`
- Dupa care, in al doilea for, comparam elementul curent, folosind variabila din al doilea for (e.g `numere[j]`) cu urmatorul element `numere[j+1]`
- Ordinea, ascendent sau descendent o decidem prin semnul folosit. Adica, daca vrem sa fie sortate ascendent, trebuie sa inlocuim numerele, daca elementul curent (`numere[j]`) este mai mare decat urmatorul element, altfel, daca vrem sa fie descendent, trebuie sa inlocuim numerele daca elementul curent este mai mic decat urmatorul.

```c++
    #include <iostream>
    using namespace std;

    int main() {
        int numere[13] = {2, 4, 5, 324, 34 ,65, 343, 76 ,543, 89, 46, 9, 11};
        int n = 13;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (numere[j] > numere[j+1]) {
                    int temp = numere[j];
                    numere[j] = numere[j+1];
                    numere[j+1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << numere[i] <<" ";
        }

        return 0;
    }

```

## Introducere in vectorul de aparitii / de frecventa
- Vectorul de aparitii este foarte util atunci cand vrem sa vedem de cate ori a aparut un numar / cifra intr-un anumit loc
- Ca si exemple de utilizare, putem folosi vectorul de aparitii in situatii precum cele de mai jos si nu numai:
    - De cate ori apare fiecare cifra intr-un numar
    - Care sunt cifrele care nu apar deloc intr-un numar
        - Aici pur si simplu ne uitam la cele care au 0 aparitii
    - Daca ni se da un sir de numere,  sa spunem care este cel mai mic sau cel mai mare numar pe care il putem efectua folosind cifrele numerelor
        - In cazul in care vrem sa facem numarul cel mai mare, pur si simplu populam vectorul de frecventa si dupa aceea afisam numerele pornind de la cel mai mare, de exemplu daca avem urmatorul vector de frecventa:
            ```json
            [0] -> apare de 2 ori
            [1] -> apare 1 data
            [2] -> apare de 0 ori
            [3] -> apare de 4 ori
            [4] -> apare de 5 ori
            [5] -> apare de 3 ori
            [6] -> apare de 0 ori
            [7] -> apare de 2 ori
            [8] -> apare 1 data
            [9] -> apare de 3 ori
            ```
            cel mai mare numar pe care il putem face este: `999877555444443333100`
        - In cazul in care trebuie sa il afisam pe cel mai mic, este pe dos, adica pornim afisarea de la cel mai mic doar ca trebuie sa avem grija la `0` deoarece daca apare, nu putem sa il folosim ca si cifra de inceput. De exemplu, daca avem urmatorul vector de frecventa: 
            ```json
            [0] -> apare de 2 ori
            [1] -> apare de 3 ori
            [2] -> apare de 0 ori
            [3] -> apare de 2 ori
            [4] -> apare de 1 ori
            [5] -> apare de 2 ori
            [6] -> apare de 3 ori
            [7] -> apare de 1 ori
            [8] -> apare 1 data
            [9] -> apare de 3 ori
            ```
            Cel mai mic numar pe care putem sa il facem este: `100113315566671999`. Ce trebuie sa observam este ca desi avem `0` cu 2 aparitii, nu putem sa il folosim ca cifra de inceput asa ca o sa "imprumutam" o aparitie de la urmatoarea cifra care are un numar de aparitii diferite de `0`, care este `1` in cazul nostru.
- Foarte IMPORTANT:
    - Numarul de elemente intr-un vector de aparitii este dat, de obicei, de limita superioara a intervalului in care cautam + 1.
        - De exemplu daca vrem sa vedem numarul de aparitii al cifrelor unui numar, vectorul de aparitii va avea 10 elemente: avem cifrele: `0,1,2,3,4,5,6,7,8,9`. Iar daca vrem sa vedem gen frecventa numerelor de pana la 200 intr-un fisier, inclusiv 200, vectorul de aparitii va avea 201 de elemente.
- De asemenea, de fiecare data cand declarati un vector de aparitii, INITIALIZEAZA-L cu `0` pentru a evita popularea acestuia cu valori din  memorie, random:
    ```c++
        int aparitii[10] = {0};
    ```
## Exercitii introductive vector de aparitii
- Acum ca am vorbit mai sus despre ce fel de probleme putem rezolva cu vectorul de aparitii, haide sa si scriem cod pentru unele dintre ele


* 1. 
    - Enunt:
        - Scrieti un program in c/c++ care citeste un numar `n` de la tastatura de minimum 5 cifre si maximum 8 cifre. Programul va afisa frecventa cifrelor sale, cu exceptia celor care au `0` aparitii. in urmatorul format (presupunem ca citim numarul 254257):
            ```json
                2 apare de 2 ori
                4 apare de 1 ori
                5 apare de 2 ori
                7 apare de 1 ori
            ```
    - Solutie:
        ```c++
            #include <iostream>

            using namespace std;

            int main() {
                int n;
                cin >> n;
                int aparitii[10] = {0};
                while(n) {
                    int ultimaCifra = n % 10;
                    aparitii[ultimaCifra]++;
                    n /= 10;
                }

                for (int i = 0; i < 10; i++) {
                    if (aparitii[i] > 0) {
                        cout << i << " apare de " << aparitii[i] <<" ori" << endl;
                    }
                }
                return 0;
            }
        ```
* 2. 
    - Enunt:
        - Scrieti un program in c/c++ care citeste un numar `n` de la tastatura de minimum 5 cifre si maximum 8 cifre. Programul va afisa cifrele care nu apar deloc in numar, separate printr-un spatiu, de exemplu, presupunand ca citim numarul 254257 se va afisa: `0 1 3 6 8 9`
    - Solutie:
        ```c++
            #include <iostream>

            using namespace std;

            int main() {
                int n;
                cin >> n;
                int aparitii[10] = {0};
                while(n) {
                    int ultimaCifra = n % 10;
                    aparitii[ultimaCifra]++;
                    n /= 10;
                }

                for (int i = 0; i < 10; i++) {
                    if (aparitii[i] == 0) {
                        cout << i <<" ";
                    }
                }
                return 0;
            }
        ```
           
- 3.
    - Enunt: 
        - Scrieti un program c/c++ care citeste un sir de numere din fisierul `bac.in`. Programul va afisa cel mai mare numar pe care il poate forma, folosind cifrele tuturor numerelor din fisier.
    - Solutie:
        ```c++
            #include <iostream>
            #include <fstream>
            using namespace std;

            int main() {
                ifstream fin("bac.in");
                int aparitii[10] = {0};

                int numar;
                while(fin >> numar) {
                    while (numar) {
                        int ultimaCifra = numar % 10;
                        aparitii[ultimaCifra]++;
                        numar /= 10;
                    }
                }

                for(int i = 9; i >= 0;i--) {
                    if (aparitii[i] != 0) {
                        for (int j = 0; j < aparitii[i];j++) {
                            cout << i;
                        }
                    }
                }

                fin.close();
                return 0;
            }
        ```
- 4.
    - Enunt: 
        - Scrieti un program c/c++ care citeste un sir de numere din fisierul `bac.in`. Programul va afisa cel mai mic numar pe care il poate forma, folosind cifrele tuturor numerelor din fisier.
    - Solutie:
        ```c++
            #include <iostream>
            #include <fstream>
            using namespace std;

            int main() {
                ifstream fin("bac.in");
                int aparitii[10] = {0};

                int numar;
                while(fin >> numar) {
                    while (numar) {
                        int ultimaCifra = numar % 10;
                        aparitii[ultimaCifra]++;
                        numar /= 10;
                    }
                }

                for(int i = 0; i <10; i++) {
                    if (aparitii[i] != 0) {
                        // Daca gasim un 0 o sa afisam mai intai o cifra de la urmatoarea cifra cu aparitii
                        if (i == 0) {
                            int urmatorulNumar = i+1;
                            while( aparitii[urmatorulNumar] == 0) {
                                urmatorulNumar++;
                            }
                            cout << urmatorulNumar;
                            for(int i = 0; i < aparitii[0]; i++) {
                                cout << 0;
                            }
                            // Aici scadem una din aparitiile imprumutate mai sus
                            aparitii[urmatorulNumar]--;
                        } else {
                            for (int j = 0; j < aparitii[i];j++) {
                                cout << i;
                            }
                        }
                    }
                }

                fin.close();
                return 0;
            }
        ```