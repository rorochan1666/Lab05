#include <stdio.h>

void copy(char *psource, char *ptarget, unsigned num_char)
{
    while (num_char > 0 && *psource != '\0')
{
    *ptarget = *psource;
    psource++;
    ptarget++;
    num_char--;
}
if (num_char > 0)
{
    *ptarget = '\0';
}

}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    while (buffer_size > 1 && *psrc1 != '\0')
{
    *ptarget = *psrc1;
    psrc1++;
    ptarget++;
    buffer_size--;
}
while (buffer_size > 1 && *psrc2 != '\0')
{
    *ptarget = *psrc2;
    psrc2++;
    ptarget++;
    buffer_size--;
}
*ptarget = '\0';

}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above
