#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

struct special * read_struct(struct special *s, FILE *fp)
{
    if(fread(s,sizeof(s->code),1,fp) == 0)
        return 0;
    else
    {
        s->word =  malloc(1* sizeof(char));

        fread(s,sizeof(s->word),1,fp);
        int i = 0;
        int x = i;
        while(s->word !=  "/n")
        {
            fread(s,sizeof(s->word)[i],1,fp);
            s->word = malloc(sizeof(char)*x++);
            i++;
            x = i+1;
        }
        return s;
    }
}


int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen("special.data", "r");

    struct special *s;

    while(!EOF)
    {
        (*s).word = malloc(sizeof(char));
        (*s).code = malloc(sizeof(int));
        read_struct(&(*s), fp);

        if (read_struct == 0)
            break;
        int i = 0;
        while ((*s).word[i] != "/n")
        {
            printf("%c" , ((*s).word)[i] - ((*s).code));
            i++;
        }
        printf(" ");
    }
    fclose(fp);
    printf("/n");
    return 0;
}
