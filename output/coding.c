#include<stdio.h>

int main(){
  char ch;
  scanf("%c", &ch);

  printf((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z')?"Alphabet": "Not Alphabet");
  return 0;
}