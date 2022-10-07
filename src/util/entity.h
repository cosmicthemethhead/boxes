#pragma once
#include "util/vec2.h"

// HACK: reserve 4 bytes for chars that could use 1
typedef struct {
  // reserve 4 bytes for each icon
  char icon[4];
  vec2i pos;
} entity;
