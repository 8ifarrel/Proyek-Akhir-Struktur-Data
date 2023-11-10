#ifndef ADMIN_COMMON_URUT_RESEP_MAKANAN_HPP
#define ADMIN_COMMON_URUT_RESEP_MAKANAN_HPP

#include "../../components/merge_sort.hpp"
#include "../../components/salah_pilih_menu.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "../../components/template_menu.hpp"
#include "resep_makanan.hpp"
#include "lihat_resep_makanan.hpp"

void urutResepMakananDariAbjadTerkecil() {
  system("cls");

  pageTitle();

  mergeSort(&head_resep_makanan, "ascending");

  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Resep makanan berhasil diurutkan dari abjad terkecil.         |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  tekanEnterUntukLanjut();
}


void urutResepMakananDariAbjadTerbesar() {
  system("cls");

  pageTitle();

  mergeSort(&head_resep_makanan, "descending");

  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Resep makanan berhasil diurutkan dari abjad terbesar.         |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  tekanEnterUntukLanjut();
}


void menuUrutResepMakanan() {

  do {
    system("cls");

    pageTitle();

    if (head_resep_makanan == NULL) {
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << "| Data masih kosong                                             |" << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      tekanEnterUntukLanjut();
      return;
    }

    const int banyak_opsi = 3;
    std::string deskripsi_opsi[banyak_opsi] = {
      "Urut resep makanan dari abjad terkecil",
      "Urut resep makanan dari abjad terbesar ",
      "Kembali"
    };

    buatMenu(banyak_opsi, deskripsi_opsi);

    switch(current_selection){
    case 0:
      urutResepMakananDariAbjadTerkecil();
      break;
    case 1:
      urutResepMakananDariAbjadTerbesar();
      break;
    case 2:
      break;
    default:
      salahPilihMenu();
    }
  } while(current_selection != 2);
}

#endif