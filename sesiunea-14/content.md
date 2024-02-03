# Sesiunea 14

## Agend
- Rezolvare exercitii propuse sesiunea 13
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