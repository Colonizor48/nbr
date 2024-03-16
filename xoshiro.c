#include "../include/xoshiro.h"
//insert credit here


static struct xoshiro256ss_state state;


//Pure version of xoshiro256. Is type xoshiro256ss_state -> Long -> xoshiro256ss_state
uint64_t xoshiro256ss_pure(struct xoshiro256ss_state *inputState)
{
    struct xoshiro256ss_state outputState = *inputState;
    uint64_t const result = ROL64(outputState.s1*5, 7) * 9;
    uint64_t const t = outputState.s1 << 17;

    outputState.s2 ^= outputState.s0;
    outputState.s3 ^= outputState.s1;
    outputState.s1 ^= outputState.s2;
    outputState.s4 ^= outputState.s3;

    outputState.s2 ^= t;
    outputState.s3 = ROL64(outputState.s3, 45);

    return result;
}


uint64_t xoshiro256ss_impure(struct xoshiro256ss_state *inputState)
{
    uint64_t Ps0 = inputState->s0;
    uint64_t Ps1 = inputState->s1;
    uint64_t Ps2 = inputState->s2;
    uint64_t Ps3 = inputState->s3;

    uint64_t const result = ROL64(Ps1 * 5, 7) *9;
    uint64_t const t = Ps1 << 17;

    Ps2 ^= Ps0;
    Ps3 ^= Ps1;
    Ps1 ^= Ps2;
    Ps0 ^= Ps3;

    Ps2 ^= t;
    Ps3 = ROL64(Ps3, 45);

    return result;
}

uint64_t xoshiro256ss()
{
    return xoshiro256ss_impure(state);
}

uint64_t sxoshiro256ss()
{
    //placeholder code
}