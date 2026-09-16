#include <stdio.h>
int main() {
    float voltage, current, resistance;
    printf("Введіть напругу (U) в вольтах:");
    scanf("%f", &voltage);
    printf("Введіть струм (I) в амперах:");
    scanf("%f", &current);
    if (current != 0 ){
        resistance = voltage / current;
        printf("Опір (R) в омах = %.2f\n", resistance);
        }
        else {
            printf("Струм не може бути нульовим. Неможливо обчислити опір.\n");
        } 
    
    return 0;
}