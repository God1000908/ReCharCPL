//
// Created by zy337 on 2023/11/24.
//
#include <stdio.h>
#define PI 3.14
int main()
{
    int radius = 100;
    //type: int. value: 100. address: &radius
    printf("radius = %d\n", radius);
    printf("%p\n", &radius);
    radius = 200;
    //use the address when be used as left value.
    //get the value of the address when be used as right value.
    int *ptr_radius = &radius;
    printf("&ptr_radius = %p\n", &ptr_radius);
    int radius2 = 1000;
    int *ptr_radius2 = &radius2;
    ptr_radius = ptr_radius2;
    //the address has changed.
    *ptr_radius = *ptr_radius2;
    //used like radius = radius2.
    double circumference = 2.0 * PI * (*ptr_radius);
    *ptr_radius2 = 2000;
    printf("%d\n", radius2);
    printf("%lf", circumference);
    int v = 100;
    int *ptr_v = &v;
    //pv = &pv da mei dei si!!!
    return 0;
}