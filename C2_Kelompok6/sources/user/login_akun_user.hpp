#ifndef SOURCES_USER_LOGIN_AKUN_USER_HPP
#define SOURCES_USER_LOGIN_AKUN_USER_HPP

#include "../../include/headers.hpp"
#include "../../components/login_gagal.hpp"
#include "menu_utama_user.hpp"
#include "akun_user.hpp"

void loginAkunUser(akunUser *head) {
  system("cls");

  pageTitle();

  std::string input_username;
  std::cout << "Masukkan username Anda: ";
  fflush(stdin);
  std::getline(std::cin, input_username);

  std::cout << std::endl;

  std::string input_password;
  std::cout << "Masukkan password Anda: ";
  fflush(stdin);
  std::getline(std::cin, input_password);

  std::cout << std::endl;

  akunUser* current = head;

  while(current != NULL) {
    if(current->username == input_username && current->password == input_password) {
      menuUtamaUser();
      return;
    }

    current = current->next;
  }

  loginGagal();
}

#endif
