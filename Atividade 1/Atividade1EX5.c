#include <stdio.h>
#include <conio.h>
int main(void)
{
  float vteste;
  int *p;
  float *po;
  char *pon;
  long int *pont;
  long long int *ponte;
  unsigned int *pontei;
  
  printf(" --- TIPO ---|--- BYTES ---\n");
  printf(" int..................: %d bytes\n", sizeof(int)); 
  printf(" float ...............: %d bytes\n", sizeof(float)); 
  printf(" char ................: %d bytes\n", sizeof(char)); 
  printf(" int *p...............: %d bytes\n", sizeof *p);
  printf(" float *po ...........: %d bytes\n", sizeof *po);
  printf(" char *pon ...........: %d bytes\n", sizeof *pon);
  printf(" long int *pont.......: %d bytes\n", sizeof *pont);
  printf(" long long int *ponte.: %d bytes\n", sizeof *ponte);
  printf(" unsigned int.........: %d bytes\n", sizeof(unsigned int));
  printf(" unsigned int *pontei.: %d bytes\n", sizeof *pontei);
  
  
  getch();
  return 0;
}
