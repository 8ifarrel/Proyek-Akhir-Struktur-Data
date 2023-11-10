#ifndef SOURCES_COMMON_RESEP_MAKANAN_HPP
#define SOURCES_COMMON_RESEP_MAKANAN_HPP

#include "../../include/headers.hpp"

struct resepMakanan {
  std::string nama_makanan;
  std::string bahan_makanan;
  std::string cara_membuat_makanan;
  resepMakanan *next;
};

resepMakanan *head_resep_makanan = NULL;

#endif