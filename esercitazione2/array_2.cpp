#include <iostream>
#include <algorithm>
#include <cmath>

int main(){

    static const int N = 10;
    double arr[N] = { 2.2, 0.5, 1.2, 3.6, 1.1, 2.8, 3.6, 5.0, 6.8, 10.2};
    double min = arr[0];
    double max = arr[0];
    double varianza= 0.0;
    double media = 0.0 ;
    double deviazione_standard = 0.0;

    for (unsigned i=0 ; i < N; i++){

        min= std::min (min,arr[i]);
        max= std::max (max,arr[i]);
        media += arr[i] /N;


    }

   std::cout << "il minimo è : " << min <<std::endl ;
   std::cout << "il max è : " << max <<std::endl ;
   std::cout << "la media è :" << media <<std::endl ;
   // deviazione standard = sqrt((sommatoria(differenza quadratica media)^2)/N)

   for (unsigned i=0 ; i < N; i++){


       varianza += (std::pow((arr[i]-media),2))/N ; //uso la funzione pow della libreria cmath per elevare alla seconda (x-x_media)
       deviazione_standard = std::sqrt(varianza);
   }

   std::cout << "la deviazione standard è : " << deviazione_standard<<std::endl ;
   std::cout << "la varianza è : " << varianza<<std::endl ;
}
