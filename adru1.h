//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1998-2002 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
#ifndef Adru1H
#define Adru1H
//----------------------------------------------------------------------------
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <StdCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBTables.hpp>
#include <DB.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <System.hpp>
#include <Db.hpp>
#include <ADODB.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
//----------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:
	TDataSource *DataSource1;
	TDataSource *DataSource2;
        TDataSource *PrintDataSource;
        TADOConnection *ADOConnection1;
        TADOTable *Table1;
        TADOQuery *Query1;
        TADOQuery *PrintQuery;
        TADOQuery *QueryForAll;
        TDataSource *DataSource3;
        TADOQuery *ZakQuery;
        TDataSource *ZakDataSource;
        TADOTable *LectorTable;
        TAutoIncField *ZakQueryCustNo;
        TWideStringField *ZakQueryCompany;
        TWideStringField *ZakQueryContact;
        TFloatField *ZakQuerySumOfItemsTotal;
        TFloatField *ZakQuerySumOfAmountPaid;
        TFloatField *ZakQueryRozdil;
        TAutoIncField *Table1OrderNo;
        TIntegerField *Table1CustNo;
        TDateTimeField *Table1SaleDate;
        TDateTimeField *Table1ShipDate;
        TIntegerField *Table1EmpNo;
        TWideStringField *Table1ShipToContact;
        TWideStringField *Table1ShipToAddr1;
        TWideStringField *Table1ShipToAddr2;
        TWideStringField *Table1ShipToCity;
        TWideStringField *Table1ShipToState;
        TWideStringField *Table1ShipToZip;
        TWideStringField *Table1ShipToCountry;
        TWideStringField *Table1ShipToPhone;
        TWideStringField *Table1ShipVIA;
        TWideStringField *Table1PO;
        TWideStringField *Table1Terms;
        TWideStringField *Table1PaymentMethod;
        TFloatField *Table1ItemsTotal;
        TFloatField *Table1TaxRate;
        TWideStringField *Table1Freight;
        TFloatField *Table1AmountPaid;
        TADOTable *CustomerTable;
        TDBEdit *dbeContactName;
        TGroupBox *xx;
        TBevel *Bevel20;
        TBevel *Bevel26;
        TBevel *Bevel19;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TSpeedButton *FirstOrders;
        TSpeedButton *PriorOrders;
        TSpeedButton *NextOrders;
        TSpeedButton *LastOrders;
        TSpeedButton *EditOrders;
        TSpeedButton *PostOrders;
        TSpeedButton *CancelOrders;
        TStaticText *StaticText2;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit3;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit5;
        TDBEdit *DBEdit6;
        TDBEdit *DBEdit7;
        TDBEdit *DBEdit8;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit11;
        TDBEdit *DBEdit12;
        TDBEdit *DBEdit13;
        TDBEdit *DBEdit14;
        TDBEdit *DBEdit15;
        TButton *Button2;
        TComboBox *LectorNumberComboBox;
        TComboBox *LectorNameComboBox;
        TButton *CopyButton;
        TBitBtn *Button7;
        TDBEdit *dbeCompany;
        TLabel *Label3;
        TLabel *Label7;
        TLabel *Label9;
        TDBEdit *dbeCustomerNumber;
        TBevel *Bevel4;
        TBevel *Bevel3;
        TBevel *Bevel2;
        TLabel *Label1;
        TBevel *Bevel5;
        TDBEdit *dbeAddr1;
        TButton *Button4;
        TButton *Button8;
        TButton *Button12;
        TButton *wwwButton;
        TButton *Button13;
        TButton *Button18;
        TButton *Button5;
        TButton *Button11;
        TButton *Button17;
        TButton *Button19;
        TButton *Button20;
        TButton *Button14;
        TButton *Button15;
        TButton *PrintButton;
        TBitBtn *BitBtn2;
        TButton *Button16;
        TImage *Image7;
        TBitBtn *BitBtn1;
        TComboBox *CustomerComboBox;
        TDBEdit *dbeState;
        TLabel *Label5;
        TBevel *Bevel7;
        TLabel *Label6;
        TDBEdit *dbeZip;
        TBevel *Bevel8;
        TLabel *Label11;
        TBevel *Bevel9;
        TDBEdit *dbePhone;
        TLabel *Label12;
        TDBEdit *dbeFax;
        TBevel *Bevel10;
        TLabel *Label8;
        TDBEdit *dbeCountry;
        TBevel *Bevel12;
        TLabel *Label2;
        TBevel *Bevel11;
        TDBEdit *dbeAddr2;
        TLabel *Label10;
        TBevel *Bevel13;
        TDBEdit *dbeLastInvDate;
        TLabel *Label13;
        TBevel *Bevel14;
        TDBEdit *dbeTaxRate;
        TStaticText *StaticText1;
        TButton *Button6;
        TButton *InsertCust;
        TSpeedButton *EditCust;
        TSpeedButton *PostCust;
        TSpeedButton *CancelCust;
        TBevel *Bevel16;
        TDBEdit *dbeCity;
        TLabel *Label4;
        TMainMenu *MainMenu1;
        TMenuItem *Soubor1;
        TMenuItem *KONEC1;
        TMenuItem *Zkaznk1;
        TMenuItem *Lektor1;
        TMenuItem *Lekce1;
        TMenuItem *Platby1;
        TMenuItem *Bilance1;
        TMenuItem *Help1;
        TMenuItem *EDAGLEADweb1;
        TMenuItem *Pomoc1;
        TMenuItem *Systeminfo1;
        TStaticText *StaticText3;
        TMenuItem *Hlavnformul1;
        TMenuItem *Hlavnformul2;
        TMenuItem *Hlavnformul3;
        TMenuItem *Hlavnformul4;
        TMenuItem *Rychlhledn1;
        TMenuItem *Rychlhledn2;
        TMenuItem *Tabulkovzobrazen1;
        TMenuItem *Tabulkovzobrazen2;
        TMenuItem *Detailpo10zznamech1;
        TMenuItem *Detailvechnyzznamy1;
        TMenuItem *Detailtabulkasautofiltry1;
        TMenuItem *Filtrpro1zkaznka1;
        TMenuItem *Deatil1;
        TMenuItem *PehledTiskzaoduenlekce1;
        TMenuItem *Pmtiskoduenchlekc1;
        TMenuItem *Zobrazenstavu1;
        TButton *LekceFilterButton;
        TDateTimePicker *FilterLekceDateTimePicker;
        TButton *Button1;
        TMenuItem *Podpora1;
        TDBGrid *DBGrid2;
        TStaticText *StaticText4;
        TLabel *Label31;
        TMenuItem *ManualonLINE1;
        TMenuItem *Sthnoutmanualdoc1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N1;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *LoklnManul1;
        TMenuItem *Poznmky1;
        TMenuItem *N8;
        TMenuItem *Poznamky1;
        TMenuItem *Poznmky2;
        TMenuItem *Poznmky3;
        TMenuItem *N12;
        TMenuItem *Poznmky4;
        TMenuItem *N13;
        TMenuItem *STAVYexcel1;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall TabControl1Change(TObject *Sender);
	void __fastcall DataSource2StateChange(TObject *Sender);
	void __fastcall DataSource1StateChange(TObject *Sender);
	void __fastcall FirstOrdersClick(TObject *Sender);
	void __fastcall PriorOrdersClick(TObject *Sender);
	void __fastcall NextOrdersClick(TObject *Sender);
	void __fastcall LastOrdersClick(TObject *Sender);
	void __fastcall EditOrdersClick(TObject *Sender);
	void __fastcall PostOrdersClick(TObject *Sender);
	void __fastcall CancelOrdersClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall CancelCustClick(TObject *Sender);
	void __fastcall PostCustClick(TObject *Sender);
	void __fastcall EditCustClick(TObject *Sender);
       //	void __fastcall LastCustClick(TObject *Sender);
       //	void __fastcall NextCustClick(TObject *Sender);
       //	void __fastcall PriorCustClick(TObject *Sender);
       //	void __fastcall FirstCustClick(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall InsertCustClick(TObject *Sender);
        void __fastcall wwwButtonClick(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
       // void __fastcall Button1Click(TObject *Sender);
       // void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Query1AfterScroll(TDataSet *DataSet);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Image4Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image9Click(TObject *Sender);
        void __fastcall Image10Click(TObject *Sender);
        void __fastcall Image11Click(TObject *Sender);
        void __fastcall Image12Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall LectorNumberComboBoxChange(TObject *Sender);
        void __fastcall LectorNameComboBoxChange(TObject *Sender);
        void __fastcall PrintButtonClick(TObject *Sender);
        void __fastcall ZakQueryCalcFields(TDataSet *DataSet);
        void __fastcall CopyButtonClick(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall Button19Click(TObject *Sender);
        void __fastcall Button20Click(TObject *Sender);
        void __fastcall CustomerComboBoxChange(TObject *Sender);
        void __fastcall KONEC1Click(TObject *Sender);
        void __fastcall Hlavnformul1Click(TObject *Sender);
        void __fastcall Rychlhledn1Click(TObject *Sender);
        void __fastcall Tabulkovzobrazen1Click(TObject *Sender);
        void __fastcall Hlavnformul2Click(TObject *Sender);
        void __fastcall Rychlhledn2Click(TObject *Sender);
        void __fastcall Tabulkovzobrazen2Click(TObject *Sender);
        void __fastcall Hlavnformul3Click(TObject *Sender);
        void __fastcall Detailpo10zznamech1Click(TObject *Sender);
        void __fastcall Detailvechnyzznamy1Click(TObject *Sender);
        void __fastcall Detailtabulkasautofiltry1Click(TObject *Sender);
        void __fastcall Filtrpro1zkaznka1Click(TObject *Sender);
        void __fastcall Hlavnformul4Click(TObject *Sender);
        void __fastcall Deatil1Click(TObject *Sender);
        void __fastcall PehledTiskzaoduenlekce1Click(TObject *Sender);
        void __fastcall Pmtiskoduenchlekc1Click(TObject *Sender);
        void __fastcall Zobrazenstavu1Click(TObject *Sender);
        void __fastcall webovprogramovrozhran1Click(TObject *Sender);
        void __fastcall EDAGLEADweb1Click(TObject *Sender);
        void __fastcall Pomoc1Click(TObject *Sender);
        void __fastcall LekceFilterButtonClick(TObject *Sender);
        void __fastcall Table1AfterScroll(TDataSet *DataSet);
        void __fastcall CustomerTableAfterScroll(TDataSet *DataSet);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Systeminfo1Click(TObject *Sender);
        void __fastcall Podpora1Click(TObject *Sender);
        void __fastcall ManualonLINE1Click(TObject *Sender);
        void __fastcall Sthnoutmanualdoc1Click(TObject *Sender);
        void __fastcall EDITACEvtabulce1Click(TObject *Sender);
        void __fastcall EDIATCEvtabulce1Click(TObject *Sender);
        void __fastcall EDITACEhlformul1Click(TObject *Sender);
        void __fastcall LoklnManul1Click(TObject *Sender);
        void __fastcall Poznmky1Click(TObject *Sender);
        void __fastcall Poznamky1Click(TObject *Sender);
        void __fastcall Poznmky2Click(TObject *Sender);
        void __fastcall Poznmky3Click(TObject *Sender);
        void __fastcall Poznmky4Click(TObject *Sender);
        void __fastcall STAVYexcel1Click(TObject *Sender);
        void __fastcall DynamickpehledEXCEL1Click(TObject *Sender);
        void __fastcall ExportzdrojovetabulkylekciproaplikaciEXCEL1Click(
          TObject *Sender);
       // void __fastcall Exportovanazdrojovatabulka1Click(TObject *Sender);
     //   void __fastcall OducenaComboBoxChange(TObject *Sender);

public:
	void __fastcall EnableDisableOrNav(void);
     //	void __fastcall EnableDisableCsNav(void);
        void __fastcall FillCustomerComboBox();
        AnsiString __fastcall GetText();
        void __fastcall TFormMain::FillLectorNumberComboBox();
        AnsiString SQL;
        bool CanFilter;
    virtual __fastcall TFormMain(TComponent *Owner);
};
//----------------------------------------------------------------------------
extern TFormMain *FormMain;
//----------------------------------------------------------------------------
#endif
