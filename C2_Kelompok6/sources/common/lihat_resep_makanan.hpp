#ifndef SOURCES_COMMON_LIHAT_RESEP_MAKANAN_HPP
#define SOURCES_COMMON_LIHAT_RESEP_MAKANAN_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "resep_makanan.hpp"
#include "lihat_resep_makanan.hpp"

void lihatResepMakanan(resepMakanan *head) {
  system("cls");

  pageTitle();

  if(head == NULL) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Data masih kosong                                             |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;  
    return;
  }

  while(head != NULL) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << std::endl;
    std::cout << "Nama makanan:" << std::endl;
    std::cout << head->nama_makanan << std::endl;
    std::cout << std::endl;
    std::cout << "Bahan makanan:" << std::endl;
    std::cout << head->bahan_makanan << std::endl;
    std::cout << std::endl;
    std::cout << "Cara membuat makanan:" << std::endl;
    std::cout << head->cara_membuat_makanan << std::endl;
    std::cout << std::endl;

    head = head->next;
  }

  std::cout << "+---------------------------------------------------------------+" << std::endl;
}

#endif