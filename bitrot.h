#ifndef BITROT_H
#define BITROT_H

// Left bit rotate macro for 16-bit integers
#define ROL16(x, k) (((x) << (k)) | ((x) >> (16 - (k))))

// Right bit rotate macro for 16-bit integers
#define ROR16(x, k) (((x) >> (k)) | ((x) << (16 - (k))))

// Left bit rotate macro for 32-bit integers
#define ROL32(x, k) (((x) << (k)) | ((x) >> (32 - (k))))

// Right bit rotate macro for 32-bit integers
#define ROR32(x, k) (((x) >> (k)) | ((x) << (32 - (k))))

// Left bit rotate macro for 64-bit integers
#define ROL64(x, k) (((x) << (k)) | ((x) >> (64 - (k))))

// Right bit rotate macro for 64-bit integers
#define ROR64(x, k) (((x) >> (k)) | ((x) << (64 - (k))))

#endif
