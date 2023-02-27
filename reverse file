#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int ft,i=0;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("ERROR");
        return 0;
    }
    fseek(fp,0,SEEK_END);
    ft=ftell(fp);
    while(i<ft)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}
