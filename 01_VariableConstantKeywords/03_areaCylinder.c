#include <stdio.h>

int main() {
    float r,h;

    printf("enter the radius : ");
    scanf("%f",&r);
    printf("enter the height : ");
    scanf("%f",&h);

    float area = 3.14 * r * r * h;

    printf("area of cylinder is %f",area);
    
    return 0;
}

// printf("area of cylinder is %d",3.14 * r * r * h);
//aise bhi kar sakte the ,bina naye variable area ko introduce kare

//const pi = 3.14
//area = pi * r * r * h bhi kar sakte hai