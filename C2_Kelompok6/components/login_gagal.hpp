#ifndef COMPONENTS_LOGIN_GAGAL_HPP
#define COMPONENTS_LOGIN_GAGAL_HPP

#include "../include/headers.hpp"
#include "tekan_enter_untuk_lanjut.hpp"

void loginGagal() {
  std::cout << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Login gagal. Username atau password salah                     |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  tekanEnterUntukLanjut();
}

#endif