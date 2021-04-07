#include "stdafx.h"
#include "statistika.h"
#include <ctype.h>

void PocetPismen(char *text)
{

int i=0;
int poc_pis=0;
  
  while (text[i])
  {
    if (isalpha(text[i]))poc_pis++;
	i++;
  }
   printf ("pocet pismen je: %d\n",poc_pis);
}

void PocetCislic(char *text)
{
	int i=0;
	int poc_cis=0;
  
  while (text[i])
  {
    if (isdigit(text[i]))poc_cis++; 
	i++;
  }
  printf ("pocet cisel je: %d \n",poc_cis);


}
void PocetPunc(char *text)
{
	int i=0;
	int poc_punc=0;
  
  while (text[i])
  {
    if (ispunct(text[i]))poc_punc++; 
	i++;
  }
  printf ("pocet cisel je: %d \n",poc_punc);

}

