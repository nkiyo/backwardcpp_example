#include <stdio.h>
#include <stdexcept>

#define BACKWARD_HAS_BFD 1
#include "./backward.hpp"
namespace backward {
backward::SignalHandling sh;
} // namespace backward

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
