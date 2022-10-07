#include <stdio.h>

int main (void)
{
  // holds canvas data
  short d[2] = { 10, 10 }; // x, y

  // basicly just a 2d for loop
  short c_x = 0; short c_y = 0;
  while (c_x < d[0]+1
      && c_y < d[1])
  {
    printf("%i ", c_x);
    c_x+=1;

    // newline
    if (c_x == d[0]) {
      printf("\n");
      c_x=0;
      c_y+=1;
    }
  }

  return 0;
}
