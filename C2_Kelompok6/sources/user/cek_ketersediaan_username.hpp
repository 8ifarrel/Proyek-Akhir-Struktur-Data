#ifndef SOURCES_USER_CEK_KETERSEDIAAN_USERNAME_HPP
#define SOURCES_USER_CEK_KETERSEDIAAN_USERNAME_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../include/headers.hpp"
#include "akun_user.hpp"

bool usernameSudahDigunakan(akunUser *head, std::string usernameYangDiperiksa) {
  akunUser *current = head;

  if(usernameYangDiperiksa == "admin") {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Username sudah digunaka. Pilih username yang lain             |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    tekanEnterUntukLanjut();
    return true;
  }

  while(current != NULL) {
    if(usernameYangDiperiksa == current->username) {
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << "| Username sudah digunaka. Pilih username yang lain             |" << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      tekanEnterUntukLanjut();
      return true;
    }
  }

  return false;
}

#endif
