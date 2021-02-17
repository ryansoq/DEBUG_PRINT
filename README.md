# DEBUG_PRINTF

## Building

```
./make.sh
or
gcc -DDEBUG_PRINTF main.c -o test -I ./include
```

## Example

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "debug.h"

int main(int argc, char **argv)
{
    DEBUG_RED("RED test : %d\n", 2);
    uint8_t array[5] = "abcde";
    // "a" SHA256 online hash function
    // "ca978112ca1bbdcafac231b39a23dc4da786eff8147c4e72b9807785afee48bb"
    DEBUG_SHA(array, 1);
    // "abcde" SHA256 online hash function
    // "36bbe50ed96841d10443bcb670d6554f0a34b761be67ec9c4a8ad2c0c44ca42c"
    DEBUG_SHA(array, 5);
    return 0;
}

/*
result:
RED test : 2
SHA-256 : ca978112ca1bbdcafac231b39a23dc4da786eff8147c4e72b9807785afee48bb
SHA-256 : 36bbe50ed96841d10443bcb670d6554f0a34b761be67ec9c4a8ad2c0c44ca42c
*/

```
