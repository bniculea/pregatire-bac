## Test 13

### Subiectul I
1. 
    - Rezolvare
        * a Dupa transformare avem: `(n%4 == 0 && n%5 == 0)` care este ce avem nevoie
        * b Dupa transformare avem: `n/4 != 1 && n/5 == 0` care este invalid, nu respecte cerinta
        * c Dupa transformare avem: `n%4 == 0 && n%5 != 0` care este invalid, a doua parte nu respecta cerinta
        * d Dupa transformare avem: `n/4 == 0 && n/5 != 0` care este invalid
    - Raspuns corect: `a`
2. 
    - Rezolvare:
        ```json
            f(200200)
                = 2*f(20020)
                    = 2 * f(2002)
                        = 2 * f(200)
                            = 2 * f(20)
                                    = 20
                            = 40
                        = 80
                    = 160
                = 320
        ```
    - Raspuns corect: `d`
3. 
    - Rezolvare:
        ```json
            Primele 8: 5, 55, 555, 557, 565, 567, 57, 575
            9:-> 585
            10: -> 587
            11: -> 588
            12: -> 65
        ```
    - Raspuns corect: `d`
4. 
    - Rezolvare:
        ```json
            Din  enunt avem:
            (1,2,3,4,5,6,7,8,9,10)
            (2,8,2,9,8,9,0,7,7,9)

            7 radacina si tata pentru: 8 si 9
            8 tata pentru: 2,5
            9 tata pentru: 4,6,10
            2 tata pentru: 1,3
            Si observam ca frunzele sunt: 1,3,5,4,6,10
        ```
    - Raspuns corect: `c`
5. 
    - Rezolvare:
        ```json
            Stim ca ni se dau 7 noduri si 20 de muchii.
            Un graf complet este un graf care are un arc intre oricare 2 varfuri.
            Un graf complet cu n varfuri are (n*n-1)/2 muchii.
            Stiind ca avem 20 de muchii, trebuie sa calculam folosind formula de sus, cate noduri putem avea pentru a folosi cele 20 de muchii.
            Un graf complet cu 7 varfuri are: 7*6/2 = 21 muchii, mai mult decat avem noi
            Un graf complet cu 6 varfuri are: 6*5/2 muchii: adica 15, ceea ce este mai putin decat avem noi. Deci daca stergem un nod, putem avea un graf complet.
        ```
    - Raspuns corect: `b`
### Subiectul II

1. 
    - Rezolvare:
        * a
            ```json
                n = 12345
                p = 1; m = 0; k = 0
                cat timp n!= 0
                    x = 25
                    i = k = 0
                    cat tomp i!= 0
                    daca x == 0 fals => c = 5
                    m = 5+0
                    n = 1234
                    p = 10
                    k = 1
                cat timp n!= 0
                    x = 2070
                    i = 1
                    cat timp i != 0 executa
                        x = 207
                        i = 0
                    daca x = 0 fals =>c = 7
                    m = 7*10+5 = 75
                    n = 123
                    p = 100
                    k = 2
                cat timp n!= 0
                    x = 49
                    i = 2
                    cat timp i!= 0
                        x = 4
                        i = 1
                    cat timp i!= 0
                        x = 0
                        i = 0
                    daca x == 0 => c = 3
                    m = 300+75 = 375
                    n = 12
                    p = 1000
                    k = 3
                cat timp n!= 0
                    x =  270135
                    i = 3
                    cat timp i!= 0
                        x = 27013
                        i = 2
                    cat timp i!= 0
                        x = 2701
                        i = 1
                    cat timp i!= 0
                        x = 270
                        i = 0
                    Daca x == 0-> c = 0
                    n = 1
                    m = 375
                    p = 10000
                    k = 4
                cat timp n!= 0
                    x = 21
                    i = 4
                    cat timp i!= 0
                        x = 1
                        i = 3
                    cat timp i!= 0
                        x = 0
                        i = 2
                    .....

                    daca x == 0 => c = > 1
                    m = 10000+375 = 10375
                    p = 100000
                    n = 0
                    k = 5
            Scrie m => 10375
            ```
        * b
        * c
            ```c++
                #include <iostream>

                using namespace std;

                int main() {

                    int n;
                    cin >> n;
                    int p = 1, m = 0, k = 0;
                    while (n != 0) {
                        int x;
                        cin >> x;
                        int i = k;
                        while (i != 0){
                            x = x /10;
                            i = i-1;
                        }
                        int c;
                        if (x == 0) {
                            c = n % 10;
                        } else {
                            c = x % 10;
                        }

                        m = c * p + m;
                        n = n /10;
                        p = p * 10;
                        k = k +1;
                    }
                    cout << m;
                    return 0;
                }

            ```
        * d
            ```json
                citeşte n (număr natural) 
                p<-1; m<-0; k<-0 
                ┌cât timp n≠0 execută 
                │ citește x (număr natural) 
                │ i<-k 
                │┌cât timp i≠0 execută 
                ││ x<-[x/10]; i<-i-1 
                │└■ 
                │┌dacă x=0 atunci c<-n%10 
                ││altfel c<-x%10 
                │└■ 
                │ m<-c*p+m; n<-[n/10] 
                │ p<-p*10; k<-k+1 
                └■ 
                scrie m
            ```
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
