#ifndef SOURCES_USER_CEK_USERNAME_HURUF_KECIL_HPP
#define SOURCES_USER_CEK_USERNAME_HURUF_KECIL_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../include/headers.hpp"
#include "akun_user.hpp"

bool usernameHurufKecilSemua(std::string usernameYangDiperiksa) {
  if(std::any_of(usernameYangDiperiksa.begin(), usernameYangDiperiksa.end(), ::isupper)) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Username harus berupa huruf kecil semua.                      |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    tekanEnterUntukLanjut();
    return false;
  }

  return true;
}

#endif
