#include <iostream>
#include <cmath>

int main ()
{
   static const int N = 10 ;
   double arr[N] = { 2.2, 0.5, 1.2, 3.6, 1.1, 2.8, 3.6, 5.0, 6.8, 10.2};

   for(int j = N ; j > 0 ; j-- ) //dopo ogni iterata abbiamo un nuovo elemento ordinato (quello in posizione(j)),
                                 //cioè nella prima iterata è l'ultimo, nella seconda anche il penultimo sarà ordinato, ecc ecc
   {
       int count = 0 ;
       for(int i = 0 ; i < N-1 ; i++) // non posso prendere i=N -1, perchè i+1 (cioè i=N) è fuori dall'array
       {
          double el = 0.0 ;

          if (arr[i] > arr[i+1])
          {
              el = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = el ;
              count ++;
           }

        }

      std::cout << "Il numero di scambi dopo l'iterata " << N-j << " è :" << count << "\n" <<std::endl;//conto i numeri di scambi per verifica

      if (count == 0)
           break;

   }

 std::cout << "L'array ordinato dopo il Bubblesort è : { " ;

 for(int i =0 ; i < N ; i++)
 {
         std::cout << arr[i] << "   "; //stampo l'array ordinato

 }

 std::cout <<" } \n "<< std::endl;
    return 0;
}



