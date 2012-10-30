#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

struct special * read_struct(struct special *s, FILE *fp)
{
        fread(&s,sizeof(s),1,fp);
        
}

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = open("special.data");
    struct special s;
    while(!EOF)
    {
        read_struct(&s, fp);

        if (read_struct == 0)
            break;

        fwrite((*s),sizeof(
    }
    fclose(fp);
    return 0;
}
