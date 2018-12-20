#include <stdio.h>

void fillarray (int *, int);
void arrayMinSort (int *, int);
void Dreieckstausch (int *, int);
void zeigeArrayInConsole (int *, int);
void erzeugeArray (int *, int);

int main()
{


int anz = 11;
int array[anz];

erzeugeArray (array, anz);
printf("Array mit zufälligen Zahlen \n", anz);

printf("Unsortiert %d\n");

printf("Sortiert %d\n");

    return 0;
}

void
erzeugeArray (int *array, int anz)
{
  srand (5);
  for (int i = 0; i < anz; i++)
    array[i] = rand()%100;
  return 0;
}

void dreiEcksTausch (int *array, int position)
{
    //printf("vorher: %d , %d  ",array[position], array[position+1]);
    int temp = array[position];
    array[position] = array[position+1];
    array[position+1] = temp;
    //printf("nacher: %d , %d\n",array[position], array[position+1]);
  return 0;
}
