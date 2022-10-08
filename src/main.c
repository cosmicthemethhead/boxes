#include <stdio.h>
#include <stdlib.h>

#include "gfx/canvas.h"
#include "util/entity.h"
#include "util/scene.h"

struct Scene scene;

int main (void) {
  struct entity e = {"ﱢ", {2, 2}};
  struct canvas c = { 6, 6 };

  init_entities(&scene, 1);
  insert_entity(&scene, e);

  canvas_draw(&c);

  free_entities(&scene);

  return 0;
}
