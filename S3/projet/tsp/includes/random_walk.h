#ifndef RANDOMWALK_H
#define RANDOMWALK_H

#include "tspstat.h"
#include "tools.h"

int next_random(instance_t *instance, int *nodes, int zeiger);
double random_walk(instance_t *inst);


#endif