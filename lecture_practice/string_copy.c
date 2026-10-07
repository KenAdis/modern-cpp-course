#include <stdio.h>
#include <string.h>

// Compiling with gcc -O0 optimization works but compiling with gcc -O3 optimization fails with
// buffer overflow error. The destination buffer is too small to hold the source string, which 
// can lead to undefined behavior.
int main()
{
    const char src[] = "Hello, World!";
    char dest[5];
    printf("Source string: %s\n", src);

    strcpy(dest, src);
    printf("Destination string: %s\n", dest);

    printf("Source string: %s\n", src);

    return 0;
}