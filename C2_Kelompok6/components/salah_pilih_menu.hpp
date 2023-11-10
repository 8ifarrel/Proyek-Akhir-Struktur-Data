#ifndef COMPONENTS_SALAH_PILIH_MENU_HPP
#define COMPONENTS_SALAH_PILIH_MENU_HPP

#include "../include/headers.hpp"
#include "tekan_enter_untuk_lanjut.hpp"

void salahPilihMenu() {
  std::cout << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Masukkan pilihan dengan benar!                                |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  tekanEnterUntukLanjut();
}

#endif