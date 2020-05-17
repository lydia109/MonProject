#include "ajouterjoueurinterface.h"
#include <QMessageBox>
#include "validationFormat.h"
ajouterJoueurInterface::ajouterJoueurInterface(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	ui.dateEdit->setDate(QDate::currentDate());

}

ajouterJoueurInterface::~ajouterJoueurInterface()
{

}
QString  ajouterJoueurInterface::reqNom() const
{
  return ui.lineEdit_Nom->text();
}

QString ajouterJoueurInterface::reqPrenom() const
{
	return ui.lineEdit_Prenom->text();
}

QString  ajouterJoueurInterface::reqPosition() const
{
	return ui.lineEdit_Position->text();
}

QString ajouterJoueurInterface::reqTelephone() const
{
	return ui.lineEdit_Telephone->text();
}
util:: Date ajouterJoueurInterface::reqDateNaissance() const
{
   return m_dateNaissance;
}
void  ajouterJoueurInterface::validerEnregistrement()
{
	if (!(util::validerFormatNom(ui.lineEdit_Nom->text().toStdString()))){
			QString message("Le nom du joueur doit etre valide ");
			QMessageBox::information(this, "ERREUR", message);
			return;
	}
	if (!(util::validerFormatNom(ui.lineEdit_Prenom->text().toStdString()))){
				QString message("Le prenom du joueur doit etre valide ");
				QMessageBox::information(this, "ERREUR", message);
				return;
		}
	if (!(util::validerTelephone(ui.lineEdit_Telephone->text().toStdString()))){
				QString message("Le numero du telephone du joueur doit etre valide ");
				QMessageBox::information(this, "ERREUR", message);
				return;
		}

	if (!((ui.lineEdit_Position->text().toStdString() == "ailier")||(ui.lineEdit_Position->text().toStdString() == "centre")||
			(ui.lineEdit_Position->text().toStdString() == "gardien")||(ui.lineEdit_Position->text().toStdString() == "défenseur"))){
		QString message("La position  du joueur doit etre valide ");
	    QMessageBox::information(this, "ERREUR", message);
		return;
	     }
	QDate dateCourant = QDate::currentDate();
			if ( !(dateCourant.year()-(ui.dateEdit->date().year()) >=15 and dateCourant.year()-(ui.dateEdit->date().year()) <=17) or
					ui.dateEdit->date() == dateCourant){
				QString message("Le joueur doit avoir l'age entre 15 ans et 17 ans , et la  date ne doit pas etre celle daujourdhui");
				QMessageBox::information(this, "ERREUR", message);
				return;
			}
			else {
				m_dateNaissance.asgDate(ui.dateEdit->date().day(), ui.dateEdit->date().month(), ui.dateEdit->date().year());
				accept();
			}


}
