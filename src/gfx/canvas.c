#include <stdio.h>
#include "gfx/canvas.h"
#include "util/vec2.h"
#include "util/scene.h"

void canvas_draw(struct canvas *self) {
  vec2i i = {0, 0}; // index

  while (i.x < self->width+1
      && i.y < self->height)
  {
    if (i.x == scene.entities[0].pos.x-1 &&
        i.y == scene.entities[0].pos.y-1) {
      printf("%s ", scene.entities[0].icon);
    } else {
      printf("⋅ ");
    }

    i.x+=1;

    // newline
    if (i.x == self->width) {
      printf("\n");
      i.x=0; i.y+=1;
    }
  }
}
