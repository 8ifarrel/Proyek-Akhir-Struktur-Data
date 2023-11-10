#ifndef SOURCES_ADMIN_LIHAT_RIWAYAT_LOGIN_ADMIN_HPP
#define SOURCES_ADMIN_LIHAT_RIWAYAT_LOGIN_ADMIN_HPP

#include "../../include/headers.hpp"
#include "../../components/page_title.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "riwayat_login_admin.hpp"
#include "catat_riwayat_login_admin.hpp"

void lihatRiwayatLoginAdmin(riwayatLoginAdmin *front) {
  system("cls");

  pageTitle();

  while(front != NULL) {
    std::cout << front->waktu_login << std::endl;
    front = front->next;
  }

  tekanEnterUntukLanjut();

}

#endif