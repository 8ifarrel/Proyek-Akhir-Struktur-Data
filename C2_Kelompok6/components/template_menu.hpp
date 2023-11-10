#ifndef COMPONENTS_TEMPLATE_MENU_HPP
#define COMPONENTS_TEMPLATE_MENU_HPP

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include "page_title.hpp"

using namespace std;

int current_selection = 0;

void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void buatMenu(int number_of_inputs, string desciption_of_inputs[]) {
  current_selection = 0;

  while (true) {
    gotoxy(0, 7);

    cout << "+---------------------------------------------------------------+" << endl;
    cout << "|                                                               |" << endl;

    for (int i = 0; i < number_of_inputs; i++) {
      if (current_selection == i) {
        cout << "| >> " << left << setw(59) << desciption_of_inputs[i] << "|" << endl;
        cout << "|                                                               |" << endl;
      } else {
        cout << "|    " << left << setw(59) << desciption_of_inputs[i] << "|" << endl;
        cout << "|                                                               |" << endl;
      }
    }

    cout << "+---------------------------------------------------------------+" << endl;

    char key = getch();

    if (key == 72) { /*arrow up*/
      if (current_selection == 0) {
        current_selection = number_of_inputs - 1;
      } else {
        current_selection--;
      }
    } else if (key == 80) { /*arrow down*/
      if (current_selection == number_of_inputs - 1) {
        current_selection = 0;
      } else {
        current_selection++;
      }
    } else if (key == 13) { /*enter*/
      break;
    }
  }
}

#endif
