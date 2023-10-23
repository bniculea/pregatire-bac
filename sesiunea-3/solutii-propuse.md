# Solutii propuse pentru exercitiile de antrenament de la Sesiunea #

1. Se consideră subprogramul f, definit alăturat. Scrieți două valori naturale distincte din intervalul [1,50] pe care le poate avea variabila întreagă x, astfel încât f(30,x) să aibă valoarea 5. 
    ```c++
        int f(int a,int b)
        {   if (b==0) return a;
            else return f(b,a%b);
        }
    ```
    - Sursa: BAC 2014 August - Subiectul III, exercitiul 2
    - Solutie:
        ```c++
            - Putem observa ca functia de mai sus intoarce cel mai mare divizor comun a doua numere.
            - Astfel, pentru X putem alege valorile: 25, si 35
        ```

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
    - Solutie:
        ```c++
            F('d') =
                    = afisam 'd' si calculam F('c') =
                        = afisam 'c' si calculam F('b') = 
                            = afisam 'b' si calculam F('a')
                                = Afisam 'a' si calculam F('`')
                                    = Ne oprim.

                    = Rezultatul este: "dcba" 
        ```

3. Subprogramul F este definit alăturat. Scrieţi instrucţiunea prin care se poate apela subprogramul pentru a afişa, în ordine strict descrescătoare, toţi divizorii pozitivi proprii ai numărului 2015 (divizori naturali diferiți de 1 și de 2015)
    ```c++
        void F (int n, int d) 
        {   if(d<n/2) F(n, d+1); 
            if(n%d==0) 
                cout<<d<<’ ’; | printf(”%d ”,d); 
        } 
    ```
    - Sursa BAC 2015 August - Subiectul III, exercitiul 2
    - Solutie:
    ```c++
            - Incercam sa observam cum functioneaza functia si ii dam niste valori mai micute,
    pentru a digera mai usor logica din ea.
            - Pentru asta, daca o luam dupa ureche, putem sa ne gandim pentru inceput ca `n` va fi numarul pentru care vrem sa ii afisam divizorii, iar d va fi un divizor al lui n. Asa ca hai sa calculam F(18, 1) si sa vedem ce afiseaza
            - Nota: am ales 18 deoarece are mai multi divizori si nici nu este un numar prea mare (1,3,6,9,18)


            F(18, 1) =
                = Calculam F(18, 2) [La intoarcere, trebuie sa evaluam urmatorul if unde d = 1]
                    = Calculam F(18, 3) [La intoarecere trebuie sa evaluam urmatorul if unde d = 2]
                        = Calculam F(18, 4) [La intoarcere trebuie sa evaluam urmatorul if unde d = 3]
                            = Calculam F(18, 5) [La intoarcere trebuie sa evaluam urmatorul if unde d = 4]
                                = Calculam F(18, 6) [La intoarcere trebuie sa evaluam urmatorul if unde d = 5]
                                    = Calculam F(18, 7) [La intoarcere trebuie sa evaluam urmatorul if unde d = 6]
                                        = Calculam F(18, 8) [La intoarcere trebuie sa evaluam urmatorul if unde d = 7]
                                            = Calculam F(18, 9) [La intoarcere trebuie sa evaluam urmatorul if  unde d = 8]
                                                = deoarece 9 == 18/2  nu mai facem apelul recursiv si evaluam urmatorul if + ne vom intoarcere
                                                = Deoarece 18 % 9 == 0, afisam 9
                                            = 18 % 8 != 0, NU afisam
                                        = 18 % 7 != 0, NU afisam
                                    = 18 % 6 == 0, afisam 6
                                = 18 % 5 != 0, NU afisam
                            = 18 % 4 != 0,  NU afisam
                        = 18 % 3 == 0, afisam 3
                    = 18 % 2 == 0, afisam 2
                = 18 % 1 == 0, afisam 1

            Practic, functia F(18, 1) va afisa 9, 6, 3, 2, 1 si noi am dori sa nu se afiseze  1 si 18, si ne-a iesit doar pe jumatate. Insa, daca functia noastra fi fost chemata
            cu urmatoarele valori: F(18, 2), nu s-ar mai fi afisat si cifra 1.
            Prin tranzitivitate, pentru a indeplini cerinta, apelul F(2015, 2) satisfice conditia.

    ```

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
    - Solutie:
        ```c++
            F(154678,3) =
                = Afisam 8 si calculam F(15467,2)
                    = F(1546, 3) [Avem de afisat 7 la intoarcere] 
                        = Afisam  6 si calculam F(154, 4)
                            = Afisam  4 si calculam F (15, 5)
                                = Calculam F(1, 4) [Avem de afisat 5 la intoarcere]
                                    = calculam F(0, 3) [Avem de afisat 1 la intoarcere]
                                        = Functia s-a oprit  si incepem sa afisam ce aveam restant anume 157
            In Concluzie, apelul de mai sus intoarce: 864157
        ```
    - Raspuns: `864157`

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
    - Solutie:
        ```c++
        F(105, 105) = 1 deoarece 105 == 105

        F(105, 42) =
            = 1 + F(63, 42) = 
                = 1 + F(21, 42) = 
                    =  Deoarece x < y (21 < 42), acel if va interschimba valorile celor doi parametri adica x = 42 si y = 21 adica o sa intoarcem 1 + F(21, 21) = 
                        = Deoarece 21 == 21, ne oprim, intoarcem 1 si calculam recursiv rezultatul:
                    = 1 + 1 = 2
                = 1 + 2 = 3
            = 1 + 3 = 4
        ```