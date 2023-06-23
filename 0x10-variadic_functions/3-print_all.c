#include <stdarg.h>
#include <stdio.h>
#include <string.h> 

void print_all(const char *const format, ...) 
{
  int num_args = strlen(format);
  
  va_list args;
  
  int i = 0;

  va_start(args, format);
  while (i < num_args)
    do {
      if (format[i] == 'i') 
      {
        int x = va_arg(args, int);
        printf("%d", x);
        i++;
      }

      if (format[i] == 'f') 
      {
        double x = va_arg(args, double);
        printf("%f\n", x);
        i++;
      }

      while (format[i] == 's') 
      {
        char *s = va_arg(args, char *);
        printf("%s\n", s);
        i++;
      }
    } 
      while ((format[i] != 'i') || (format[i] != 'f') || (format[i] != 's') || (format[i] != 'c'));
      {
	      printf("\n");
      }
      va_end(args);
}
