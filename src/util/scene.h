// https://stackoverflow.com/questions/3536153/c-dynamically-growing-array
// https://stackoverflow.com/questions/16522341/pseudo-generics-in-c

#ifndef VECTOR_H
#define VECTOR_H

#include "util/entity.h"
#include <stddef.h>
// #include "util/entity.h"

struct Scene {
  // entity data
  struct entity *entities; // holds entities in scene
  size_t entities_used;
  size_t entities_len;     // sizeof entities
};

extern struct Scene scene;

void init_entities(struct Scene *self, short init_size);
void insert_entity(struct Scene *self, struct entity obj);
void free_entities(struct Scene *self);

#endif
