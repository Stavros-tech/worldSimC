#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

// You can add utility functions here as needed
// Return a random integer between min and max inclusive
int randint(int min, int max) {
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}
