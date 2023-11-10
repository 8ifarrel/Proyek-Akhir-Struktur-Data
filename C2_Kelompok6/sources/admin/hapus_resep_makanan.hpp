#ifndef SOURCES_ADMIN_HAPUS_RESEP_MAKANAN_HPP
#define SOURCES_ADMIN_HAPUS_RESEP_MAKANAN_HPP

#include "../../components/salah_pilih_menu.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../components/template_menu.hpp"
#include "../../include/headers.hpp"
#include "../common/resep_makanan.hpp"
#include "../common/lihat_resep_makanan.hpp"

void hapusResepMakanan(resepMakanan **head) {
  system("cls");

  pageTitle();

  lihatResepMakanan(*head);

  if (*head == NULL) {
    tekanEnterUntukLanjut();
    return;
  }

  std::string nama_makanan;
  std::cout << "Masukkan nama makanan yang ingin dihapus: ";
  fflush(stdin);
  std::getline(std::cin, nama_makanan);
  
  std::cout << std::endl;


  resepMakanan *current = *head;
  resepMakanan *prev = NULL;

  while (current != NULL && current->nama_makanan != nama_makanan) {
    prev = current;
    current = current->next;
  }

  if (current != NULL) {
    if (prev == NULL) {
      *head = current->next;
    } else {
      prev->next = current->next;
    }

    delete current;

    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Resep makanan berhasil dihapus                                |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
  } else {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Resep makanan tidak ditemukan                                 |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
  }

  tekanEnterUntukLanjut();
}

#endif