#include <stdio.h>
#include <stdlib.h>

main()
{
    int digito[6], i;
    char str[6];

    srand(time(NULL));
     
    digito[0] = rand() % 9;
    digito[1] = rand() % 9;
    digito[2] = rand() % 9;
    digito[3] = rand() % 9;
    digito[4] = rand() % 9;
    digito[5] = rand() % 9;

    digito[0] += 48;
    digito[1] += 48;
    digito[2] += 65;
    digito[3] += 65;
    digito[4] += 97;
    digito[5] += 97;

    for(i=0; i<6; i++){
        str[i] = digito[rand() % 6];
    }

    printf("str = %s\n", str);
}