#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void bitwisec(char x){
int i;
for(i=7;i>=0;i--){
        printf("%d",(x >> i) & 1);

}
}
void bitwisenumber(int a){
int i;
for(i=15;i>=0;i--){
    printf("%d",(a>>i)&1);
}
}
int main()
{

    printf("----A)---\n");
    printf("%d bits in a byte\n", CHAR_BIT);

    printf("----B)---\n");
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));

    printf("----C)---\n");
    printf("Integer is %d bits.\n",sizeof(int)*8);

    printf("----D)---\n");
    printf("Minimum character is: %d\n", CHAR_MIN);
    printf("Maximum character is: %d\n", CHAR_MAX);

    printf("----E)---\n");
    printf("Minimum short integer is: %d\n", SHRT_MIN);
    printf("Maximum short integer is: %d\n", SHRT_MAX);

    printf("----F)---\n");
    printf("Minimum integer is: %d\n", INT_MIN);
    printf("Maximum character is: %d\n", INT_MAX);

    printf("----G)---\n");
    printf("Maximum float is= %.10e\n", FLT_MAX);
    printf("Minimum float is= %.10e\n", FLT_MIN);

    printf("----H)---\n");
    bitwisec('D');
    printf("\n");

    printf("----I)---\n");
    bitwisenumber(255);
    printf("\n");

    printf("----J)---\n");
    printf("Instead of copying from the ai I am saying that I couldn't do this one.");

    return 0;
}
