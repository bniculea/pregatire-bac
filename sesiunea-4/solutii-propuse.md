# Solutii propuse pentru exercitiile de antrenament din sesiunea 4

## Exercitii cu structuri extrase din variante de bacalaureat

1.  Se  consideră  declararea  alăturată,  în  care  variabila FIG  memorează  coordonatele,  în  planul  xOy,  ale centrului unui cerc, precum şi lungimea razei acestuia. O expresie C/C++ care are valoarea 1 dacă şi numai dacă  centrul  cercului  se  află  pe  prima  bisectoare  a sistemului de coordonate al planului xOy este:

```c++
    struct cerc { 
    float x, y; 
    float raza; 
    } FIG;
```
- Sursa: BAC 2010 Iunie, Subiectul II, exercitiul 1.
- Solutie:
    ```json
        * Aici putem sa ne dam seama de solutie fara sa stim formula bisectoarei
            * În sistemul de coordonate al planului xOy, prima bisectoare este linia dreaptă care trece prin originea (0, 0) și formează un unghi de 45 de grade cu axa pozitivă a axei x (Ox). Această bisectoare este de obicei notată ca y = x, deoarece fiecare punct de pe această linie are aceeași valoare pentru coordonatele x și y. Cu alte cuvinte, punctele de pe prima bisectoare au coordonatele (a, a), unde "a" este o valoare reală.
        * Primele 3 variante sunt incorecte din punct de vedere al sintaxei.
    ```
- Variante de raspuns:
    * a.  centru(x)==centru(y)
    * b.  FIG.cerc.x==FIG.cerc.y
    * c.  FIG(x)==FIG(y)  
    * d.  FIG.x==FIG.y [`CORECT`]

2. Variabilele  e1  şi  e2,  declarate  alăturat,  memorează numele şi data naşterii pentru câte un elev. Ştiind că cei doi  elevi  sunt  născuti  în  ani  diferiti,  scrieti  secventa  de instructiuni  care    afişează  pe  ecran  numele  elevului  de vârstă mai mare

```c++
    struct data_n { 
    int an, luna, zi; 
    }; 
    struct elev{ 
    char nume[20]; 
    data_n d; 
    } e1, e2;
```
- `Sursa`: BAC 2010 August, Subiectul II - exercitiul 4.
- `Solutie`:
    ```c++
        if (e1.d.an > e2.d.an) {
            cout << e1.nume;
        } else {
             cout << e2.nume
        }   
    ```

3. Structura cu numele `CARTE` permite memorarea unui număr real, reprezentând valoarea exprimată în euro a unei cărti, a unui număr întreg, reprezentând numărul de pagini ale cărtii,  şi  a  unui  şir  de  caractere  reprezentând  titlul  cărtii,  format  din  cel  mult  50  de caractere.  
Scrieti  în  limbajul  C/C++  o  definiTie  a  structurii  mentionate  şi  declarati  o  variabilă  `x`  de acest tip. Denumiti sugestiv câmpurile acestei structuri.

- `Sursa`: BAC 2011 August, Subiectul II - Exercitiul 3.

- `Solutie`:
    ```c++
        struct CARTE {
            float pretInEuro;
            int nrPagini;
            char titlu[50];
        }

        struct Carte x;
    ```

4. Se  consideră  declararea  alăturată,  în  care  variabilele  t1  şi  t2 memorează lungimile laturilor a două triunghiuri. Scrieţi o expresie C/C++ care are valoarea 1 dacă şi numai dacă 
triunghiul  corespunzător  variabilei  t1  are  perimetrul  strict  mai mare  decât  perimetrul  triunghiului  corespunzător  variabilei  t2.

```c++
    struct triunghi { 
            int a,b,c; 
        } t1, t2; 
```

- `Sursa`: BAC 2012 August, Subiectul II - Exercitiul 3
- `Solutie`:
    ```c++
        (t1.a + t1.b + t1.c) > (t2.a + t2.b + t2.c)
    ```

5. Se consideră declararea alăturată. Scrieţi o secvenţă de instrucţiuni  în  urma  executării  căreia  câmpul  paritate al variabilei x să memoreze litera p, dacă numărul memorat  în  câmpul  v  al  acesteia  este  par,  sau  litera  i dacă  numărul  memorat  în  câmpul  v  al  acesteia  este 
impar.

```c++
    struct numar 
       {  int v; 
          char paritate; 
       } x; 
```

- `Sursa`: BAC 2013 Iunie, Subiectul II - Exercitiul 3
- `Solutie:` 
    ```c++
        if (x.v % 2 == 0) {
            x.paritate = 'p';
        } else {
            x.paritate = 'i';
        }
    ```

6. In declarările alăturate: 
• variabila  `p`  memorează  coordonatele  unui  punct  în 
sistemul de coordonate xOy; 
• variabila d memorează în câmpurile A  şi B 
coordonatele,  în  acelaşi  sistem  de  coordonate,  ale 
vârfurilor din stânga – sus, respectiv din dreapta – jos 
ale unui dreptunghi cu laturile paralele cu axele sistemului de coordonate. 
Scrieţi  o  expresie  C/C++  care  să  aibă  valoarea 1  dacă  punctul  corespunzător  variabilei  `p` se  află  în  interiorul  dreptunghiului  corespunzător  variabilei  `d`  (dar  nu  pe  laturile  acestuia) 
sau valoarea 0 în caz contrar.

```c++
    struct punct { 
            int x,y; 
        } p; 
    
    struct dreptunghi { 
            punct A, B; 
        } d;
```

- `Sursa`: BAC 2013 August, Subiectul II - Exercitiul 4
- `Solutie`
    ```c++
        (p.x > d.A.x && p.y< d.A.y) && (p.x < d.B.x && p.y > d.B.y)
    ```

7. Se consideră declararea alăturată. Scrieţi o secvenţă de instrucţiuni  în  urma  executării  căreia  să  se  afișeze  pe ecran mesajul `acceptat`, dacă momentul de timp corespunzător  variabilei  `start`  precede  momentul  de 
timp  din  aceeași  oră,  corespunzător  variabilei  `stop`, sau mesajul `respins` în caz contrar.

```c++
    struct timp 
       {  int minut; 
          int secunda; 
       } start,stop;
```

- `Sursa`: BAC 2014 Iunie, Subiectul II - Exercitiul 3

- `Solutie`: 
    ```c++
        if (start.minut < stop.minut) {
            cout << "acceptat";
        } else if (start.minut == stop.minut && start.secunda < stop.secunda) {
            cout << "acceptat";
        } else {
            cout << "respins"
        }
    ```

8. Variabila c, declarată alăturat, memorează titlul şi preţul unei cărţi.  Expresia  C/C++  a  cărei  valoare  reprezintă  preţul  cărţii 
respective majorat cu 50% este:

```c++
    struct  carte 
    {  char titlu[21]; 
        float pret; 
    }c; 
```

- `Sursa`: BAC 2015 Iunie, Subiectul II - Exercitiul  1

- `Solutie`: 
    ```json
        * Din nou, daca ne luam dupa sintaxa, observam din prima cum varianta b,c, si d pica din start.
    ```
- `Variante`:
    * a c.pret*3/2 [`CORECT`]
    * b. pret.c*3/2 
    * c. c(pret)*3/2 
    * d. pret[c]*3/2

9. Variabila  z,  declarată  alăturat,  memorează  partea  reală  şi partea  imaginară  a  unui  număr  complex.  Expresia  care  are valoarea  egală  cu  pătratul  modulului  acestui  număr  (suma dintre  pătratul  părții  reale  și  pătratul  părții  imaginare)  este:

```c++
    struct complex 
    {  float re; 
        float im; 
    }z;
```

- `Sursa`: BAC 2015 August:

- `Solutie`: 
    ```json
        * Si aici putem elimina din start variantele eronate din punct de vedere al sintaxei, anume a,b, si c. Ne ramane astfel doar d
    ```

- `Variante`:
    * a. complex(re)*complex(re)+complex(im)*complex(im) 
    * b. complex.z(re)*complex.z(re)+complex.z(im)*complex.z(im) 
    * c. re.z*re.z+im.z*im.z 
    * d. z.re*z.re+z.im*z.im [`CORECT`]

10. În  declarările  alăturate,  variabilele  A  și  B  memorează coordonatele  câte  unui  punct  în  sistemul  de  coordonate xOy. Indicați expresia care are valoarea 1 dacă şi numai dacă cele două puncte coincid.

    ```c++
        struct punct 
        {  int x,y; 
        }A,B; 
    ```

- Sursa: BAC 2015 Speciala, Subiectul II - Exercitiul 1.

- Solutie: 
    ```c++
        * Din nou, sintaxa da de gol raspunsul corect. Anume A
        * Sa nu uitam ca accesul proprietatilor (membrilor) unei structuri se face urmand urmatorul sablon <nume_variabila>.<nume_membru>(etc.)
    ```

- Variante: 
    * a. `A [ x ] == B[x] && A[y]==B[y] ` [`CORECT`]
    * b. `A.x == B.x && A.y==B.y `
    * c. `x[A]==x[B] && y[A]==y[B] `
    * d. `x.A==x.B && y.A==y.B `
