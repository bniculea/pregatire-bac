# Rezolvare Subiectul III Varianta 2022 Speciala + Test 12 2021

## Subiectul III v.2022 Speciala
1. 
    - Rezolvare:
        ```c++
            #include <iostream>
            #include <cmath>

            using namespace std;
            void patrate(int n, int &x, int &y);

            int main() {
                int x, y;
                patrate(16, x, y);
                cout << x <<" " << y;
            }

            void patrate(int n, int &x, int &y) {
                int tempX = -1, tempY = -1;
                for(int i = 2; i*i <= n; i++) {
                    if (n % (i * i) == 0) {
                        tempY = n / (i * i );
                        int radacina = sqrt(tempY);
                        if (radacina * radacina == tempY && radacina != i && radacina > 1) {
                            tempY = radacina;
                            tempX = i;
                            break;
                        } else {
                            tempX=-1;
                            tempY=-1;
                        }
                    }
                }

                if (tempX == -1 || tempY == -1) {
                    x = 0;
                    y = 0;
                } else {
                    x = tempX;
                    y = tempY;
                }
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
3. 
    - Rezolvare:
        - a
            ```json
                Mai jos avem un algoritm care parcurge fisierul o singura data si
                in timp ce parcurge, analizeaza daca are o secventa de numere
                conform cerintei probleme. Felul in care lucreaza e in felul 
                urmator, de fiecare data cand gasim un numar care este egal cu 
                numarul citit anterior, incrementam un contor de aparitii. 
                De fiecare data cand gasim un numar care difera de ultimul numar 
                citit, ne uitam sa vedem daca numarul anterior a aparut de un 
                numar de ori, egal cu valoarea sa, caz in care actualizam un contor in care
                vom tine lungimea secventei curente.
                Totodata, o sa verificam daca lungimea secventei curente, este mai mare decat
                lungimea maxima intalnita, caz in care o actualizam.
                Algoritmul este eficient din punct de vedere al timpului de executie deoarece
                se efectueaza o singura citire a numerelor din fisier. Totodata, algoritmul este
                eficient din punct de vedere al memoriei deoarece, din totalul de 1 milion
                de numere, noi avem in memorie, in orice moment doar 2 numere (numarul curent si
                ultimul numar citit) + anumite variabile auxiliare unde tine minte lungimea secventelor si
                numarul de aparitii.
            ```
        - b
            ```c++
                #include <iostream>
                #include <fstream>

                using namespace std;

                int main() {
                    ifstream fin("bac.txt");
                    int numar;
                    int lungimeMaxima = 0;
                    int lungimeCurenta = 0;
                    int ultimulTermenCitit = -1;
                    int aparitiiUltimulTermen = 0;
                    while(fin >> numar) {
                        // Daca suntem la primul numar citit, initializam primul termen si contorul de aparitii
                        if (ultimulTermenCitit == -1) {
                            ultimulTermenCitit = numar;
                            aparitiiUltimulTermen = 1;

                            // Daca numarul curent este egal cu ultimul numar citit
                            // atunci incrementam contorul de aparitii al acestuia
                        } else if (numar == ultimulTermenCitit) {
                            aparitiiUltimulTermen++;
                            // Daca numarul citit difera de ultimul numar si ultimul numar citit
                            // respecta conditia adica numar = numarDeAparitii(numar)
                            // atunci adunam la lungimea curenta, cate aparitii a avut ultimul termen si
                            // vedem daca e nevoie sa updatam si lungimea maxima de pana acum
                        } else if (numar != ultimulTermenCitit && aparitiiUltimulTermen == ultimulTermenCitit) {
                                lungimeCurenta += aparitiiUltimulTermen;
                                aparitiiUltimulTermen = 1;
                                if(lungimeCurenta > lungimeMaxima) {
                                    lungimeMaxima = lungimeCurenta;

                                }
                            // Daca numarul citit difera de ultimul numar citit si totodata
                            // ultimul numar citit nu apare de un numar de ori = cu valoarea sa
                            // resetam lungimea curenta si setam numarul de aparitii ale ultimuli numar citit la 1
                        } else {
                            lungimeCurenta = 0;
                            aparitiiUltimulTermen = 1;
                        }
                        ultimulTermenCitit = numar;
                    }

                    if (ultimulTermenCitit == aparitiiUltimulTermen) {
                        lungimeCurenta += aparitiiUltimulTermen;
                        if (lungimeCurenta > lungimeMaxima) {
                            lungimeMaxima = lungimeCurenta;
                        }
                    }

                    cout << lungimeMaxima;
                    fin.close();
                }
            ```