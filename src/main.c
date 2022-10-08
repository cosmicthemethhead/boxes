#include <stdio.h>
#include <stdlib.h>

#include "gfx/canvas.h"
#include "util/entity.h"

int main (void) {
  struct entity e = {"ﱢ", {2, 2}};
  // create new canvas in heap memory
  struct canvas c = { 6, 6 };

  // canvas draw loop
  canvas_draw(&c);

  return 0;
}
