#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int print_sign(int n);
int main(void)
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}

int print_sign(int n){
if(n>0){
  return (1);
}
  else if(n == 0){
    return (0);
  }
else {
   return (-1);
  }
}