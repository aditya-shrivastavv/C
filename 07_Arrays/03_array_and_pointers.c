// pointer arithmetics
#include <stdio.h>

int main() {
    int marks[4] = {68,98,50,83};
    int *ptr = &marks[0]; //Also { &marks[0] } = { marks }
    
    printf("%u\n",ptr); //6422284
    printf("%u\n\n",*ptr); //68     marks[0]

    ptr++;
    printf("%u\n",ptr); //6422288 @bove(+4)
    printf("%u\n\n",*ptr); //98     marks[1]

    ptr++;
    printf("%u\n",ptr); //6422292 @bove(+4)
    printf("%u\n\n",*ptr); //50     marks[2]
    
    ptr++;
    printf("%u\n",ptr); //6422296 @bove(+4)
    printf("%u\n",*ptr); //83       marks[3]
    
    return 0;
}

//since the intger takes four bytes space ,so the pointer points to the next four location. 