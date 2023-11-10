#ifndef SOURCES_ADMIN_RIWAYAT_LOGIN_ADMIN_HPP
#define SOURCES_ADMIN_RIWAYAT_LOGIN_ADMIN_HPP

#include "../../include/headers.hpp"

struct riwayatLoginAdmin{
  std::string waktu_login;
  riwayatLoginAdmin *next;
};
riwayatLoginAdmin *head_riwayat_login_admin = NULL;

riwayatLoginAdmin *front = NULL;
riwayatLoginAdmin *rear = NULL;

#endif