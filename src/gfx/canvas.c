#include "gfx/canvas.h"
#include "util/vec2.h"

void canvas_draw(struct canvas *self) {
  vec2i i = {0, 0}; // index
  while (i.x < self->width+1
      && i.y < self->height)
  {
    // if (i.x == x.pos.x-1 && i.y == x.pos.y-1) {
    //   printf("%s ", x.icon);
    // } else {
      printf("⋅ ");
    // }

    i.x+=1;

    // newline
    if (i.x == self->width) {
      printf("\n");
      i.x=0; i.y+=1;
    }
  }
}
