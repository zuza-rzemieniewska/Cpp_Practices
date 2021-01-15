#include <iostream>
#include <iomanip>
using namespace std;

double factorial(int);
double binomialTheorem(int, int);

int main() {

    double p;

    for(int n=0; n<=10; n++){                           // program będzie wykonywał pętle od n = 0, po każdym przebiegu będzie dodawał do n 1 i zakończy się po wykonaniu pętli dla n = 10

        cout << setw(22-(2*n));                         // każdy kolejny wiersz będzie zaczynał się coraz bliżej lewej kawędzi

        for(int k=0; k<=n; k++){                        // pętla for będzie wykonywana od k =0 dopóki k jest mniejsze lub równe n

           p = binomialTheorem(n, k);                   // wynik funkcji przypisujemy do zmiennej, żeby później ustalić warunki do jej odpowiedniego wyświetlenia

           if(p>99){                                    // warunek służy do ustalenia ilości cyfr w liczbie będącej wynikiem funkcji, żeby zachować odpowiednie odległości, wiadomo że największa liczba będzie trzycyfrowa
               cout << p << " ";                        // po liczbach trzycyfrowych wystawiamy jedną 'spacje'
           }
           else if(p>9){
               cout << p << "  ";                      // po liczbach dwucyfrowych wystawiamy dwie 'spacje'
           }
           else{
               cout << p << "   ";                     // po cyfrach wystawiamy trzy 'spacje'
           }           
        }

        cout << endl;
    }

    return 0;    
}

double factorial(int i){                                // funkcja obliczająca i zwracająca wynik silni
    if (i==0 || i==1)                                   // dla 0 i 1 silnia zawsze jest równa 1
        return 1;

    return i*factorial(i-1);                           // dla innych wartości wykonuje mnożenie i oraz silni z wartości o jeden mniejszej
}

double binomialTheorem(int n, int k){

    return factorial(n)/(factorial(k)*factorial(n-k));  // funkcja zwraca wynik dwumianu Newtona dla podanej liczby n i k 
}

/* Bardzo dobrze wykonane zadanie :) Plusy za zastosowanie w kodzie funkcji, komenatrzy opisujących poszczególne kroki
oraz spełnienie wszystkich wymagań przedstawionych w zadaniu. Nie mam żadnych uwag. */