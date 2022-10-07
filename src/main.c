#include <stdio.h>
#include "util/vec2.h"

int main (void) {
  // holds canvas data
  short d[2] = { 10, 10 }; // x, y

  // basicly just a 2d for loop
  vec2i i = {0, 0};
  while (i.x < d[0]+1
      && i.y < d[1])
  {
    printf("⋅ ");
    i.x+=1;

    // newline
    if (i.x == d[0]) {
      printf("\n");
      i.x=0;
      i.y+=1;
    }
  }

  return 0;
}
