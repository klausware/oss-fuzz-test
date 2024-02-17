#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "convert_lib.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    // Ensure we have enough data for an integer
    if (size < sizeof(int)) {
        return 0; // Not enough data to process
    }

    // Interpret the first few bytes of data as an integer
    int num;
    // Prevent potential alignment issues
    memcpy(&num, data, sizeof(int));

    // Call the target function
    char *binaryStr = decimal_to_binary(num);

    // Normally, you would check the output for expected properties or memory corruption issues here.
    // Since decimal_to_binary uses a static buffer, there's no dynamic memory to free.

    return 0;
}
