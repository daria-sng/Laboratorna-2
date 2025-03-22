#include <stdio.h>
#include <stdlib.h>
#define N 15

int main(){
    system("chcp 65001");
    int array [N]= {-8, 6, -4, -2, -1 , -9, -7, -1, 2, -5, -4, -5, -7, -3, -8};
    int i;

    int first = -1;
    int i_2 = 0;

    for(i = 0; i < N; i+=1){
        if(array[i] < 0 ){
            if (first == -1){
                first = i;
            }
            i_2 += 1;
              if(i_2 > 5){
            printf("Початковий індекс безперервних послідовностей від'ємних чисел: %d\n", first);
        }
        }
        else {
            i_2 = 0;
            first = -1;
        }
    }

    return 0;
}