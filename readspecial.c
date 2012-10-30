#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

struct special * read_struct(struct special *s, FILE *fp)
{
       if(fread(s,sizeof((*s).code),1,fp) == 0)
           return 0;
       else
       {
           (*s).word =  malloc(1* sizeof(char));

           fread(s,sizeof(s.code),1,fp);
           int i = 0;
           while(fread(s,sizeof((*s).word),1,fp)!= "/n")
           {
               fread(s,sizeof((*s).word)[i],1,fp);
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
        read_struct(&s, fp);
        if (read_struct == 0)
            break;
        for (int i = 0; s.word[i] != "/n" ; i++)
        {
            printf(((*s).word)[i] - (*s).code);
        }

    }
    fclose(fp);
    return 0;
}
