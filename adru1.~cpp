//----------------------------------------------------------------------------
/*
void __fastcall TBasicForm::AddCustomerActionExecute(TObject *Sender)
{
int NextId = GetNextId("Customer","CustomerId");
Data->CustomerTable->Insert();
TMakeCustomerForm *pMakeCustomerForm = new TMakeCustomerForm(this);
if(pMakeCustomerForm->ShowModal()==mrOk)
{
        Data->CustomerTable->FieldByName("CustomerId")->AsInteger = NextId;
        Data->CustomerTable->Post();
        FillCustomerComboBox();
}else
{
        Data->CustomerTable->Cancel();
}
delete pMakeCustomerForm;
}
*/
//---------------------------------------------------------------------
//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "adru1.h"
#include "PrintUnit.h"
#include "zakaznik_lekce.h"
#include "SecondPrintFormUnit.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent *Owner)
  : TForm(Owner)
{

SQL="select * from customer where contact like '%A'";
}
//---------------------------------------------------------------------
void __fastcall TFormMain::BitBtn1Click(TObject* /*Sender*/)
{    Close();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::TabControl1Change(TObject* /*Sender*/)
{
     /*
      char cParam[3] = {'A','%',0};
     AnsiString  sParam = (AnsiString)"paramVar1";
     AnsiString Pismenko = (char)(65+TabControl1->TabIndex);
     AnsiString DD= "CONTACT = '%" +AnsiString(Pismenko)+"'";
      Query1->FilterOptions>>foNoPartialCompare;
      Query1->Filter = "CONTACT = '" +AnsiString(Pismenko)+"*'";
      */

/*char cParam[3] = {'A','%',0};
     AnsiString  sParam = (AnsiString)"paramVar1";
     AnsiString Pismenko = (char)(65+TabControl1->TabIndex);
     cParam[0] = (char)(65+TabControl1->TabIndex);

     Query1->Cancel();    Table1->Cancel();
     Table1->Close();     Query1->Close();

     SQL= "select * from customer where contact like '"+Pismenko+"%'";


     Query1->SQL->Clear();
     Query1->SQL->Add(SQL);


     Query1->Open();      Table1->Open();
     EnableDisableCsNav();
     EnableDisableOrNav();
     */
}

//----------------------------------------------------------------------------
//void __fastcall TFormMain::FirstCustClick(TObject* /*Sender*/)
//{    Query1->First(); EnableDisableCsNav();
//}
//----------------------------------------------------------------------------
//void __fastcall TFormMain::PriorCustClick(TObject* /*Sender*/)
//{    Query1->Prior(); EnableDisableCsNav();
//}
//----------------------------------------------------------------------------
//void __fastcall TFormMain::NextCustClick(TObject* /*Sender*/)
//{    Query1->Next(); EnableDisableCsNav();
//}
//----------------------------------------------------------------------------
//void __fastcall TFormMain::LastCustClick(TObject* /*Sender*/)
//{    Query1->Last(); EnableDisableCsNav();
//}
//----------------------------------------------------------------------------
void __fastcall TFormMain::EditCustClick(TObject* /*Sender*/)
{
CustomerTable->Edit();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::PostCustClick(TObject* /*Sender*/)
{
        AnsiString X=dbeContactName->Text;
        CustomerTable->Post();

        FillCustomerComboBox();
        CustomerComboBox->ItemIndex=CustomerComboBox->Items->IndexOf(X);     //necha zobr. akt. zak.
        CustomerComboBoxChange(this);


}
//----------------------------------------------------------------------------
void __fastcall TFormMain::CancelCustClick(TObject* /*Sender*/)
{
        AnsiString X=dbeContactName->Text;
        CustomerTable->Cancel();
        FillCustomerComboBox();
        CustomerComboBox->ItemIndex=CustomerComboBox->Items->IndexOf(X);     //necha zobr. akt. zak.
        CustomerComboBoxChange(this);
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::FormClose(TObject* /*Sender*/,
     TCloseAction & /*Action*/)
{    Table1->Cancel();  Table1->Close();
     Query1->Cancel();  Query1->Close();
     CustomerTable->Cancel();  CustomerTable->Close();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::FormCreate(TObject* /*Sender*/)
{
        CanFilter=false;
        LectorNumberComboBox->Items->Clear();
        LectorNameComboBox->Items->Clear();
        CustomerComboBox->Items->Clear();

        Table1->Open();
        CustomerTable->Open();
        Query1->Open();
        EnableDisableOrNav();
      //  EnableDisableCsNav();
        FillLectorNumberComboBox();
        FillCustomerComboBox();
        CustomerComboBox->ItemIndex=0;


}
//----------------------------------------------------------------------------
void __fastcall TFormMain::CancelOrdersClick(TObject* /*Sender*/)
{
        Table1->Cancel();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::PostOrdersClick(TObject* /*Sender*/)
{
 Table1->FieldByName("CustNo")->AsInteger  =  CustomerTable->FieldByName("CustNo")->AsInteger;
 Table1->Post();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::EditOrdersClick(TObject* /*Sender*/)
{    Table1->Edit();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::LastOrdersClick(TObject* /*Sender*/)
{    Table1->Last(); EnableDisableOrNav();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::NextOrdersClick(TObject* /*Sender*/)
{    Table1->Next(); EnableDisableOrNav();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::PriorOrdersClick(TObject* /*Sender*/)
{    Table1->Prior(); EnableDisableOrNav();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::FirstOrdersClick(TObject* /*Sender*/)
{    Table1->First(); EnableDisableOrNav();
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::EnableDisableOrNav()
{

     FirstOrders->Enabled = (!Table1->Bof ? True : False );
     PriorOrders->Enabled = (!Table1->Bof ? True : False );
     NextOrders->Enabled  = (!Table1->Eof ? True : False );
     LastOrders->Enabled  = (!Table1->Eof ? True : False );


}
//----------------------------------------------------------------------------
/*void __fastcall TFormMain::EnableDisableCsNav()
{
     FirstCust->Enabled = (!Query1->Bof ? True : False );
     PriorCust->Enabled = (!Query1->Bof ? True : False );
     NextCust->Enabled  = (!Query1->Eof ? True : False );
     LastCust->Enabled  = (!Query1->Eof ? True : False );

} */
//----------------------------------------------------------------------------
void __fastcall TFormMain::DataSource1StateChange(TObject* /*Sender*/)
{    switch(CustomerTable->State) {
        case dsInactive   : {
             EditCust->Enabled = False;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
        case dsBrowse     : {
             EditCust->Enabled = True;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
        case dsEdit       : {
             EditCust->Enabled = False;
             PostCust->Enabled = True;
             CancelCust->Enabled = True;
             break;
        }
        case dsInsert     : {
             EditCust->Enabled = False;
             PostCust->Enabled = True;

             CancelCust->Enabled = True;
             break;
        }
        case dsSetKey     : {
             EditCust->Enabled = False;
             PostCust->Enabled = True;
             CancelCust->Enabled = False;
             break;
        }
        case dsCalcFields : {
             EditCust->Enabled = False;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
        case dsNewValue  : {
             EditCust->Enabled = False;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
        case dsOldValue  : {
             EditCust->Enabled = False;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
        case dsFilter     : {
             EditCust->Enabled = False;
             PostCust->Enabled = False;
             CancelCust->Enabled = False;
             break;
        }
     }
}
//----------------------------------------------------------------------------
void __fastcall TFormMain::DataSource2StateChange(TObject* /*Sender*/)
{    switch(Table1->State) {
        case dsInactive   : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = False;
             CancelOrders->Enabled = False;
             break;
        }
        case dsBrowse     : {
             EditOrders->Enabled = True;
             PostOrders->Enabled = False;
            CancelOrders->Enabled = False;
             break;
        }
        case dsEdit       : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = True;
            CancelOrders->Enabled = True;
             break;
        }
        case dsInsert     : {
             EditOrders->Enabled = False;
             CancelOrders->Enabled = True;
             PostOrders->Enabled = True;
             break;
        }
        case dsSetKey     : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = True;
//             CancelOrders->Enabled = False;
             break;
        }
        case dsCalcFields : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = False;
  //           CancelOrders->Enabled = False;
             break;
        }
        case dsNewValue  : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = False;
    //         CancelOrders->Enabled = False;
             break;
        }
        case dsOldValue  : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = False;
      //       CancelOrders->Enabled = False;
             break;
        }
        case dsFilter     : {
             EditOrders->Enabled = False;
             PostOrders->Enabled = False;
        //     CancelOrders->Enabled = False;
             break;
        }
     }
}
void __fastcall TFormMain::Button2Click(TObject *Sender)
{
FillLectorNumberComboBox();
Table1->Insert();
Table1->FieldByName("CustNo")->AsInteger  =  CustomerTable->FieldByName("CustNo")->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::InsertCustClick(TObject *Sender)
{
CustomerTable->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::wwwButtonClick(TObject *Sender)
{
  ShellExecute(NULL,"open","c:\\fine\\employee.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::FormCloseQuery(TObject *Sender, bool &CanClose)
{
        switch(Table1->State)
        {
        case dsEdit:
                {
                Application->MessageBox("Editujete Lekci, dokonèete operaci!","!!!POZOR!!!");
                CanClose = false;
                };break;

        case dsInsert   :
                {
                Application->MessageBox("Vkládáte Lekci, dokonèete operaci!","Nelze ukonèit");
                CanClose = false;
                }
             break;
        }
        switch(CustomerTable->State)
        {
        case dsEdit:
                {
                Application->MessageBox("Editujete Zákazníka","!!!POZOR!!!");
                CanClose = false;
                };break;

        case dsInsert   :
                {
                Application->MessageBox("Vkládáte Zákazníka, dokonèete operaci","Nelze ukonèit");
                CanClose = false;
                }
             break;
        }

}
//---------------------------------------------------------------------------

//void __fastcall TFormMain::Button1Click(TObject *Sender)
//{

/*Tzak_lekce * pzak_lekce = new Tzak_lekce(this);
pzak_lekce->QuickRepLekce->Preview();
delete pzak_lekce;

 /

TPrintForm * pPrintForm = new TPrintForm(this);
pPrintForm->QuickRep1->Preview();
delete pPrintForm;
/*
TPrintForm * pPrintForm = new TPrintForm(this);
pPrintForm->QuickRep1->Preview();
delete pPrintForm;
*/
//}
//---------------------------------------------------------------------------

//void __fastcall TFormMain::Button3Click(TObject *Sender)
//{
 /*
        Tzak_lekce *pQuickRepLekce = new TQuickRep(this);
//        pPrintForm->ShowModal();
        ZakQuery->Open();
        pQuickRepLekce->QuickRep->Preview();
//        pPrintForm->QuickRep->Print();
        delete pQuickRepLekce;

/*TPrintForm * pPrintForm = new TPrintForm(this);
pPrintForm->QuickRep1->Preview();
delete pPrintForm;
  */
//}
//---------------------------------------------------------------------------





void __fastcall TFormMain::Button4Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_zakaznik.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------






void __fastcall TFormMain::Button6Click(TObject *Sender)
{
CustomerTable->Delete();
        FillCustomerComboBox();
        CustomerComboBox->ItemIndex=0;
        CustomerComboBoxChange(this);

}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button7Click(TObject *Sender)
{
Table1->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Query1AfterScroll(TDataSet *DataSet)
{
QueryForAll->Close();

AnsiString SQL = "SELECT sum(ItemsTotal) - sum(AmountPaid)as Rozdil   from orders where custno = " +AnsiString(CustomerTable->FieldByName("CustNo")->AsInteger);
QueryForAll->SQL->Clear();
QueryForAll->SQL->Add(SQL);
QueryForAll->Open();

}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button8Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_sort.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button5Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\orders_lekce_2.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button9Click(TObject *Sender)
{
Tzak_lekce * pzak_lekce = new Tzak_lekce(this);
pzak_lekce->QuickRepLekce->Preview();
delete pzak_lekce;
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Button10Click(TObject *Sender)
{
Tzak_lekce * pzak_lekce = new Tzak_lekce(this);
pzak_lekce->ShowModal();
delete pzak_lekce;
}

//---------------------------------------------------------------------------

void __fastcall TFormMain::Image4Click(TObject *Sender)
{
ShellExecute(NULL,"open","http://www.agenturafine.cz ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\employee.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image2Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_zakaznik.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image5Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\orders_lekce_2.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image3Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\buttonsfine2www.html ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image6Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\bylance.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image8Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Lektor_detail.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image9Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Platby01.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image10Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\fakturace.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image11Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_sort.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image12Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_rev.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button12Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_rev.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button13Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Lektor_detail.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button14Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\fakturace.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button15Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Platby01.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button16Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\bilance.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FillLectorNumberComboBox()
{

        LectorNumberComboBox->Clear();
        LectorNameComboBox->Clear();
        LectorTable->Open();
        LectorTable->First();
        do
        {

                LectorNumberComboBox->Items->Add(AnsiString(LectorTable->FieldByName("empno")->AsInteger));
                LectorNameComboBox->Items->Add(AnsiString(LectorTable->FieldByName("lastname")->AsString));
                LectorTable->Next();

        }
        while(!LectorTable->Eof);
        int i =0;
}


void __fastcall TFormMain::LectorNumberComboBoxChange(TObject *Sender)
{
        AnsiString C="";
        TLocateOptions Opts;

        Opts.Clear();


        LectorTable->Locate("empno", Variant(LectorNumberComboBox->Text), Opts);
        C=LectorTable->FieldByName("lastname")->AsString;
        LectorNameComboBox->ItemIndex = LectorNameComboBox->Items->IndexOf(C);

        DBEdit2->Text = LectorNumberComboBox->Text;
        DBEdit12->Text =LectorNameComboBox->Text;

}
//---------------------------------------------------------------------------

void __fastcall TFormMain::LectorNameComboBoxChange(TObject *Sender)
{
        AnsiString C="";
        TLocateOptions Opts;

        Opts.Clear();

        LectorTable->Locate("lastname", Variant(LectorNameComboBox->Text), Opts);
        C=AnsiString(LectorTable->FieldByName("empno")->AsInteger);
        LectorNumberComboBox->ItemIndex = LectorNumberComboBox->Items->IndexOf(C);

        DBEdit2->Text = LectorNumberComboBox->Text;
        DBEdit12->Text =LectorNameComboBox->Text;

}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintButtonClick(TObject *Sender)
{

        TNextPrintForm *pPrintForm = new TNextPrintForm(this);
//        pPrintForm->ShowModal();
        ZakQuery->Open();
        pPrintForm->QuickRep->Preview();
//        pPrintForm->QuickRep->Print();
        delete pPrintForm;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ZakQueryCalcFields(TDataSet *DataSet)
{
ZakQueryRozdil->Value = ZakQuerySumOfItemsTotal->Value-ZakQuerySumOfAmountPaid->Value;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::CopyButtonClick(TObject *Sender)
{

int CustNo;
TDateTime SaleDate;
TDateTime ShipDate;
int EmpNo;
AnsiString ShipToContact;
AnsiString ShipToAddr1;
AnsiString ShipToAddr2;
AnsiString ShipToCity;
AnsiString ShipToState;
AnsiString ShipToZip;
AnsiString ShipToCountry;
AnsiString ShipToPhone;
AnsiString ShipVIA;
AnsiString PO;
AnsiString Terms;
AnsiString PaymentMethod;
float ItemsTotal;
float TaxRate;
AnsiString Freight;
float AmountPaid;

FillLectorNumberComboBox();

CustNo = Table1->FieldByName("CustNo")->AsInteger;
SaleDate = Table1->FieldByName("SaleDate")->AsDateTime;
ShipDate = Table1->FieldByName("ShipDate")->AsDateTime;
EmpNo = Table1->FieldByName("EmpNo")->AsInteger;
ShipToAddr1 = Table1->FieldByName("ShipToAddr1")->AsString;
ShipToAddr2 = Table1->FieldByName("ShipToAddr2")->AsString;
ShipToCity = Table1->FieldByName("ShipToCity")->AsString;
ShipToState = Table1->FieldByName("ShipToState")->AsString;
ShipToZip = Table1->FieldByName("ShipToZip")->AsString;
ShipToCountry = Table1->FieldByName("ShipToCountry")->AsString;
ShipToPhone = Table1->FieldByName("ShipToPhone")->AsString;
ShipVIA = Table1->FieldByName("ShipVIA")->AsString;
PO = Table1->FieldByName("PO")->AsString;
Terms = Table1->FieldByName("Terms")->AsString;
PaymentMethod = Table1->FieldByName("PaymentMethod")->AsString;
ItemsTotal = (float)Table1->FieldByName("ItemsTotal")->AsFloat;
TaxRate = (float)Table1->FieldByName("TaxRate")->AsFloat;
Freight = Table1->FieldByName("Freight")->AsString;
AmountPaid = (float)Table1->FieldByName("AmountPaid")->AsFloat;
Table1->Insert();

Table1->FieldByName("CustNo")->AsInteger = CustNo;
Table1->FieldByName("SaleDate")->AsDateTime=SaleDate  ;
Table1->FieldByName("ShipDate")->AsDateTime = ShipDate;
Table1->FieldByName("EmpNo")->AsInteger=EmpNo;
Table1->FieldByName("ShipToAddr1")->AsString=ShipToAddr1 ;
Table1->FieldByName("ShipToAddr2")->AsString=ShipToAddr2;
Table1->FieldByName("ShipToCity")->AsString=ShipToCity;
Table1->FieldByName("ShipToState")->AsString=ShipToState;
Table1->FieldByName("ShipToZip")->AsString=ShipToZip;
Table1->FieldByName("ShipToCountry")->AsString=ShipToCountry;
Table1->FieldByName("ShipToPhone")->AsString=ShipToPhone;
Table1->FieldByName("ShipVIA")->AsString=ShipVIA;
Table1->FieldByName("PO")->AsString=PO ;
Table1->FieldByName("Terms")->AsString=Terms;
Table1->FieldByName("PaymentMethod")->AsString=PaymentMethod;
Table1->FieldByName("ItemsTotal")->AsFloat=(float)ItemsTotal;
Table1->FieldByName("TaxRate")->AsFloat= (float)TaxRate;
Table1->FieldByName("Freight")->AsString=Freight;
Table1->FieldByName("AmountPaid")->AsFloat=(float)AmountPaid;

}
//---------------------------------------------------------------------------


void __fastcall TFormMain::BitBtn2Click(TObject *Sender)
{

        TNextPrintForm *pPrintForm = new TNextPrintForm(this);
//        pPrintForm->ShowModal();
        ZakQuery->Open();
  //      pPrintForm->QuickRep->Preview();
      pPrintForm->QuickRep->Print();
        delete pPrintForm;
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::Button11Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\detail_lekci.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button17Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\detail_lekci_all.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button18Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\employee_lektor_qs.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button19Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\lekce_detail_all.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button20Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Lekce_detail_all_01.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------


void __fastcall TFormMain::CustomerComboBoxChange(TObject *Sender)
{
 if(!Query1->Filtered) Query1->Filtered = true;
 CustomerTable->Filter = "CONTACT ='" +AnsiString(CustomerComboBox->Items->Strings[CustomerComboBox->ItemIndex])+"'";
 EnableDisableOrNav();
 //EnableDisableCsNav();
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FillCustomerComboBox()
{
CanFilter=false;
CustomerComboBox->Clear();
CustomerTable->Close();
CustomerTable->Filter="";
CustomerTable->Open();


        AnsiString SQL="";
        CustomerTable->Open();

        CustomerTable->First();
        while(!CustomerTable->Eof)
        {
         CustomerComboBox->Items->Add(CustomerTable->FieldByName("CONTACT")->AsString);
         CustomerTable->Next();

        }
        CustomerComboBox->Sorted = true;



CanFilter=true;
}



void __fastcall TFormMain::KONEC1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------



void __fastcall TFormMain::Hlavnformul1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_zakaznik.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Rychlhledn1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_sort.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Tabulkovzobrazen1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_rev.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Hlavnformul2Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\employee.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Rychlhledn2Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\employee_lektor_qs.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Tabulkovzobrazen2Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Lektor_detail.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Hlavnformul3Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\orders_lekce_2.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Detailpo10zznamech1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\detail_lekci.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Detailvechnyzznamy1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\detail_lekci_all.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Detailtabulkasautofiltry1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\lekce_detail_all.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Filtrpro1zkaznka1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Lekce_detail_all_01.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Hlavnformul4Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\fakturace.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Deatil1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Platby01.htm ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PehledTiskzaoduenlekce1Click(TObject *Sender)
{

        TNextPrintForm *pPrintForm = new TNextPrintForm(this);
        ZakQuery->Open();
        pPrintForm->QuickRep->Preview();
        delete pPrintForm;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Pmtiskoduenchlekc1Click(TObject *Sender)
{

        TNextPrintForm *pPrintForm = new TNextPrintForm(this);
        ZakQuery->Open();
      pPrintForm->QuickRep->Print();
        delete pPrintForm;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Zobrazenstavu1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\bilance.htm ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::webovprogramovrozhran1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\buttonsfine2www.html ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::EDAGLEADweb1Click(TObject *Sender)
{
        ShellExecute(NULL,"open","http://sweb.cz/edaglead/ ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TFormMain::Pomoc1Click(TObject *Sender)
{
        ShellExecute(NULL,"open","http://sweb.cz/edaglead/readme.html",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::LekceFilterButtonClick(TObject *Sender)
{
 AnsiString U=GetText()+" AND SaleDate='"+AnsiString(FilterLekceDateTimePicker->Date.DateString())+"'";
 Table1->Filter=U;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Table1AfterScroll(TDataSet *DataSet)
{
if(CanFilter)CustomerTable->Filter = "CustNo="+GetText();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::CustomerTableAfterScroll(TDataSet *DataSet)
{

if(CanFilter){
                Table1->Filter = GetText();


                QueryForAll->Close();
                AnsiString SQL = "SELECT sum(ItemsTotal) - sum(AmountPaid)as Rozdil   from orders where custno = " +AnsiString(CustomerTable->FieldByName("CustNo")->AsInteger);
                QueryForAll->SQL->Clear();
                QueryForAll->SQL->Add(SQL);
                QueryForAll->Open();

             }
}
AnsiString __fastcall TFormMain::GetText()
{
AnsiString Text;
Text ="CustNo="+AnsiString(CustomerTable->FieldByName("CustNo")->AsInteger);
return Text;
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Button1Click(TObject *Sender)
{
if(CanFilter)Table1->Filter = GetText();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image7Click(TObject *Sender)
{
ShellExecute(NULL,"open","http://sweb.cz/edaglead/ ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Systeminfo1Click(TObject *Sender)
{
  ShellExecute(NULL,"open","http://sweb.cz/edaglead/licence_fine.html ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Podpora1Click(TObject *Sender)
{
  ShellExecute(NULL,"open","mailto:edaglead@seznam.cz",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ManualonLINE1Click(TObject *Sender)
{
    ShellExecute(NULL,"open","http://sweb.cz/edaglead/manual.html ",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Sthnoutmanualdoc1Click(TObject *Sender)
{
ShellExecute(NULL,"open","http://sweb.cz/edaglead/manual.doc ",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::EDITACEvtabulce1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\customer_rev_edit.htm",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::EDIATCEvtabulce1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\lektor_detail_editace.htm",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::EDITACEhlformul1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\orders_lekce_editace.htm",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::LoklnManul1Click(TObject *Sender)
{
 ShellExecute(NULL,"open","c:\\fine\\manual.doc",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Poznmky1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\poznamky.txt",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Poznamky1Click(TObject *Sender)
{
  ShellExecute(NULL,"open","c:\\fine\\poznamky_zak.txt",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Poznmky2Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\poznamky_lektor.txt",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Poznmky3Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\poznamky_lekce.txt",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Poznmky4Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\poznamky_platby.txt",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::STAVYexcel1Click(TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\stavy.xls",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::DynamickpehledEXCEL1Click(TObject *Sender)
{
 ShellExecute(NULL,"open","c:\\fine\\dynprehllek.xls",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ExportzdrojovetabulkylekciproaplikaciEXCEL1Click(
      TObject *Sender)
{
ShellExecute(NULL,"open","c:\\fine\\Dotaz_oduc_lekce_zak.htm",NULL,NULL,SW_SHOWNORMAL);
}


