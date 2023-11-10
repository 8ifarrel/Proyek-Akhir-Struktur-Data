#ifndef SOURCES_USER_REGISTER_AKUN_USER_HPP
#define SOURCES_USER_REGISTER_AKUN_USER_HPP

#include "../../include/headers.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "cek_ketersediaan_username.hpp"
#include "cek_panjang_password.hpp"
#include "cek_username_huruf_kecil.hpp"
#include "akun_user.hpp"

void registerAkunUser(akunUser **head) {
  system("cls");

  pageTitle();
  
  std::string username_baru;
  std::cout << "Masukkan username baru: ";
  fflush(stdin);
  std::getline(std::cin, username_baru);

  std::cout << std::endl;

  if(usernameHurufKecilSemua(username_baru) == false) {
    return;
  }

  if(usernameSudahDigunakan(*head, username_baru) == true) {
    return;
  }

  std::string password_baru;
  std::cout << "Masukkan password baru: ";
  fflush(stdin);
  std::getline(std::cin, password_baru);
  
  std::cout << std::endl;

  if(panjangPasswordKurangDariDelapan(password_baru) == true) {
    return;
  }

  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Register berhasil.                                            |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;

  tekanEnterUntukLanjut();

  akunUser* node_baru = new akunUser;
  node_baru->username = username_baru;
  node_baru->password = password_baru;
  node_baru->next = *head;
  *head = node_baru;
}

#endif
