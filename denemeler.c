#include <stdio.h>

#define N 5

int my_array[N] = {0};

int main(){

for (int i = 0; i < N; i++){
    printf("enter %d. number: ", i+1);
    scanf("%d", &my_array[i]);    
}
for (int i = 0; i < N; i++){
    printf("\n%d. number of array: %d", i+1, my_array[i]);
}
printf("\n");
return 0;
}