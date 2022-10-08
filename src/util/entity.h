#ifndef ENTITY_H
#define ENTITY_H

#include "util/vec2.h"

struct entity {
  // reserve 4 bytes for each icon
  char icon[4];
  vec2i pos;
};

#endif
