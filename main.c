#include <stdio.h>
#include <stdlib.h>

/* baseline2 */

int mult(int x, int y);
int getoper();

int main(int argc, char** argv) {

    int x;
    int y;
    int z;
    x=printf("Hello World baseline2\n");
    x = getoper();
    y = getoper();
    z = mult(x, y);
    printf("Program Completed! %d\n", z);
    return (EXIT_SUCCESS);
}

