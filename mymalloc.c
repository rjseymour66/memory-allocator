#include <stdio.h>

struct header_t {
   size_t size;
   unsigned is_free;
   struct header_t *next;
}

void *malloc(size_t size);

int main(int argc, char *argv[]) {



   return 0;
}

void *malloc(size_t size) {
   void *block;
   block = sbrk(size);
   if (block == (void*) - 1)
      return NULL;
   return block;
}