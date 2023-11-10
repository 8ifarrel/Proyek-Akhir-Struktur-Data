#ifndef SOURCES_ADMIN_TAMBAH_RESEP_MAKANAN_HPP
#define SOURCES_ADMIN_TAMBAH_RESEP_MAKANAN_HPP

#include "../../components/salah_pilih_menu.hpp"
#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/page_title.hpp"
#include "../../include/headers.hpp"
#include "../../components/template_menu.hpp"
#include "../common/resep_makanan.hpp"
#include "../common/lihat_resep_makanan.hpp"
#include "cek_ketersediaan_nama_makanan.hpp"

void tambahResepMakanan(resepMakanan **head) {
  system("cls");
  
  pageTitle();

  std::string nama_makanan_baru;
  std::cout << "Masukkan nama makanan: " << std::endl;
  fflush(stdin);
  std::getline(std::cin, nama_makanan_baru);
  
  std::cout << std::endl;

  if(namaMakananSudahAda(*head, nama_makanan_baru) == true) {
    return;
  }

  std::string bahan_makanan_baru;
  std::cout << "Masukkan bahan makanan: " << std::endl;
  fflush(stdin);
  std::getline(std::cin, bahan_makanan_baru);

  std::cout << std::endl;

  std::string cara_membuat_makanan_baru;
  std::cout << "Masukkan cara membuat makanan: " << std::endl;
  std::getline(std::cin, cara_membuat_makanan_baru);

  std::cout << std::endl;

  resepMakanan* node_baru = new resepMakanan;
  node_baru->nama_makanan = nama_makanan_baru;
  node_baru->bahan_makanan = bahan_makanan_baru;
  node_baru->cara_membuat_makanan = cara_membuat_makanan_baru;
  node_baru->next = *head;
  *head = node_baru;

  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << "| Resep makanan berhasil ditambahkan.                           |" << std::endl;
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  tekanEnterUntukLanjut();
}

#endif