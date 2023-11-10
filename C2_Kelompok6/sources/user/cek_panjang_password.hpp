#ifndef SOURCES_USER_CEK_PANJANG_PASSWORD_HPP
#define SOURCES_USER_CEK_PANJANG_PASSWORD_HPP

#include "../../include/headers.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"

bool panjangPasswordKurangDariDelapan(std::string passwordYangDiperiksa) {
  const int PANJANG_MINUMUM_PASSWORD = 8;
  int panjang_password_sekarang = passwordYangDiperiksa.size();

  if(panjang_password_sekarang < PANJANG_MINUMUM_PASSWORD) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Panjang password kurang dari 8 karakter                       |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    tekanEnterUntukLanjut();
    return true;
  }

  return false;
}

#endif