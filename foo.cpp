// Global module fragment where #includes can happen
module;

#include <format>
#include <iostream>

// first thing after the Global module fragment must be a module command
export module foo;

export class foo {
public:
  foo();
  ~foo();
  void helloworld();
};

foo::foo() = default;
foo::~foo() = default;
void foo::helloworld() { std::cout << std::format("{} {}\n", "hello", "world"); }