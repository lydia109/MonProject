#include "ajoutentraineurinterface.h"
#include <QMessageBox>
#include "validationFormat.h"
#include <string>
ajoutEntraineurInterface::ajoutEntraineurInterface(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	ui.dateEdit->setDate(QDate::currentDate());
}

ajoutEntraineurInterface::~ajoutEntraineurInterface()
{

}
QString  ajoutEntraineurInterface::reqNom() const
{
  return ui.lineEdit_Nom->text();
}

QString ajoutEntraineurInterface::reqSexe() const
{
	return ui.lineEdit_Sexe->text();

}
QString ajoutEntraineurInterface::reqPrenom() const
{
	return ui.lineEdit_Prenom->text();
}

QString  ajoutEntraineurInterface::reqRAMQ() const
{
	return ui.lineEdit_RAMQ->text();
}

QString ajoutEntraineurInterface::reqTelephone() const
{
	return ui.lineEdit_Telephone->text();
}
util:: Date ajoutEntraineurInterface ::reqDateNaissance() const
{
   return m_dateNaissance;
}
void  ajoutEntraineurInterface::validerEnregistrement()
{
	if (!(util::validerFormatNom(ui.lineEdit_Nom->text().toStdString()))){
				QString message("Le nom de l'entraineur doit etre valide ");
				QMessageBox::information(this, "ERREUR", message);
				return;
		}
   if (!(util::validerFormatNom(ui.lineEdit_Prenom->text().toStdString()))){
					QString message("Le prenom de l'entraineur doit etre valide ");
					QMessageBox::information(this, "ERREUR", message);
					return;
			}
   if (!(util::validerTelephone(ui.lineEdit_Telephone->text().toStdString()))){
					QString message("Le numero du telephone de l'entraineur  doit etre valide ");
					QMessageBox::information(this, "ERREUR", message);
					return;
			}

   if (!(((ui.lineEdit_Sexe->text().toStdString())[0])=='M' or ((ui.lineEdit_Sexe->text().toStdString())[0])=='F') )
              {
       		QString message("Le sexe de l'entraineur doit etre M ou bien F ");
       	    QMessageBox::information(this, "ERREUR", message);
       		  return;
              }


   if (!(util::validerNumRAMQ(ui.lineEdit_RAMQ->text().toStdString(),
		   ui.lineEdit_Nom->text().toStdString(),
		   ui.lineEdit_Prenom->text().toStdString(),
		   ui.dateEdit->date().day(),
		   ui.dateEdit->date().month(),
		   ui.dateEdit->date().year(),
		   (ui.lineEdit_Sexe->text().toStdString())[0])))
         {
  					QString message("Le numero de RAMQ de l'entraineur doit etre valide ");
  					QMessageBox::information(this, "ERREUR", message);
  					return;
         }

       QDate dateCourant = QDate::currentDate();
      if (  !(dateCourant.year()-(ui.dateEdit->date().year()) >=15) or ui.dateEdit->date() == dateCourant){
	    	QString message("L'entraineur doit etre majeur , et la  date ne doit pas etre celle daujourdhui");
		    QMessageBox::information(this, "ERREUR", message);
			return;
		}
	else {
		m_dateNaissance.asgDate(ui.dateEdit->date().day(), ui.dateEdit->date().month(), ui.dateEdit->date().year());
			accept();
		}




}

