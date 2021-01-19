#include <stdio.h>
#include <stdarg.h>



void printf_ss(const char *fmt, ...);
void printf_ss(const char *fmt, ...)
{
#if 0
  if (type & print_mode || type == PRINT_SHELL)
    {
      va_list ap;
      va_start(ap, fmt);
      vprintf(fmt, ap);
      va_end(ap);
    }
#else
  va_list args;
  va_start(args, fmt);
  int n = va_arg(args, int), m;
  const char *p= fmt;
  while (*p != 0)  
    {
      if (*p == '%')
        {
          m = 2;
          if (*(p + 1) != '%')
            {
              int i = 1, j = 0;
              while (i < 4)
                {
                  if (*(p + i) == 'd' ||
                    *(p + i) == 'X' || *(p + i) == 'x')
                    {
                      m = i + 1;
                      print_var(n, (*(p + i) == 'd') ? 10 : 16, j);
                      n = va_arg(args, int);
                      break;
                    }
                  else if (*(p + i) > '0')
                    j = *(p + i) - '0';
                  i++;
                }
              if (i >= 4)
                {
                  uart_put_char(*p);
                  m = 1;
                }
            }
          else
            uart_put_char(*p);
          p += m;
          continue;
        }
      if (*p == '\n')
        uart_put_char('\r');
      uart_put_char(*p++);
    }
  va_end(args);
#endif
}

void print_var(int n, int a, int b)
{
  char s[32];
  int i,j,sign = 0;
  unsigned int m;

  if (b > sizeof(s))
    b = 0;

  memset(s, 0, sizeof(s));
  if (a == 10 && (sign = n) < 0)
    m = -n;
  else
    m = n;
  i = 0;
  do
    {
      j = m % a;
      s[i++] = j + ((j < 10) ? '0' : ('A' - 10));
    }
  while ((m /= a) > 0);

  if (a == 10 && sign < 0)
    s[i++]='-';
  s[i]='\0';

  if (i < b)
    for (j = b - i; j > 0; j--)
      uart_put_char('0');
  for (j = i; j >= 0; j--)
    uart_put_char(s[j]);
}


int main(){
	
	return 0;
} 