//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1998-2002 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
//----------------------------------------------------------------------------
USEFORM("adru1.cpp", FormMain);
USEFORM("Printcost.cpp", PrintForm);
USEFORM("zakaznik_lekce.cpp", zak_lekce);
USEFORM("SecondPrintFormUnit.cpp", NextPrintForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   try
   {
        Application->Initialize();
        Application->CreateForm(__classid(TFormMain), &FormMain);
                 Application->CreateForm(__classid(Tzak_lekce), &zak_lekce);
                 Application->CreateForm(__classid(TNextPrintForm), &NextPrintForm);
                 Application->Run();
   }
   catch (Exception &exception)
   {
        Application->ShowException(&exception);
   }
        return 0;
}
//---------------------------------------------------------------------

