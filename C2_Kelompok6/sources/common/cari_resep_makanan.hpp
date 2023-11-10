#ifndef SOURCES_COMMON_CARI_RESEP_MAKANAN_HPP
#define SOURCES_COMMON_CARI_RESEP_MAKANAN_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../components/boyer_moore_search.hpp"
#include "../../include/headers.hpp"
#include "resep_makanan.hpp"
#include "lihat_resep_makanan.hpp"

void cariResepMakanan() {
  system("cls");

  pageTitle();

  if(head_resep_makanan == NULL) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Data masih kosong                                             |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    tekanEnterUntukLanjut();
    return;
  }

  std::string pattern;
  std::cout << "Masukkan nama makanan yang ingin dicari: ";
  fflush(stdin);
  std::cin >> pattern;

  std::cout << std::endl;

  boyerMooreSearch(pattern, head_resep_makanan);
}


#endif