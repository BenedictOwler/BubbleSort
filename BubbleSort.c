#include <stdio.h>

void bubblesort (int *, int);
void erzeugeArray (int *, int);
void zeigeArrayInConsole (int *, int);
void dreiEcksTausch (int *, int);
void Sortieren (int *, int);


int
main ()
{
  int anz = 10;
  int z[anz];

  erzeugeArray (z, anz);
  printf ("\nArray mit %d zufaellige Zahlen\n", anz);
  zeigeArrayInConsole (z, anz);
  bubblesort (z, anz);
  printf ("Array mit %d zufaellige Zahlen sortiert:\n", anz);

}

zeigeArrayInConsole (int *z, int anz)
{

  srand (5);
  for (int i = 0; i < anz; i++)
    {

      z[i] = rand () % 100;

    }

//array = [1,2,3,4,5]

  return 0;
}

void
erzeugeArray (int *array, int anz)
{

  for (int i = 0; i < anz; i++)
    printf ("%d", array[i]);

  return 0;
}


void
dreiEcksTausch (int *array, int anz)
{

  return 0;
}

void
Sortieren (int *array, int anz)
{

  return 0;

}

void
bubblesort (int *array, int anz)
{

  return 0;

}
