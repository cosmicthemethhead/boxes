#ifndef CANVAS_H
#define CANVAS_H

#include <stdio.h>

struct canvas {
  short height;
  short width;
};

void canvas_draw(struct canvas *self);

#endif
