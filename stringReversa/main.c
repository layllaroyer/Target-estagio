#include <stdio.h>

int main()
{
    char string[21], stringRev[21];
    int i, size, j;
    printf("Digite uma string de no máximo 20 caracteres:\n");
    fgets(string,20,stdin);
    fflush(stdin);
    size= strlen(string);
    for(i=0, j=size-1; i<size;i++,j--){
        stringRev[i]=string[j];
    }
    printf("%s", stringRev);
    return 0;
}
