#ifndef COMPONENTS_LOWERCASE_HPP
#define COMPONENTS_LOWERCASE_HPP

#include "../include/headers.hpp"

std::string toLowercase(std::string teks) {
  int panjang_teks = teks.length(); 

  for (int i = 0; i < panjang_teks; i++) {
    teks[i] = tolower(teks[i]);
  }

  return teks;
}

#endif