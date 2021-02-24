#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "debug.h"

int main(int argc, char **argv)
{
    DEBUG_RED("RED test : %d\n", 2);
    unsigned char array[5] = "abcde";
    // check array
    // "a" SHA256 online (https://emn178.github.io/online-tools/sha256.html) hash function is
    // "ca978112ca1bbdcafac231b39a23dc4da786eff8147c4e72b9807785afee48bb"
    // We need get same value.
    DEBUG_SHA(array, 1);
    // check array
    // "abcde" SHA256 online hash function is
    // "36bbe50ed96841d10443bcb670d6554f0a34b761be67ec9c4a8ad2c0c44ca42c"
    // We need get same value.
    DEBUG_SHA(array, 5);
    return 0;
}
