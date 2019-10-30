#include <stdio.h>
 
int main()
{
  int row, c, n, s;
 
  printf("Input baris piramid yang diinginkan\n");
  scanf("%d", &n);

  s = n;
  for (row = 1; row <= n; row++)  
    for (c = 1; c < s; c++)
      printf(" ");
    s--;
    for (c = 1; c <= 2*row - 1; c++)
      printf("*");
    printf("\n");
  }
  return 0;
}