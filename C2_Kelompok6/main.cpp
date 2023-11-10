#include "include/headers.hpp"
#include "sources/admin/login.hpp"
#include "sources/user/menu_akun_user.hpp"
#include "components/salah_pilih_menu.hpp"
#include "components/keluar_dari_aplikasi.hpp"
#include "components/template_menu.hpp"

int main() {
  do {
    system("cls");

    pageTitle();

    const int banyak_opsi = 3;
    std::string deskripsi_opsi[banyak_opsi] = {
      "User",
      "Admin",
      "Keluar dari aplikasi"
    };

    buatMenu(banyak_opsi, deskripsi_opsi);
    
    switch(current_selection) {
      case 0:
        menuAkunUser();
        break;
      case 1:
        loginAkunAdmin();
        break;
      case 2:
        keluarDariAplikasi();
        break;
    }

  } while(current_selection != 2);

  return  0;
}