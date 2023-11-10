#ifndef SOURCES_USER_MENU_UTAMA_USER_HPP
#define SOURCES_USER_MENU_UTAMA_USER_HPP

#include "../../include/headers.hpp"
#include "../common/resep_makanan.hpp"
#include "../common/lihat_resep_makanan.hpp"
#include "../common/urut_resep_makanan.hpp"
#include "../common/cari_resep_makanan.hpp"
#include "../../components/template_menu.hpp"
#include "../../components/salah_pilih_menu.hpp"
#include "../../components/page_title.hpp"

void menuUtamaUser() {

  do {
    system("cls");

    pageTitle();

    const int banyak_opsi = 5;
    std::string deskripsi_opsi[banyak_opsi] = {
      "Lihat resep makanan ",
      "Cari resep makanan",
      "Urut resep makanan",
      "Log out"
    };

    buatMenu(banyak_opsi, deskripsi_opsi);

    switch(current_selection){
    case 0:
      lihatResepMakanan(head_resep_makanan);
      tekanEnterUntukLanjut();
      break;
    case 1:
      cariResepMakanan();
      break;
    case 2:
      menuUrutResepMakanan();
      break;
    case 3:
      break;
    default:
      salahPilihMenu();
    }
  } while(current_selection != 3);
}

#endif