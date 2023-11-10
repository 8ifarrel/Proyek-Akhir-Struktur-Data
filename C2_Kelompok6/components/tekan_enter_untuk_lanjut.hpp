#ifndef COMPONENTS_TEKAN_ENTER_UNTUK_LANJUT_HPP
#define COMPONENTS_TEKAN_ENTER_UNTUK_LANJUT_HPP

#include "../include/headers.hpp"

void tekanEnterUntukLanjut() {
  std::cout << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Tekan ENTER untuk lanjut.                                     |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  getche();
}

#endif