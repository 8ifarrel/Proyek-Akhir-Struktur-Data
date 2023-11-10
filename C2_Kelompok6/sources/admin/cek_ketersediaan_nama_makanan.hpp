#ifndef SOURCES_ADMIN_CEK_KETERSEDIAAN_NAMA_MAKANAN_HPP
#define SOURCES_ADMIN_CEK_KETERSEDIAAN_NAMA_MAKANAN_HPP

#include "../../components/tekan_enter_untuk_lanjut.hpp"
#include "../../components/lowercase.hpp"
#include "../../include/headers.hpp"
#include "../common/resep_makanan.hpp"

bool namaMakananSudahAda(resepMakanan *head, std::string namaMakananYangDiperiksa) {
  resepMakanan *current = head;

  while(current != NULL) {
    if(toLowercase(current->nama_makanan) == toLowercase(namaMakananYangDiperiksa)) {
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      std::cout << "| Nama makanan sudah ada.                                       |" << std::endl;
      std::cout << "+---------------------------------------------------------------+" << std::endl;
      tekanEnterUntukLanjut();
      
      return true;
    }
    
    current = current->next;
  } 

  return false;
}

#endif
