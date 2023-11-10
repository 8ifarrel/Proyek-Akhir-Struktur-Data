#ifndef COMPONENTS_BOYER_MOORE_SEARCH_HPP
#define COMPONENTS_BOYER_MOORE_SEARCH_HPP

#include "../include/headers.hpp"
#include "../sources/common/resep_makanan.hpp"
#include "../sources/common/cari_resep_makanan.hpp"

void tampilkanResepMakananYangDicari(resepMakanan *head) {
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
}

void badChar(int badchar[256], std::string text) {
  for (int i = 0; i < 256; i++) {
    badchar[i] = -1;
  }
  for (int i = 0; i < text.length(); i++) {
    badchar[text[i]] = i;
  }
}

void boyerMooreSearch(std::string pattern, resepMakanan *head) {
  bool resepMakananDitemukan = false;

  while (head != NULL) {
    int badchar[256];

    std::string text = head->nama_makanan;
    int m = text.length();
    int n = pattern.length();

    badChar(badchar, text);

    int s = 0;

    while (s <= (m - n)) {
      int j = n - 1;

      while (j >= 0 && pattern[j] == text[s + j]) {
        j--;
      }

      if (j < 0) {
        resepMakananDitemukan = true;
        tampilkanResepMakananYangDicari(head);
      }

      s += (s + n < m) ? 1 : n - badchar[text[s + n]];
    }

    head = head->next;
  }

  if(resepMakananDitemukan == false) {
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    std::cout << "| Resep makanan tidak ditemukan                                 |" << std::endl;
    std::cout << "+---------------------------------------------------------------+" << std::endl;
    tekanEnterUntukLanjut();
    return;
  }
  
  std::cout << "+---------------------------------------------------------------+" << std::endl;
  std::cout << std::endl;

  tekanEnterUntukLanjut();
}

#endif
