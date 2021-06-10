#include <stdlib.h>

size_t length(const char *s) {
  size_t i = 0;
  while (*s) {
    ++i;
    ++s;
  }
  return i;
}

int max(const size_t n, const int *a) {
  int m;
  size_t i;

  if (n == 0) {
    return 0;
  }

  m = a[0];
  for (i = 1; i < n; ++i) {
    if (a[i] > m) {
      m = a[i];
    }
  }

  return m;
}
