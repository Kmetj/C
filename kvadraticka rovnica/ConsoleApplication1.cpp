// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "statistika.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char *text ="Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
	
	PocetPismen(text);
	PocetCislic(text);
	getchar();
	return 0;
}

