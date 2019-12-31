//---------------------------------------------------------------------------

#ifndef PrintUnitH
#define PrintUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TPrintForm : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TQuickRep *QuickRep1;
        TQRSubDetail *QRSubDetail1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRGroup *QRGroup1;
private:	// User declarations
public:		// User declarations
        __fastcall TPrintForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrintForm *PrintForm;
//---------------------------------------------------------------------------
#endif
