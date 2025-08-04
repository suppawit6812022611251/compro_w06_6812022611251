#include <stdio.h>

int main() {
    int a = 5, b = 2;   //กำหนดค่า a=5 b=2
    float x = 3.0, y = 4.5; //กำหนดค่า x=3.0 y=4.5

    int r1 = a++ * b + (int)y % 3;  //
    int r2 = (a > b) && ((int)x / b < 2);
    float r3 = ++x * y - a / 2;
    float r4 = ((x += 1.5) > y) || (b-- > 0);

    printf("ผลลัพธ์ r1 = %d\n", r1);
    printf("ผลลัพธ์ r2 = %d\n", r2);
    printf("ผลลัพธ์ r3 = %.2f\n", r3); 
    printf("ผลลัพธ์ r4 = %.2f\n", r4);  

    return 0;
}