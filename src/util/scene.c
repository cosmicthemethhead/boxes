#include <stdlib.h>
#include "util/entity.h"
#include "util/scene.h"

void init_entities(struct Scene *self, short init_size) {
  self->entities = malloc(init_size * sizeof(struct entity));
  self->entities_len = init_size;
  self->entities_used = 0;
}

void insert_entity(struct Scene *self, struct entity obj) {
  if (self->entities_used == self->entities_len) {
    self->entities_len *= 2;
    self->entities = realloc(self->entities, self->entities_len * sizeof(struct entity));
  }

  self->entities[self->entities_used++] = obj;
}

void free_entities(struct Scene *self) {
  free(self->entities);
  self->entities = NULL;

  self->entities_used =
  self->entities_len = 0;
}
