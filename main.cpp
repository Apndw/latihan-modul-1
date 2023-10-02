#include "validation.hpp"

int main() {
  string name = Validation::input("Enter your name: ");
  string nim = Validation::input("Enter your NIM: ");

  cout << name << "\n" << nim << endl;

  return 0;
}