#include <string>
#include <iostream>

using namespace std;

#ifndef VALIDATION_HPP
#define VALIDATION_HPP

class Validation {
  public:
    static string input(const string& prompt) {
      string input;

      while (true) {
        cout << prompt;
        getline(cin, input);

        if (input.empty()) {
          cout << "Input cannot be empty." << endl;
          continue;
        }

        return input;
      }
    };
};

#endif