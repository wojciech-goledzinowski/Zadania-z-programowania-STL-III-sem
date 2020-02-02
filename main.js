const zadania = [
  `Z1.  Poszczególne litery w napisie: string S = "abrakadabra"; umieść przy pomocy metody push_back() w kontenerze klasy <vector>. Program ma także wypisać elementy kontenera. Następnie posortuj litery w napisie i wydrukuj uporządkowaną kolekcję.`,
  `Z2.  Poszczególne litery w napisie: string S = "abrakadabra"; umieść przy pomocy metody push() w kontenerze klasy <queue>. Program ma także wypisać elementy kontenera.`,
  `Z3.  Poszczególne litery w napisie: string S = ”abrakadabra”; umieść przy pomocy metody push() w kontenerze priority_queue<>. Program ma także wypisać elementy kontenera.`,
  `Z4.  Poszczególne litery w napisie: string S = ”abrakadabra”; umieść przy pomocy metody insert() w kontenerze  <set>. Program ma także wypisać elementy kontenera. Przy pomocy metody find() sprawdzić, czy w kontenerze jest litera ‘r’.`,
  `Z5.(Z1_1)  Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <vector>, a potem wypisuje je w kolejności rosnącej raz przy pomocy indeksów, a raz przy pomocy iteratorów.`,
  `Z6.(Z2_1)  Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <wector>, sortuje te liczby, wypisuje je przy pomocy indeksów, podaje ile liczb wprowadzono.`,
  `Z7. Napisz program, który zapisuje  liczby 3,6,9,12,15 w kontenerze <wector> przy pomocy metody push_back(). Wyświetla te liczby przy pomocy indeksu oraz funkcji at().  Program wyświetla pierwszy i ostatni element ( nie używać indeksu).`,
  `Z8. Należy utworzyć kontener typu <vector> który będzie przechowywał 10 elementów typu zmiennoprzecinkowego z precyzją 10. Każdy element ma mieć początkowo wartość 3.1415926535. Następnie pierwszy element podwajamy, a ostatni potrajamy. Wyświetlić zawartość kontenera.`,
  `Z9. Należy utworzyć kontener <vector> i umieścić w nim dziesięć liczb parzystych ( od 2). Utworzyć drugi kontener typu <vector> , który będzie kopią pierwszego kontenera. Wydrukować elementy drugiego kontenera.`,
  `Z10. Należy utworzyć kontener typu ,vector> i umieścić w nim dziesięć elementów o wartości 0.Przy pomocy iterarora i dereferencji wypełnić kontener kolejnymi setkami (wartości: 100, 200…). Następnie wykorzystując iteraror wyświetlić zawartość kontenera.`,
  `Z11. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Utworzyć dwa iterarory. Iterator pierwszy ustawić na 4 element a iterator drugi ustawić na 8 element kontenera (uwaga: indeksacja jest od 0!). Utworzyć drugi kontener <vector> i skopiować elementy pierwszego kontenera do drugiego w zakresie wskazanym przez ustawione iterarory.`,
  `Z12.(Z3_1) W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie element kontenera. Wyświetl  zawartość kontenera.`,
  `Z13. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.`,
  `Z14. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element wstaw liczbę 1313 do kontenera. Wyświetl ponownie elementy kontenera.`,
  `Z15. Do jednego kontenera można wstawiać element innego kontenera. Należy wykorzystać trzy iteratory. W pierwszym  kontenerze <vector>  umieścić 10 liczb (od 0 do 9). W drugim kontenerze umieść liczby setkami (od 100 do 900).  Przy pomocy pierwszego iteratora ustawiamy pozycje w pierwszym kontenerze, gdzie umieścimy fragment drugiego kontenera. Drugi iterator ustawiamy na początek zakresu drugiego kontenera , a trzeci iterator ustawiamy na koniec tego zakresu. Do kontenera pierwszego wstawiamy wskazane elementy kontenera drugiego. Wyświetlamy elementy  kontenera pierwszego i drugiego.`,
  `Z16. Do kontenera  <vector> wprowadź z klawiatury imiona (ilość nieograniczona). Wyświetl wprowadzone imiona.`,
  `A17.  Napisz program,  który wczytuje nieznaną liczbę liczb typu float  do kontenera <deque>, a potem wypisuje je w kolejności rosnącej raz przy pomocy indeksów, a raz przy pomocy iteratorów.`,
  `A18.  Napisz program, który wczytuje nieznaną liczbę liczb typu float do kontenera <deque>, sortuje 
    te liczby, wypisuje je przy pomocy indeksów, podaje ile liczb wprowadzono.`,
  `A19.  W kontenerze <deque>  umieścić 10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie elementy kontenera. Wyświetl  zawartość kontenera.`,
  `A20.  Do kontenera <deque> wprowadź z klawiatury nazwy miast(ilość nieograniczona). Wyświetl wprowadzone miasta.`,
  `B21.Napisz program,  który wczytuje nieznaną liczbę liczb typu int  do kontenera <list>, a potem wypisuje je w kolejności rosnącej.`,
  `B22   Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <list>, wypisuje je oraz podaje ile liczb wprowadzono.`,
  `B23 W kontenerze <list> umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie elementy kontenera. Wyświetl zawartość kontenera.`,
  `B24 PD Do kontenera <list> wprowadź z klawiatury imiona (ilość nieograniczona). Wyświetl wprowadzone imiona.`,
  `AA25 (Z1_2) W kontenerze <deque> umieścić 10 liczb (od 0 do 9). Utworzyć dwa iteratory. Iterator pierwszy ustawić na 4 element, a iterator drugi ustawić na 8 element kontenera (uwaga: indeksacja zaczyna się od 0!). Utworzyć drugi kontener <deque> i skopiowac elementy pierwszego kontenera do drugiego w zakresie wskazanym przez iteratora`,
  `AA26. (Z2_2) W kontenerze <deque>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.`,
  `AA27. W kontenerze <deque>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element wstaw liczbę 1313 do kontenera. Wyświetl ponownie elementy kontenera.`,
  `AA28. W kontenerze <deque>  należy umieścić 10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy iteratora ustawionego na 2 i 3 element usuń te elementy z kontenera. Wyświetl ponownie elementy kontenera.`,
  `BB29. W kontenerze <list>  umieścić 10 liczb (od 0 do 9). Utworzyć dwa iteratory. Iterator pierwszy ustawić na 4 element,  a iterator drugi ustawić na 8 element kontenera (uwaga: indeksacja zaczyna się od 0!). Utworzyć drugi kontener <list> i skopiować elementy pierwszego kontenera do drugiego w zakresie wskazanym przez ustawione iteratory.`,
  `BB30. W kontenerze <list>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 6 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.`,
  `BB31.  W kontenerze <list>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 3 element wstaw liczbę 1313 do kontenera. Wyświetl ponownie elementy kontenera.`,
  `BB32. W kontenerze <list>  umieścić  10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy iteratora ustawionego na 3 i 4 element usuń te elementy z kontenera. Wyświetl ponownie elementy kontenera.`,
  `AAA33. Do jednego kontenera można wstawiać elementy innego kontenera. Należy wykorzystać trzy iteratory. W pierwszym  kontenerze <vector>  umieścić 10 liczb (od 0 do 9). W drugim kontenerze umieść liczby setkami (od 100 do 900).  Przy pomocy pierwszego iteratora ustawiamy pozycje w pierwszym kontenerze, gdzie umieścimy fragment drugiego kontenera. Drugi iterator ustawiamy na początek zakresu drugiego kontenera , a trzeci iterator ustawiamy na koniec tego zakresu. Do kontenera pierwszego wstawiamy wskazane elementy kontenera drugiego. Wyświetlamy elementy  kontenera pierwszego i drugiego.`,
  `AAA34.W pierwszym kontenerze typu <list> umieść liczby 0,1,2,3,4, w drugim kontenerze typu <list> umieść liczby 2,3,4,5,6,7. Wyświetl  zawartość tych kontenerów.  W trzecim kontenerze typu <list> umieść elementy pierwszego i drugiego kontenera. Wyświetl  zawartość tego kontenera.`,
  `AAA35.W pierwszym kontenerze typu <list> umieść liczby 0,1,2,3,4, w drugim kontenerze typu <list> umieść liczby 2,3,4,5,6,7. Wyświetl  zawartość tych kontenerów.  W trzecim kontenerze typu <list> umieść elementy pierwszego i drugiego kontenera. Posortuj elementy i wyświetl  zawartość tego kontenera.`,
  `AAA36.W pierwszym kontenerze typu <list> umieść liczby 0,1,2,3,4, w drugim kontenerze typu <list> umieść liczby 2,3,4,5,6,7. Wyświetl  zawartość tych kontenerów.  W trzecim kontenerze typu <list> umieść elementy pierwszego i drugiego kontenera. Usuń powtarzające się elementy i wyświetl  zawartość tego kontenera.`,
  `BBB37.W kontenerze <vector> umieść elementy typu int (wartości od 1 do 9). Zaimplementuj funkcję print(int elem), która drukuje elementy. Wykorzystaj algorytm for_each() do wydrukowania zawartości kontenera.`,
  `BBB38. (Z1_3) W kontenerze <vector> umieść 20 elementów typu int (wartości od 1 do 7). Przy pomocy algorytmu count() policz ile było wystąpień wybranego elementu (np. 3).`,
  `BBB39. (Z2_3) W kontenerze <vector> umieść 20 elementów typu int (wartości od 1 do 7). Przy pomocy algorytmu find() znajdź czy w kolekcji jest wybrana wartość (np. 4 lub 22), a jeżeli jest to na jakiej pozycji.`,
  `BBB40.W kontenerze <vector> umieść elementy typu int (wartości od 1 do 9). Przy pomocy algorytmu transform() zaneguj wszystkie wartości, Wyświetl  te wartości.`
];

const div = document.querySelector("div");
const input = document.querySelector("input");
let zadaniaF;
let zadaniaX;

for (let i = 0; i < zadania.length; i++) {
  const a = document.createElement("a");
  const p = document.createElement("p");
  a.textContent = zadania[i];
  a.href = `cpp/z${i + 1}.cpp`;
  div.appendChild(a);
  div.appendChild(p);
}

const szukaj = e => {
  let szukanyTekst = e.target.value;
  console.log(szukanyTekst);
  zadaniaF = zadania.filter(z =>
    z.toLowerCase().includes(szukanyTekst.toLowerCase())
  );
  console.log(zadaniaF);
  div.textContent = "";
  for (let i = 0; i < zadaniaF.length; i++) {
    const a = document.createElement("a");
    const p = document.createElement("p");
    a.textContent = zadaniaF[i];
    a.href = `cpp/z${zadania.indexOf(zadaniaF[i]) + 1}.cpp`;
    div.appendChild(a);
    div.appendChild(p);
  }
};

input.addEventListener("input", szukaj);
