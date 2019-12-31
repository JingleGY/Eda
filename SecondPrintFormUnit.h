//---------------------------------------------------------------------------

#ifndef SecondPrintFormUnitH
#define SecondPrintFormUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <QRCtrls.hpp>
//---------------------------------------------------------------------------
class TNextPrintForm : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep;
        TQRBand *QRBand1;
        TQRLabel *QRLabel3;
        TQRSubDetail *QRSubDetail1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText4;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel5;
        TQRDBText *QRDBText5;
        TQRLabel *QRLabel6;
private:	// User declarations
public:		// User declarations
        __fastcall TNextPrintForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNextPrintForm *NextPrintForm;
//---------------------------------------------------------------------------
#endif
