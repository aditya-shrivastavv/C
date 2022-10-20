#include <stdio.h>

int main() {
    float r;

    printf("enter the radius : ");
    scanf("%f",&r);

    float area = 3.14 * r * r;

    printf("area of circle is %f",area);
    
    return 0;
}

// printf("area of circle is %d",3.14 * r * r);
//aise bhi kar sakte the ,bina naye variable area ko introduce kare

//const pi = 3.14
//area = pi * r * r bhi kar sakte hai