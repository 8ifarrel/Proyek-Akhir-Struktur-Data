#ifndef SOURCES_USER_AKUN_USER_HPP
#define SOURCES_USER_AKUN_USER_HPP

#include "../../include/headers.hpp"

struct akunUser {
  std::string username;
  std::string password;
  akunUser *next;
};
akunUser *head_akun_user = NULL;

#endif