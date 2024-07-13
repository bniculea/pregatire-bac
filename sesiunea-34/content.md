# Sesiunea 34

## Agenda

- Recapitulare exercitii functii recursive tema
- Functii recursive BAC
    - 2017 - Sesiunea speciala - Exercitiul SIII - 2
        - Raspuns: 1234123121
    - 2015 - Sesiunea august - Exercitiul SIII - 2
        - Raspuns: F(2015, x) unde x = {2,3,4,5}
            - Explicatie: functia afiseaza toti divizorii in ordine descrescatoare  mai mari sau egali cu d
    - 2015 - Sesiunea speciala - Exercitiul SIII - 2
        - Raspuns: 864157
- Rezolvare subiect admitere Info 2023 Vara
- Exercitii functii recursive:

## Exercitii functii recursive

1. 
    - Fie functia de mai jos, ce se va afisa pentru f(24)
        ```c++
            int f(int n) {
                if (n % 2 != 0) {
                    return n;
                }
                return f(n / 2);
            }
        ```

2. 
    - Fie functia de mai jos, ce se va afisa pentru f(21377)
        ```c++
            int f(int n) {
                int lastDigit = n % 10;
                n = n / 10;
                if (lastDigit % 2 == 0 && n == 0) {
                    return 1;
                } else if (lastDigit % 2 != 0 && n == 0) {
                    return -1;
                } else if(lastDigit % 2 == 0) {
                return f(n)+1;
                } else {
                    return f(n)-1;
                }
            }
        ```

3. 
    - Fie functia de mai jos, ce se va afisa pentru f(975311)
    ```c++
        int f(int n){
            if (n < 10) {
                return 1;
            }
            int lastDigit = n % 10;
            n /= 10;
            if (lastDigit > n %10) {
                return 0;
            }
            return f(n);

        }
    ```

4. 
    - Fie functia de mai jos, ce se va afisa pentru f(2050)
    ```c++
        int f(int n) {
            if (n < 10) {
                if (n == 0) {
                    return 1;
                }
                return 0;
            }
            int lastDigit = n % 10;
            n /= 10;
            if (lastDigit == 0) {
                return 1 + f(n);
            }
            return f(n);
        }
    ```

5. 
    - Fie functia de mai jos, ce se va afisa in urma rularii instructiunilor de mai jos:
    ```c++
        int n = 98764;
        int z = 0
        f(n, z);
    ```
    ```c++
        void f(int n, int &x) {
            if(n == 0){
                x = 0;
                return;
            }
            int lastDigit = n % 10;
            n /= 10;
            f(n,x);
            x += lastDigit;
        }
    ```

6. 
    - Fie functia de mai jos, ce se va afisa in urma apelului: `f(3,4)`
    ```c++
        int f(int b, int e) {
            if(e == 0) {
                return 1;
            }
            return b * f(b, e - 1);
        }
    ```

7. 
    - Fie vectorul de numere intregi x, ce contine valorile: `[1,4,3,5,2,6,8,2,5,7]` si `n` ce reprezinta numarul de elemente din vector. Considerand definitia functiei `f` de mai jos, ce se va afisa in urma apelului: `f(x, n)`.
    ```c++
        int f(int x[], int n) {
            if(n <= 0) {
                return 0;
            }
            return x[n - 1] + f(arr, n - 1);
        }
    ```

8. 
    - Fie functia `f` de mai jos, ce se va afisa in urma apelului `f(7)`
    ```c++
        int f(int n) {
            if(n <= 1) {
                return n;
            }
            return f(n - 1) + f(n - 2);
        }
    ```

9. 
    - Fie functia `f` de mai jos. Identifica problema pe care o are aceasta, si ofera o solutie.
    ```c++
        int f(int n) {
            if(n == 0) {
                return n;
            }
            return n + f(n-2);
        }
    ```