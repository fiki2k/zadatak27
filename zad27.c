// Program treba naci sumu svih elemenata u 1D polju.

#include<stdio.h>

int main()
{
   
    int polje[100], velicina, i, suma = 0;
    
    // Unesi velicinu polja
    printf("Unesi velicinu polja\n");
    scanf("%d",&velicina);
    
    // Korisnik unosi elemente polja
    printf("Unesi elemente polja\n");
    for(i = 0; i < velicina; i++)
          scanf("%d",&polje[i]);
          
    // Zbroji sve elemente u polju
    for(i = 0; i < velicina; i++)
          suma = suma + polje[i]; // isto kao suma += polje[i];
    
    // Ispis rezultata.
    printf("Suma svih elementat u polju je = %d\n",suma);
    
    return 0;
}
