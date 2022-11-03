#include <stdio.h>
#include "gfx/canvas.h"
#include "util/vec2.h"
#include "util/scene.h"

void init_canvas(struct canvas *self) {
  vec2i i = { 0, 0 }; // index

  while (i.x < self->width
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
