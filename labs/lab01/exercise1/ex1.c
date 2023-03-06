#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
  int res = 0;
  while((*str) != NULL) {
    if (*str == letter) res++;
    str++; // str是char*类型，自加会+=sizeof（char）的吧
  }
  return res;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
  char *str = dna_seq->sequence;
  // 初始化为0
  dna_seq->A_count = 0;
  dna_seq->C_count = 0;
  dna_seq->G_count = 0;
  dna_seq->T_count = 0;
  while ((*str) != NULL) {
    if ((*str) == 'A') dna_seq->A_count++;
    else if((*str) == 'C') dna_seq->C_count++;
    else if((*str) == 'G') dna_seq->G_count++;
    else dna_seq->T_count++;
    str++;
  }
  return;
}
