#ifndef SOURCES_ADMIN_CATAT_RIWAYAT_LOGIN_ADMIN_HPP
#define SOURCES_ADMIN_CATAT_RIWAYAT_LOGIN_ADMIN_HPP

#include "../../include/headers.hpp"
#include "riwayat_login_admin.hpp"

int jumlah_riwayat_login_admin = 0;

void enqueue(riwayatLoginAdmin** front, riwayatLoginAdmin** rear, std::string waktuSekarang) {
  riwayatLoginAdmin* node_baru = new riwayatLoginAdmin;
  node_baru->waktu_login = waktuSekarang;
  node_baru->next = NULL; 

  if (*front == NULL) {
    *front = node_baru;
  } else {
    (*rear)->next = node_baru;
  }
  *rear = node_baru;
}

void dequeue(riwayatLoginAdmin **front, riwayatLoginAdmin **rear) {
  riwayatLoginAdmin* temp = *front;
  *front = (*front)->next;

  if (*front == NULL) {
    *rear = NULL;
  }

  delete temp;
}

void catatRiwayatLoginAdmin() {
  jumlah_riwayat_login_admin++;

  auto detik = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  std::ostringstream formatted_time;

  formatted_time << std::put_time(std::localtime(&detik), "%A %d %B %Y %H:%M:%S");

  std::string waktu_sekarang = formatted_time.str();

  if (jumlah_riwayat_login_admin > 5) {
    dequeue(&front, &rear);
    jumlah_riwayat_login_admin--;
  }

  enqueue(&front, &rear, waktu_sekarang);
}

#endif
