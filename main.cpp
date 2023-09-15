#include <stdio.h>
#include <stdexcept>
#include "./backward.hpp"

void bar() {
  printf("before throw\n");
  throw std::runtime_error("hoge throw");
  printf("after throw\n");
}

void foo() {
  bar();
}

int main() {
  foo();
}
