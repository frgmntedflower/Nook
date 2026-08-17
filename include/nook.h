#ifndef NOOK_H
#define NOOK_H

#include "dyn_arr.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct {
  int cursor_y, cursor_x;
  DynamicArray *text_buf;
  char *file_name;
} nook_state;

void init_nook(nook_state *nook);

int run_nook();

void read_file_into_buf(char *file_path, char *buf);

#endif // NOOK_H
