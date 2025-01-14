#include <stdio.h>

/*
 * A union ipv4_t represents an IP version
 * 4 address.
 */
union ipv4_t {
  unsigned char byte[4];
  unsigned int intAddress;
};

/*
 * This program prompts the user to enter
 * an IP version 4 address, and prints
 * out that addres in binary and base-10.
 */
int main(void){

  union ipv4_t x;
  printf("Enter an IP version 4 address using dot notation: ");
  scanf("%hhu.%hhu.%hhu.%hhu", &x.byte[3], &x.byte[2], &x.byte[1], &x.byte[0]); 
  printf("IP version 4 address in binary: ");
  for(int i = 0; i < 32; i++){
    if(i > 0 && i % 8 == 0) printf(" ");
    unsigned char bit = (x.intAddress >> (31 - i)) & 1;
    printf("%hhu", bit);
  }
  printf("\n");
  printf("IP version 4 address as a unsigned base-10 integer: %u\n", x.intAddress);  

  return 0;
}