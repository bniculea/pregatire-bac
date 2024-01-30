# Sesiunea 12

## Agenda
* Rezolvare subiectul III
* Exercitii matrici oarecare


## Rezolvare subiectul III


* 1
    - Solutie:
        ```c++
            #include <iostream>
            using namespace std;

            int estePNumar(int n);
            int kpn(int a, int b, int k);

            int main() {
                cout << kpn(27, 50, 3);
                return 0;
            }

            int kpn(int a, int b, int k){
            int contor = 0;
            int rezultat = -1;
            for(int i = a; i<=b; i++){
                if (estePNumar(i)){
                    contor++;
                    if (contor == k){
                        rezultat = i;
                        break;
                    }
                }
            }
            return rezultat;
            }

            int estePNumar(int n) {
                int sumaDivizori = 0;
                for (int i = 1; i <= n; i++) {
                    if (n % i == 0) {
                        sumaDivizori+= i;
                    }
                }

                if (sumaDivizori % 2 == n % 2) {
                    return 1;
                } else {
                    return 0;
                }
            }
        ```

* 2
    - Solutie:
        ```c++
            #include <iostream>
            #include <cstring>

            using namespace std;

            int main() {
                char text[101], rezultat[101];
                cin.getline(text, 101);
                int contor = 0;
                char *cuvant = strtok(text, " ");
                while (cuvant != NULL) {
                    if (strlen(cuvant) % 2 == 0) {
                        // il copiem direct in rezultat
                        strcat(rezultat, cuvant);
                        strcat(rezultat, " ");
                    } else {
                        int estePalindrom = 0;
                        int i =0, j = strlen(cuvant)-1;
                        while (i < j) {
                            if (cuvant[i] != cuvant[j]) {
                                estePalindrom = 0;
                                break;
                            }
                            i++;
                            j--;
                        }
                        if(estePalindrom) {
                            
                        }
                    }
                    cuvant = strtok(NULL, " ");
                }
                return 0;
            }
        ```