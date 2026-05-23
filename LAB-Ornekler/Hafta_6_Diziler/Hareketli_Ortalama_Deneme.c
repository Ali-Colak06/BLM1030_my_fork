#include <stdio.h>
#define N 10

double sensor_array[N] = {23.1, 24.8, 22.5, 25.2, 23.9, 24.5, 22.8, 25.0, 23.7, 24.2};
double filtered_sensors[N] = {0};

int main(){
    for (int i=0; i<N; i++){ // Sıfırdan eleman sayısına kadar dolaşan bir for döngüsü
        double F = 3;
        double sum = 0; // İşlemler yapılırken kullanılacak toplam değişkeni
        if (i < F/2 - 1){ // arkada işlem yapacak yeteri kadar sayı yoksa
            int F_i = 0;
            for (int j = 0; j < i + F/2; j++){ // Sıfırdan başlayıp mevcut sayı + filtre/2 kadar elemanı dolaşan for döngüsü
                F_i += 1;
                printf("\nsum: %.2f | sensor_array[%d]: %.2f", sum, j, sensor_array[j]);
                sum += sensor_array[j];
                printf("\nsum: %.2f", sum);
            }
        F = F_i;
        printf("\nlast sum: %.2f | last F: %f", sum, F);   
        }
        else if (i > N - F/2){ // İleride işlem yapacak yeteri kadar sayı yoksa 
            int F_i = 0;
            for (int j = i - F/2 + 1; j < N; j++){
                F_i += 1;
                printf("\nsum: %.2f | sensor_array[%d]: %.2f", sum, j, sensor_array[j]);
                sum += sensor_array[j];
                printf("\nsum: %.2f", sum);
            }
        F = F_i;
        printf("\nlast sum: %.2f | last F: %f", sum, F);
        }
        else{
            for (int j = -F/2; j < F/2; j++){
                sum += sensor_array[i+j];
            }
        }
        filtered_sensors[i] = sum / F;
    }
    for (int i = 0; i < N; i++){
        printf("\nunfiltered: %.2f | filtered: %.2f", sensor_array[i], filtered_sensors[i]);
    }
    return 0;
}