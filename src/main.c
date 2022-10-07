#include <stdio.h>
#include "util/vec2.h"
#include "util/entity.h"

int main (void) {
  // holds canvas data
  short d[2] = {10, 10}; // x, y
  entity x = {"x", {3, 2}};

  // canvas draw loop
  vec2i i = {0, 0};
  while (i.x < d[0]+1
      && i.y < d[1])
  {
    if (i.x == x.pos.x-1 && i.y == x.pos.y-1) {
      printf("%s ", x.icon);
    } else {
      printf("⋅ ");
    }

    i.x+=1;

    // newline
    if (i.x == d[0]) {
      printf("\n");
      i.x=0; i.y+=1;
    }
  }

  return 0;
}
