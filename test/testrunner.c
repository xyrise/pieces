/* testrunner.c */

#include <string.h>

#include "MinCTest/MinCTest.h"

#include "textbuffer/create.c"


int main(int argc, char *argv[]) {
  TestGroup textbuffer = {0};

  registerTest(textbuffer, textbuffer_CreateAlloc);

  if (argc < 2) {
    return runTests(&textbuffer);
  }
  else if (argc == 2) {
    if (!strcmp("TextBuffer", argv[1])) {
      return runTests(&textbuffer);
    }
  }
  else if (argc == 3) {
    if (!strcmp("TextBuffer", argv[1])) {
      return runTest(&textbuffer, argv[2]);
    }
  }
  return 1;
}
