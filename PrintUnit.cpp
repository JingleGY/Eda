//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PrintUnit.h"
#include "adru1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrintForm *PrintForm;
//---------------------------------------------------------------------------
__fastcall TPrintForm::TPrintForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

