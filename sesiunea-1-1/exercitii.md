# Exercitii subprograme

## Nota
Aceasta nu e o sesiune propriu-zisa, doar niste exercitii prin care putem sa fixam cateva chestii pe care le-am discutat data trecuta cat si unele noi (posibil necunoscute insa pe care le vom discuta cu siguranta data viitoare).

1. Scrieti o functie care primeste ca si parametru un numar real, reprezentand temperatura in grade Fahrenheit si care intoarce rezultatul conversiei acesteia in grade celsius.
- Date de intrare: `63.5` (grade Fahrenheit)
- Date de iesire: `17.5` (grade celsius)

2. Scrieti un subprogram care primeste un numar natural `n` ca si parametru. Programul va intoarce oglinditul numarului `n`.
- Date de intrare: `12345`
- Date de iesire: `54321`


3. Scrieti un subprogram care primeste un numar natural `n` ca si parametru. Subprogramul va intoarce `1` daca numarul este palindrom sau `0` in caz contrar
- Date de intrare: `34543`
- Date de iesire: `1`
- Date de intrare: `1212`
- Date de iesire: `0`

4. Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul parametrilor c1 şi c2 câte o cifră nenulă. Subprogramul caută prima apariţie (de la stângab spre dreapta) a cifrei c1 în n, şi dacă aceasta apare, o înlocuieşte cu c2, iar următoarele
cifre, dacă există, sunt înlocuite cu câte o cifră 0. Subprogramul furnizează tot prin n numărul astfel obţinut. Dacă cifra c1 nu apare în n, atunci valoarea lui n rămâne
nemodificată. 
- Date de intrare: `n` = `162448`, `c1` = `4` şi `c2` = `7`
- Date de iesire: `162700`

5. Funcţia `f` primeşte prin intermediul parametrului `n` un număr natural nenul (`2≤n≤200`), iar prin intermediul parametrului `a` un tablou unidimensional care conţine `n` valori întregi nenule (fiecare dintre aceste valori întregi având cel mult patru cifre).
Funcţia returnează valoarea `-1` dacă numărul de valori negative din tabloul `a` este strict mai mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul de valori pozitive din tabloul `a` este strict mai mare decât numărul de valori negative din a.
Scrieţi definiţia completă a funcţiei `f`.
- Date de intrare: `n` = `8`, `a` = `{1, -1, 2, -3,-4,-5,-33,2}`
- Date de iesire: `-1`
- Date de intrare: `n` = `8`, `a` = `{1, 1, 2, 3,-4,-5,-33,2}`
- Date de iesire: `1`
- Date de intrare: `n` = `8`, `a` = `{1, 1, 2, -3,-4,-5,-33,2}`
- Date de iesire: `0`