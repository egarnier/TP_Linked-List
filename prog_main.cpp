//****************************************************************************
//
//
//
//****************************************************************************
 
 
 
 
// ===========================================================================
//                               Include Libraries
// ===========================================================================
#include <stdlib.h>
#include <stdio.h>



// ===========================================================================
//                             Include Project Files
// ===========================================================================
#include "List.h"

// ===========================================================================
//                         Declare Miscellaneous Functions
// ===========================================================================








// ===========================================================================
//                                   The Main
// ===========================================================================
int main(int argc, char* argv[])
{
	// Creation of my first List #awesome !
	picture baboon;
	baboon.ppm_read_from_file("baboon.ppm");
	List test;
	test.NewList(baboon);
	printf("Il y a %d éléments dans ma liste et un objet qui a pour adresse %c \n", test.GetNbElement(), test.GetHead());
	picture* baboon_bw = new picture(baboon);
	Node* a;
	a=test.GetHead();
	baboon_bw=a[0].GetPicture();
	baboon_bw[0].ppm_desaturate();
	baboon_bw[0].ppm_write_to_file("baboon_BW.ppm");

  printf("Hello World !\n");
  return 0;
}



// ===========================================================================
//                         Define Miscellaneous Functions
// ===========================================================================

