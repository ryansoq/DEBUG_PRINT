#ifndef __DEBUG_H_
#define __DEBUG_H_

#ifdef DEBUG_PRINTF

#include <stdio.h>
#include <assert.h>

#include "SHA256.h"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define DEBUG(format, ...)          printf(format, ##__VA_ARGS__)
#define DEBUG_RED(format, ...)      printf(RED format RESET, ##__VA_ARGS__)
#define DEBUG_GREEN(format, ...)    printf(GREEN format RESET, ##__VA_ARGS__)

#define DEBUG_ASSERT(x, ...) for(; !(x); assert(x)) DEBUG_RED(__VA_ARGS__);

#define DEBUG_SHA(x, y) { \
    uint32_t *argHash2 = SHA256Hash(x, y); \
    printf("SHA-256 : "); \
    for (int i = 0; i < SHA256_ARRAY_LEN; ++i) \
	printf("%08" PRIx32 , argHash2[i]); \
    printf("\n"); \
} 

#else // else DEBUG_PRINTF

#define DEBUG(format, ...)
#define DEBUG_RED(format, ...)
#define DEBUG_GREEN(format, ...)

#define DEBUG_ASSERT(x, ...)
#define DEBUG_SHA(x, y)

#endif // DEBUG_PRINTF

#endif // __DEBUG_H_
