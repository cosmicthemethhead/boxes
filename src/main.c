#include <stdio.h>
#include <stdlib.h>

#include "gfx/canvas.h"
#include "util/entity.h"
#include "util/scene.h"

#define clear() printf("\033[H\033[J")
#define cursor_goto(x,y) printf("\033[%d;%dH", (y), (x))

struct Scene scene;

int main (void) {
  clear();

  struct entity e = {"ﱢ", {2, 2}};
  struct canvas c = { 6, 6 };

  init_entities(&scene, 1);
  insert_entity(&scene, e);

  init_canvas(&c);

  free_entities(&scene);

  return 0;
}
