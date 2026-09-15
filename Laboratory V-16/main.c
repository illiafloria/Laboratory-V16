#include <stdio.h>
int main() {
    double voltage, current, resistance;
    printf("Введіть напругу (U) в вольтах:");
    scanf("%lf", &voltage);
    printf("Введіть струм (I) в амперах:");
    scanf("%lf", &current);
    if (current != 0 ){
        resistance = voltage / current;
        printf("Опір (R) в омах = %.2lf\n", resistance);
        }
        else {
            printf("Струм не може бути нульовим. Неможливо обчислити опір.\n");
        } 
    
    return 0;
}