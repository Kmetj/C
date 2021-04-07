// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctype.h>


int _tmain(int argc, _TCHAR* argv[])
{ char znak='0';
	int cislo=0, pismeno=0,slovo=1,vp=0;
	FILE* f;
	
	fopen_s(&f, "D:\\Users\\Ja\\vstup.txt","r");
	 while (znak!=EOF)

		{ 
			znak=fgetc(f);
			if (isalpha(znak) && isupper(znak)) {pismeno++;vp++;}
			else if (isalpha(znak))pismeno++;
		    else if (isdigit(znak))cislo++;
			else if (isspace(znak))slovo++;
		 
		 }
	 printf("Pismena: %d\nCisla: %d\nVelke pismena: %d\nSlov: %d\n",pismeno,cislo,vp,slovo);
	fclose(f);

	fopen_s(&f, "D:\\Users\\Ja\\vysledky.txt","w");
	fprintf(f, "Pismena: %d\nCisla: %d\nVelke pismena: %d\nSlov: %d\n",pismeno,cislo,vp,slovo);
	 
	fclose(f);
	getchar();

	return 0;
}

