#ifndef SOURCES_USER_MENU_AKUN_USER_HPP
#define SOURCES_USER_MENU_AKUN_USER_HPP

#include "../../components/salah_pilih_menu.hpp"
#include "../../include/headers.hpp"
#include "../../components/template_menu.hpp"
#include "login_akun_user.hpp"
#include "register_akun_user.hpp"
#include "akun_user.hpp"

void menuAkunUser() {

  do {
    system("cls");

    pageTitle();

    const int banyak_opsi = 3;
    std::string deskripsi_opsi[banyak_opsi] = {
      "Login",
      "Register",
      "Kembali"
    };

    buatMenu(banyak_opsi, deskripsi_opsi);

    switch(current_selection) {
      case 0:
        loginAkunUser(head_akun_user);
        break;
      case 1:
        registerAkunUser(&head_akun_user);
        break;
      case 2:
        break;
    }
  } while(current_selection != 2);
}

#endif
