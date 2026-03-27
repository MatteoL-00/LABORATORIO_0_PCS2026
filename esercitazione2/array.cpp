# include <iostream>

 int main()
 {
 double ad[4] = {0.0, 1.1, 2.2, 3.3};
 float af[8] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
 int ai[3] = {0, 1, 2};

 int x = 1;
 float y = 1.1;

 (&y)[1] = 0;

 std::cout << "il valore di x è : " << x << "\n";
 std::cout << "il valore di x è zero perchè (&y)[1] dice di spostarci all'indirizzo successivo, e spostandoci di 4 byte "
              "(cioè lo spazio occupato in memoria da un float) ci ritroviamo nello spazio allocato per la variabile x,"
              "in quanto è stata dichiarata subito prima di y . " << "\n";

 std::cout << "l'indirizzo di x è : " <<  &x << "\n";
 std::cout << "l'indirizzo di y è : " << &y << "\n";

 return 0;
 }
