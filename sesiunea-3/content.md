# Sesiunea 3

## Agenda

- Recapitulare concepte din sesiunile anterioare 
- Recapitulare exercitii de antrenament din sesiunile anterioare
- Exercitii cu functii recursive bacalaureat
- Exercitii de antrenament

## Exercitii cu functii recursive bacalaureat
- Mai jos o sa gasesti subiecte extrase din variantele de BAC ce au fost date in anii trecuti, incepand cu anul 2010.
- Nu iti face griji ca sunt variante vechi, ideea este sa intelegi cat mai bine acest tip de probleme, intrucat o sa vezi ca sunt identice, prin natura lor, cu ce a fost dat in editiile de bacalaureat mai recente.
- De asemenea, in folderul [subiecte](../subiecte/), o sa gasesti fiecare varianta din care am extras subiectele.
### 1. 
- `Enunt`: Se consideră subprogramul p, definit 
alăturat. Valoarea lui `p(210, 49)` este: 
- `Sursa`: BAC 2010 Iunie - Subiectul III, exercitiul 1
```c++
    int p(int m, int n) 
    { if(n==0) return 1; 
        return 1+p(n, m%n); 
    }
```
- `Variante`:
    * a -> 1
    * b -> 2
    * c -> 3
    * d -> 4 [`Correct`]
- `Solutie`:
    ```json
        = 1 + p(49, 14) =
            = 1 + (1 + p(14, 7))
                = 1 + (1 + (1 + p(7, 0)))
                    = 1 + (1 + (1 + 1))
    ```

### 2.
- `Enunt`: Se consideră subprogramul f, definit alăturat. Scrieti două numere naturale din intervalul deschis `(20,30)`, care pot fi memorate în variabilele întregi `x1`, şi respectiv `x2`, astfel încât valoarea lui `f(x1,3)` să fie `29`, iar valoarea lui `f(3,x2)` să fie 1. 
- `Sursa`: BAC 2010 August - Subiectul III, exercitiul 2
```c++
    int f(int a, int b) 
    { if(a>=b) 
    return (a-b)+f(a/b,b); 
    return 1; 
    }
```
- `Solutie`:
    - Incercam sa dam valori lui `x1` din intervalul specificat
    - Incepem cu `21`
        ```json
            f(21, 3) =
                = 18 + f(7, 3)
                    = 18 + (4 + f(2, 3))
                        = 18 + ( 4 + 1) = 23
        ```
        * obtinem 23, ceea ce nu ne satisface, mergem mai departe
    - Incercam cu `29`, ultima valoare posibila
        ```json
            f(29, 3) = 
                = 26 + f(9, 3)
                    = 26 + 6 + f(3,3)
                        = 26 + 6 + 0 + f(1, 3)
                            = 26 + 6 + 0 + 1
                                = 33
        ```
        * obtinem 33, care din nou nu este ceea ce cautam noi, chiar mai mare. 
    - Incercam cu `25`, un numar care e cu `4` mai mic decat valoarea incercata la pasul anterior
        ```json
            f(25, 3) =
                = 22 + f(8, 3)
                    = 22 + 5 + f(2, 3)
                        = 22 + 5 + 1 = 28
        ```
        * Acum suntem foarte aproape de numarul dorit
    - Incercam cu `26`:
        ```json
            f(26, 3) =
                = 23 + f(8, 3)
                    = 23 + 5 + f(2, 3)
                        = 23 + 5 + 1
                            = 29
        ```
        * si am obtinut ce am dorit. Deci `x1` = 26
    - Pentru `x2` este foarte simplu deoarece conform functiei noastre, putem alege orice valoare, din intervalul specificat intrucat toate sunt mai mari decat `3` (care reprezinta parametrul `a`) lucru ce inseamna ca vom sari direct la conditia de oprire.
        * deci `x2` poate fi orice numar din intervalul (20, 30), sa zicem `21`

### 3. 
- `Enunt`: Se consideră subprogramele recursive C1 şi C2, definite mai jos.   
```c++
    int C1 (int a, int b) 
    { if(a==b) return a; 
    else if(a>b) return C1(a-b,b); 
        else return C1(a,b-a); 
    } 

    int C2 (int a, int b) 
    { if(b==0) return a; 
    else return C2(b,a%b); 
    } 
```
La apel, returnează valoarea celui mai mare divizor comun al celor două numere naturale 
nenule primite ca parametri:
- `Sursa`: BAC 2011 Iunie - Subiectul III, Exercitiul 1.
- `Variante`: 
    * a.  numai C1 
    * b.  numai C2 
    * c.  atât C1 cât şi C2 [`Corect`]
    * d.  nici C1 nici C2 

- `Solutie`
    - Ne alegem doua numere arbitrare, `28` si `49`, unde stim ca cmmdc al lor este `7`. Apelam ambele functii cu aceste valori:
        ```json
        c1(28, 49)
            = c1(28, 21)
                = c1(7, 21)
                    = c(7, 14)
                        = c(7, 7)
                        = 7

        c2(28, 49)
            = c2(49, 28)
                = c2(28, 21)
                    = c2(21, 7)
                        = c2(7, 0)
                            = 7
        ```
        * Rezulta ca ambele functii intorc cmmdc


### 4.
- `Enunt`: 
Scrieti ce se afişează în urma apelului de 
mai jos pentru subprogramul `f`, definit 
alăturat. `f(12345)`;

```c++
    void f (int x) 
    { cout<<”*”; | printf(”*”); 
        if(x>0) { 
         cout<<x; | printf(”%d”,x); 
         f(x/100); 
         cout<<”*”; | printf(”*”); 
        } 
    } 
```
- `Sursa`: BAC 2011 August - Subiectul III, Exercitiul 2
- `Solutie`:
    ```json
        f(12345)
        = se afiseaza *12345 (deoarece x > 0) si se calculeaza f(123) [Sa nu uitam ca ne-a ramas o steluta de afisat imediat ce calculam f(123)]
            = se afiseaza *123 (deoarece x > 0) si se calculeaza f(1) [Sa nu uitam ca ne-a ramas o steluta de afisat imediat ce calculam f(1)]
                = se afiseaza *1 ( deoarece x > 0) si se calculeaza f(0) [Sa nu uitam ca ne-a ramas o steluta de afisat imediat ce calculam f(0)]
                    = se afiseaza * si ne oprim deoarece 0 > 0 este falsa
                = se afiseaza *
            = se afiseaza *
        = se afiseaza *
    Deci programul va afisa: *12345*123*1****
    ```


### 5. 
- `Enunt`:
Se consideră subprogramul f, definit alăturat. Scrieţi ce se afişează în urma apelului de mai jos. 
`f(9)`

```c++
    void f(int x) 
    { cout<<x; | printf(”%d”,x); 
        if(x>0) 
        { if(x%2==0) 
            cout<<'*'; | printf(”*”); 
            f(x/2); 
        } 
    }

```
- `Sursa`: BAC 2012 Iunie - Subiectul III, Exercitiul 2
- `Solutie`:
    ```json
    f(9)=
    = se afiseaza `9` si deoarece `9` nu este par doar se va calcula `f(4)`
    = se afiseaza `4` si deoarece `4` este par se va afisa `*` urmat de un apel la `f(2)`
    = se afiseaza `2` si deoarece `2` este par se va afisa `*` urmat de un apel la `f(1)`
    = se afiseaza `1` si deoarece `1` este impar, doar se va calcul `f(0)`
    = se afiseaza `0` si se va opri functia recursiva.
    = rezulta ca in final, `f(9)` va afisa `94*2*10`
    ```

### 6. 
- `Enunt`: 
Se consideră subprogramul `f`, definit alăturat. Scrieţi valorile `f(3,4)` şi `f(2,20)`.
```c++
    int f(int x,int y) 
    {   if(x*2>y) 
            return x; 
        return f(x*2,y); 
    }
```
- `Sursa`: BAC 2012 August - Subiectul III, Exercitiul 2
- `Solutie`:
    ```json
        f(3,4)= Deoarece 3*2 > 4 functia va intoarce 3 si se va opri
        f(2, 20)=
            = Deoarece 2*2 < 20 functia va intoarce f(4, 20)
            = Deoarece 4*2 < 20 functia va intoarce f(8, 20)
            = Deoarece 8*2 < 20 functia va intoarce f(16, 20)
            = Deoarece 16*2 > 20 functia va intoarce 16 si se va opri
    ```

### 7.
- `Enunt`:
Se consideră subprogramele `f1` şi `f2`, definite mai jos. 
```c++
    int f1 (int x, int y)
    { 
        return x*y; 
    } 

    int f2 (int x, int y)
    { if (y==1) return x; 
    else return x*f2(x, y-1); 
    } 
```
La apel, pentru parametrii `x`=`2` şi `y`=`3`, returnează `x` la puterea `y`:
- `Sursa`: BAC 2013 Iunie - Subiectul III, Exercitiul 1.
- `Variante`:
    * a. atât f1, cât şi f2
    * b. numai f1
    * c. numai f2 [`Corect`]
    * d. nici f1, nici f2
- `Solutie`:
    ```json
        f2(2,3) =
            = deoarece 3 != 1 se va intoarce 2 * f2(2, 2)
                = deoarece 2 != 1 se va intoarce 2 * f2(2, 1)
                    = deoarece 1 == 1 se va intoarce 2 si revenim pentru calculul final
                = Acum la intoarcere avem 2 * 2 = 4
            = 2 * 4
        = 8
    ```

### 8.
- Enunt: 
Se consideră subprogramul f, definit alăturat. Indicaţi ce se afişează în urma apelului de mai jos. 
`f(3)`;

```c++
    void f (int n)
    { if (n!=0) 
      { f (n-1); 
        cout<<n; | printf(”%d”,n); 
      } 
    } 
```
- `Sursa`: BAC 2013 August - Subiectul III, Exercitiul 1.
- `Variante`:
    * a. 12 
    * b. 123 
    * c. 321 
    * d. 3210

- `Solutie`:
    ```json
        f(3)=
            = Deoarece 3!= 0 se va calcula f(2) [Sa nu uitam ca la introarcere avem de afisat n adica 3, in pasul curent]
                = Deoarece 2!=0 se va calcula f(1) [Sa nu uitam ca la introarcere avem de afisat n adica 2, in pasul curent]
                    = Deoarece 1!=0 se va calcula f(0) [Sa nu uitam ca la introarcere avem de afisat n adica 1, in pasul curent]
                        = Deoarece 0 == 0 Ne oprim si ne intoarcem sa afisam
                    = Afisam 1
                = Afisam 2
            = Afisam 3
        = Deci programul va afisa 123
    ```

### 9. 
- `Enunt`:
Se consideră subprogramul f, definit alăturat. Scrieţi valorile `f(5,5)` şi `f(10,21)`.
```c++
    int f(int a, int b)
    {   if (a==b) return 0;
        if (b/a==0) return a+b;
        return f(a+2,b-3);
    }
```
- `Sursa`: BAC 2014 Editia Speciala -  Subiectul III, Exercitiul 2
- `Solutie`:
    ```json
        f(5,5)  = Deoarece 5 == 5 functia va intoarce direct 0 si se va opri
        
        f(10, 21)   =
            = Deoarece 10 != 21 si 21 / 10 != 0 se va intoarce f(12, 18)
                = Deoarece 12 != 18 si 18 / 12 != 0 se va intoarce f(14, 15)
                    = Deoarece 14 != 15 si 15/14 != 0 se va intoarce f(16, 12)
                        = Deoarece 16 != 12 insa 12/16 == 0, se va intoarce 28 si se va opri.
        
        Deci f(5,5) => 0 si f(10, 21) => 28
    ```


### 10.
- `Enunt`:
Se consideră subprogramul `f`, definit 
alăturat. Indicați ce valoare are `f(15)`. 

```c++
    int f(int n)
    {   if (n<10) return f(n+1)+3;
        else if (n==10) return 7;
            else return f(n-2)-1;
    }
```
- `Sursa`: BAC 2014 Iunie - Subiectul III, Exercitiul 1
- `Variante`:
    * a. 1 
    * b. 7 [Corect]
    * c. 8 
    * d. 10
- `Solutie`:
    ```json
        f(15)   =
        = Deoarece 15 > 10 se va intoarce f(13) [Si dupa ce avem rezultatul, avem de scazut un -1]
            = Deoarece 13 > 10 se va intoarce f(11) [Si dupa ce avem rezultatul, avem de scazut un -1]
                = Deoarece 11 > 0 se va intoarce f(9) [Si dupa ce avem rezultatul, avem de scazut un -1]
                    = Deoarece 9 < 10 se va intoarce f(10) [Si dupa ce avem rezultatul avem de adunat 3]
                        = Deoarece 10 == 10, am atins conditia de oprire si se va return 7 
                    = Se va intoarce 7 + 3 = 10
                = Se va intoarce 10-1 = 9
            = Se va intoarce 9-1= 8
        = Se va intoarce 8 - 1 = 7 si ne vom opri

    Deci f(15) => 7
    ```

## Exercitii de antrenament

1. Se consideră subprogramul f, definit alăturat. Scrieți două valori naturale distincte din intervalul [1,50] pe care le poate avea variabila întreagă x, astfel încât f(30,x) să aibă valoarea 5. 
    ```c++
        int f(int a,int b)
        {   if (b==0) return a;
            else return f(b,a%b);
        }
    ```
    - Sursa: BAC 2014 August - Subiectul III, exercitiul 2

2. Subprogramul F este definit alăturat. Scrieţi ce se afişează în urma apelului de mai jos. F(’d’);
    ```c++
        void F(char c) 
        { if(c>=’a’) 
            {   cout<<c; | printf("%c",c); 
                F(c-1); 
            } 
        }
    ```
    - Sursa BAC 2015 Iunie - Subiectul III, exercitiul 2

3. Subprogramul F este definit alăturat. Scrieţi instrucţiunea prin care se poate apela subprogramul pentru a afişa, în ordine strict descrescătoare, toţi divizorii pozitivi proprii ai numărului 2015 (divizori naturali diferiți de 1 și de 2015)
    ```c++
        void F (int n, int d) 
        {   if(d<n/2) F(n, d+1); 
            if(n%d==0) 
                cout<<d<<’ ’; | printf(”%d ”,d); 
        } 
    ```
    - Sursa BAC 2015 August - Subiectul III, exercitiul 2

4. Subprogramul F este definit alăturat. Scrieţi ce se afişează în urma apelului de mai jos. F(154678,3); 
    ```c++
        void F (long a, int b) 
        { if(a*b!=0) 
            if(a%2==0) 
            {   cout<<a%10; | printf(”%d”,a%10);
                F(a/10,b-1); 
            } 
            else 
            {   F(a/10,b+1); 
                cout<<a%10; | printf(”%d”,a%10);
            }
        }
    ```
    - Sursa BAC 2015 Speciala - Subiectul III, exercitiul 2

5. Subprogramul F este definit alăturat. Scrieţi ce valori au `F(105,105)` respectiv `F(105,42)`.
    ```c++
        int F(int x, int y)
        {   if(x==y) return 1; 
            else 
            {   if(x<y) 
                    {   x=x+y; 
                        y=x-y; 
                        x=x-y; 
                    } 
                return 1+F(x-y,y); 
            } 
        }

    ```
    - Sursa: BAC 2015 Simulare - Subiectul III, exercitiul 2.