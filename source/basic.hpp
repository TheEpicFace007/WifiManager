#pragma once

#include <3ds.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FS_Archive sdmcArchive;

#ifdef __cplusplus
}

#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#endif

#define WORKING_DIR "/3ds/WifiManager"

#define DEBUG(...) fprintf(stderr, __VA_ARGS__)
#define POS() DEBUG("%s (line %d)...\n", __func__, __LINE__)

#define DEBUGPOS(...) \
        POS(); \
        DEBUG(__VA_ARGS__)
