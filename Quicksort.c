#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}

void createArray(int *array, int length) {
    srand(time(0));
    
    for(int i = 0; i < length; i++)
    {
        int rng = rand();
        array[i] = rng%100;
    }
}

void showArrayInConsole(int *array, int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}



int teile (int *x, int links, int rechts){
    int i=rechts, j=rechts-1,privot=x[rechts];
    int temp;
    do{ 
        while(x[i]<privot && i<rechts-1) {
            i++;
        }
        while(x[j]>=privot && j>links){
            j--;
        }
        if (i<j){
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
    }while(i<j);
    if (x[i]>privot){
        x[rechts]=x[i];
        x[i]=privot;
    }
    
    return i;
}
void quicksort (int *x, int links, int rechts){
    int teiler = 0;
if (links < rechts){
    teiler = teile(x, links, rechts);
    quicksort(x, links, teiler);
    quicksort(x, teiler + 1, rechts);
    }
}
