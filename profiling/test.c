#include "../levenshtein.h"

int main(int argc, char** argv) {
  const char* str1 = "Hello, my name is David.";
  const char* str2 = "Hello, my name is Davis.";

  levenshtein(str1, str2);
  return 0;
}
