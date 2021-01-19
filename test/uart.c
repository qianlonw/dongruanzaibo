///*
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>

void printf_ss(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  const char *p = fmt;
  //printf("%d\n", sizeof(va_arg(args, char*)));
  //char *ch = va_arg(args, char*);
  // if(isalpha(va_arg(args, )))
  //   char *ch = va_arg(args, char*);
  // else
  //   int n = va_arg(args, int);
  //int n = va_arg(args, int), m;
  //int n = va_arg(args, int);
  //va_end(args);
  //va_start(args, fmt);
  
  //const char *p= fmt;
  //va_end(args);
  //printf("%d\n",n);
  //printf("%d\n", sizeof(*ch));
  //printf("%s", ch);
  printf("%c", *p);
  
}
int main(int argc, char const *argv[])
{
  printf_ss("sss","lll",6,"wwww");//,5,"ssss",2,'w',3);
  
  return 0;
}

//*/
/*
#include <stdio.h>
#include <stdarg.h>

void PrintLines(char *first,...)
{
    char *str;
    va_list v1;
    str = first;
    va_start(v1,first);
    do 
    {
        printf("%s\n",str);
        str=va_arg(v1,char*);
    } while (str != NULL );
    va_end(v1);
}

int main(int argc, char* argv[])
{
    PrintLines("First","Second","Third","Fourth",NULL);
    return 0;
}
*/