#ifndef SOURCES_ADMIN_EDIT_RESEP_MAKANAN_HPP
#define SOURCES_ADMIN_EDIT_RESEP_MAKANAN_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "../common/resep_makanan.hpp"
#include "../common/lihat_resep_makanan.hpp"

void editResepMakanan(resepMakanan **head) {
  system("cls");

  pageTitle();

  lihatResepMakanan(*head);
  
  if (*head == NULL) {
    tekanEnterUntukLanjut();
    return;
  }

  std::string nama_makanan_yang_dicari;
  std::cout << "Masukkan nama makanan yang ingin diubah: " << std::endl;
  std::cin >> nama_makanan_yang_dicari;

  std::cout << std::endl;

  resepMakanan *current = *head;

  while (current != NULL) {
    if (current->nama_makanan == nama_makanan_yang_dicari) {
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << "| Resep makanan ditemukan                                       |" << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;

      std::cout << std::endl;
        
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << std::endl;
      std::cout << "Nama makanan:" << std::endl;
      std::cout << current->nama_makanan << std::endl;
      std::cout << std::endl;
      std::cout << "Bahan makanan:" << std::endl;
      std::cout << current->bahan_makanan << std::endl;
      std::cout << std::endl;
      std::cout << "Cara membuat makanan:" << std::endl;
      std::cout << current->cara_membuat_makanan << std::endl;
      std::cout << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;

      std::string nama_makanan_baru;
      std::cout << "Masukkan nama makanan: " << std::endl;
      fflush(stdin);
      std::getline(std::cin, nama_makanan_baru);
      
      std::cout << std::endl;

      std::string bahan_makanan_baru;
      std::cout << "Masukkan bahan makanan: " << std::endl;
      fflush(stdin);
      std::getline(std::cin, bahan_makanan_baru);

      std::cout << std::endl;

      std::string cara_membuat_makanan_baru;
      std::cout << "Masukkan cara membuat makanan: " << std::endl;
      fflush(stdin);
      std::getline(std::cin, cara_membuat_makanan_baru);

      current->nama_makanan = cara_membuat_makanan_baru;
      current->bahan_makanan = bahan_makanan_baru;
      current->cara_membuat_makanan = cara_membuat_makanan_baru;

      std::cout << std::endl;

      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << "| Resep makanan berhasil dibuah                                 |" << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      tekanEnterUntukLanjut();
      return;
    }

    current = current->next;
  }

  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Resep makanan tidak ditemukan                                 |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  
  std::cout << std::endl;
  
  tekanEnterUntukLanjut();
}

#endif