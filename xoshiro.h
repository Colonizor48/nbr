#ifndef XOSHIRO_H
#define XOSHIRO_H

#include <stdint.h>
#include "bitrot.h"

struct xoshiro256ss_state
{
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
};

uint64_t xoshiro256ss_pure(struct xoshiro256ss_state *inputState);
uint64_t xoshiro256ss_impure(struct xoshiro256ss_state *inputState);
uint64_t xoshiro256ss();
uint64_t sxoshiro256ss();






#endif