#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define maxSize 37
#define accuracy 15

int main()
{
    printf("Введите 2 числа, разделив символом '|' \n");
    double output=0;
    int buffer;
    
    int counter1=0;
    char c;
    while((c=getchar())!='|')
    {
        if(!isdigit(c)){
            printf("нарушен формат ввода\n");
            return 0;
        }
        else
        {
            counter1++;
            if(counter1>maxSize)
            {
                printf("введена слишком большая целая часть \n");
                
                return 0;
            }
            buffer=c-'0';
            output*=10;
            output+=(double)buffer;
        }
    }
    int counter2=0;
    while((c=getchar())!='\n')
        {
        if(!isdigit(c)){
            printf("нарушен формат ввода\n");
            return 0;
        }
        else
        {
            counter2++;
            if(counter2>accuracy)
            {
                printf("введена слишком большая дробная часть \n");
                
                return 0;
            }
            buffer=c-'0';
            output+=(double)buffer * pow(10,-(double)counter2);
        }
    }
    printf("%f", output);
    return 0;
}
