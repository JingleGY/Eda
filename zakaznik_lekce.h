//---------------------------------------------------------------------------

#ifndef zakaznik_lekceH
#define zakaznik_lekceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <QRCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class Tzak_lekce : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRepLekce;
        TQRSubDetail *QRSubDetail1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TDBGrid *DBGrid1;
private:	// User declarations
public:		// User declarations
        __fastcall Tzak_lekce(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tzak_lekce *zak_lekce;
//---------------------------------------------------------------------------
#endif
