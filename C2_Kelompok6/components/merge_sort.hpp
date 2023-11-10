#ifndef COMPONENTS_MERGE_SORT_HPP
#define COMPONENTS_MERGE_SORT_HPP

#include "../include/headers.hpp"
#include "../sources/common/resep_makanan.hpp"

resepMakanan* merge(resepMakanan* left, resepMakanan* right, std::string polaPengurutan) {
  resepMakanan* result = NULL;

  if(left == NULL)
    return right;

  if(right == NULL)
    return left;

  if(polaPengurutan == "ascending") {
    if (left->nama_makanan <= right->nama_makanan) {
      result = left;
      result->next = merge(left->next, right, polaPengurutan);
    } else {
      result = right;
      result->next = merge(left, right->next, polaPengurutan);
    }
  }

  if(polaPengurutan == "descending") {
    if (left->nama_makanan >= right->nama_makanan) {
      result = left;
      result->next = merge(left->next, right, polaPengurutan);
    } else {
      result = right;
      result->next = merge(left, right->next, polaPengurutan);
    }
  }

  return result;
}


void split(resepMakanan* source, resepMakanan** front, resepMakanan** back) {
  if (source == NULL || source->next == NULL) {
      *front = source;
      *back = NULL;
      return;
  }

  resepMakanan* slow = source;
  resepMakanan* fast = source->next;

  while (fast != NULL) {
      fast = fast->next;
      if (fast != NULL) {
          slow = slow->next;
          fast = fast->next;
      }
  }

  *front = source;
  *back = slow->next;
  slow->next = NULL;
}


void mergeSort(resepMakanan** headRef, std::string polaPengurutan) {
  resepMakanan* head = *headRef;
  resepMakanan* left;
  resepMakanan* right;

  if (head == NULL || head->next == NULL)
      return;

  split(head, &left, &right);

  mergeSort(&left, polaPengurutan);
  mergeSort(&right, polaPengurutan);

  *headRef = merge(left, right, polaPengurutan);
}

#endif