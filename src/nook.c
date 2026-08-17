#include "nook.h"
#include "array.h"

void read_file_into_buf(char *file_path, char *buf) {}

void init_nook(nook_state *nook) {
  DynamicArray text;
  da_init(&text, sizeof(char), 1024);

  nook->cursor_x = 0;
  nook->cursor_y = 0;
  // New file
  if (nook->file_name == NULL) {
    nook->file_name = "";
  } // else, file opened

  nook->text_buf = &text;
}

int main(int argc, char const *argv[]) {
  nook_state nook = {0};
  init_nook(&nook);

  return 0;
}
