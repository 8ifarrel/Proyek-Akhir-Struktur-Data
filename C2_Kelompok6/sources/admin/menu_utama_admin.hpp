#ifndef SOURCES_ADMIN_MENU_UTAMA_ADMIN_HPP
#define SOURCES_ADMIN_MENU_UTAMA_ADMIN_HPP

#include "../../components/salah_pilih_menu.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "../common/resep_makanan.hpp"
#include "../common/lihat_resep_makanan.hpp"
#include "../common/urut_resep_makanan.hpp"
#include "../common/cari_resep_makanan.hpp"
#include "../../components/template_menu.hpp"
#include "edit_resep_makanan.hpp"
#include "hapus_resep_makanan.hpp"
#include "tambah_resep_makanan.hpp"
#include "lihat_riwayat_login_admin.hpp"

void menuUtamaAdmin() {

  do {
    system("cls");

    pageTitle();

    const int banyak_opsi = 8;
    std::string deskripsi_opsi[banyak_opsi] = {
      "Lihat resep makanan",
      "Cari resep makanan",
      "Urut resep makanan ",
      "Tambah resep makanan",
      "Edit resep makanan",
      "Hapus resep makanan",
      "Lihat riwayat log in admin",
      "Log Out"
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
      tambahResepMakanan(&head_resep_makanan);
      break;
    case 4:
      editResepMakanan(&head_resep_makanan);
      break;
    case 5:
      hapusResepMakanan(&head_resep_makanan);
      break;
    case 6:
      lihatRiwayatLoginAdmin(front);
      break;
    case 7:
      break;
    default:
      salahPilihMenu();
    }
  } while(current_selection != 7);
}

#endif