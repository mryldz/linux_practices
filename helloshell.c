#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    uint16_t i=0;
    while(argv[i]!=NULL){
        printf("Argument %d = %c \n", i, *argv[i]);
        i++;
    }

    return 0;
}
