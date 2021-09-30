#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("Введите 2 числа, разделив символом '|' \n");
    double wholepart=0;
    double fractionalpart=0;
    double output=0;
    int buffer;
    char c;
    while((c=getchar())!='|')
    {
        if(!isdigit(c)){
            printf("нарушен формат ввода\n");
            return 0;
        }
        else
        {
            buffer=c-'0';
            wholepart*=10;
            wholepart+=(double)buffer;
        }
    }
    int counter=0;
    while((c=getchar())!='\n')
        {
        if(!isdigit(c)){
            printf("нарушен формат ввода\n");
            return 0;
        }
        else
        {
            buffer=c-'0';
            fractionalpart*=10;
            fractionalpart+=(double)buffer;
            counter+=1;
        }
    }
    for(int i=0;i<counter;i++)
    {
        fractionalpart/=10;
    }
    output=wholepart+fractionalpart;
    printf("Вывод: %f", output);
    return 0;
}
