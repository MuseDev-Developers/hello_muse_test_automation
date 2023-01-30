#include <stdio.h>

static char text[] = "Hello Sonatype Lift !";

int main() {
    char * printme = text;
    printf("%s\n",printme);
    printme = NULL;
    printme[0] = 'X';
    return 0;
}
