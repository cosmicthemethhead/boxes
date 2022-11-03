#ifndef CANVAS_H
#define CANVAS_H

#include <stdio.h>

struct canvas {
  short height;
  short width;
};

void init_canvas(struct canvas *self);

#endif
