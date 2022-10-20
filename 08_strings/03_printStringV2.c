// %s is a format specifier for strings.
//   '' blank inverted commas in c indicate space.
#include <stdio.h>

int main() {

    char company[] = "Lenovo India";
    printf("%s\n",company);

    char * ptr = company;
    printf("%s\n",ptr);

/* the compiler automatically converts "char * brand = "Google Pixel" " into
char brand[] = {'G','o','o','g','l','e','','P','i','x','e','l','\0'} */

    char * brand = "Google Pixel";
    printf("%s\n",brand);

    char Pixel[] = {'G','o','o','g','l','e','','P','i','x','e','l','\0'};
    printf("%s",Pixel);

    return 0;
}