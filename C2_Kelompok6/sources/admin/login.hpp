#ifndef SOURCES_ADMIN_LOGIN_HPP
#define SOURCES_ADMIN_LOGIN_HPP

#include "../../components/login_gagal.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "menu_utama_admin.hpp"
#include "catat_riwayat_login_admin.hpp"

void loginAkunAdmin() {
  system("cls");

  pageTitle();

  std::string input_username;
  std::cout << "Masukkan username: ";
  fflush(stdin);
  std::getline(std::cin, input_username);

  std::cout << std::endl;

  std::string input_password;
  std::cout << "Masukkan password: ";
  fflush(stdin);
  std::getline(std::cin, input_password);

  std::string username = "admin";
  std::string password = "admin";

  if(input_username == username && input_password == password) {
    catatRiwayatLoginAdmin();
    menuUtamaAdmin();
  } else {
    loginGagal();
  }
}

#endif