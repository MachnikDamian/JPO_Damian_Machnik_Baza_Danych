#include "mainwindow.h"
#include "./ui_mainwindow.h"
using namespace std;

vector <member> database(0);            // wektor będący bazą danych
vector <int> FoundDatabase(0);          // wektor pomocniczy przy funkcji szukającej członka

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile File("MemberList.txt");           // utworzenie pliku File
    if (File.open(QIODevice::ReadOnly)){    // otwarcie pliku File do odczytu
        QTextStream stream(&File);
        while (stream.atEnd() == false){    // analiza danych z pliku i wpisanie do bazy danych
            dataline = stream.readLine();
            wordlist = dataline.split(" ");
            wordlistiterator = 0;
            foreach(word, wordlist){
                switch (wordlistiterator){
                case 0 :
                    NewMember.Name =  word;
                    break;
                case 1 :
                    NewMember.Surname =  word;
                    break;
                case 2:
                    NewMember.Age = word;
                    break;
                case 3:
                    NewMember.Sex = word;
                    break;
                case 4:
                    NewMember.Level = word;
                    database.push_back(NewMember);
                }
                wordlistiterator++;
            }
        }
    }
    File.close();

    ui->SexBox->addItem("Different");       // dodanie opcji do comboBoxa z płciami
    ui->SexBox->addItem("Male");
    ui->SexBox->addItem("Female");

    ui->LevelBox->addItem("Begginer");      // dodanie opcji do comboBoxa z poziomami
    ui->LevelBox->addItem("Amateur");
    ui->LevelBox->addItem("Proffesional");
    ui->LevelBox->addItem("Master");

    ui->ChangeLevelBox->addItem("Begginer"); //dodanie opcji do comboBoxa z poziomami do funkcji zmiany poziomu
    ui->ChangeLevelBox->addItem("Amateur");
    ui->ChangeLevelBox->addItem("Proffesional");
    ui->ChangeLevelBox->addItem("Master");
}

MainWindow::~MainWindow()
{
    delete ui;
}


// ------------------------------------------- dodawanie członków -------------------------------------------
void MainWindow::on_AddButton_clicked()
{
    NewMember.Name =  (ui->lineAddName->text()).simplified();           //odczyt danych od urzytkownika oraz usuwanie z nich "spacji"
    NewMember.Name.replace(" ","");
    NewMember.Surname =  (ui->lineAddSurname->text()).simplified();
    NewMember.Surname.replace(" ","");
    NewMember.Age =  (ui->lineAddAge->text()).simplified();
    NewMember.Age.replace(" ","");
    NewMember.Sex = ui->SexBox->currentText();
    NewMember.Level = ui->LevelBox->currentText();

    Memberdata = NewMember.Name + " " + NewMember.Surname + " " + NewMember.Age + " " + NewMember.Sex + " " + NewMember.Level;  // zmienna przechowująca dane członka
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Czy chcesz dodać członka?",  Memberdata, QMessageBox::Yes | QMessageBox::No); // okno potwierdzające dodanie członka
    if(reply == QMessageBox::Yes ){
        database.push_back(NewMember);                                              // dodanie członka do bazy danych
        QMessageBox::information(this, "NewMember", "Dodano : " + Memberdata);      // okno informujące o dodaniu członka
    }
}

// ------------------------------------------- wypisywanie oraz zapisywanie listy członków -------------------------------------------
void MainWindow::on_PrintButton_clicked()
{
    ListOfMembers = "";
    for(int i = 0; i<database.size(); i++){             // tworzenie listy członków w zmiennej ListOfMembers
        ListOfMembers += database[i].Name + " " + database[i].Surname + " " +  database[i].Age + " " + database[i].Sex + " " + database[i].Level + " \n";
      }
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Czy chcesz zapisać listę ?", "Lista : \n" + ListOfMembers, QMessageBox::Yes | QMessageBox::No); //okno dopytujące o zapisanie wyswietlonej listy
    if(reply == QMessageBox::Yes ){
        QFile File("MemberList.txt");                                   // utworzenie pliku File
        if (File.open(QIODevice::Truncate | QIODevice::ReadWrite)){     // otworzenie pliku do zapisu i odczytu z opcją czyszczenia pliku przy ponownym zapisie
            QTextStream stream(&File);
            stream << ListOfMembers;                                    // prześlij dane o członkach
        }
        File.close();                                                   // zamknij plik
    }
}

// ------------------------------------------- szukanie członków -------------------------------------------
void MainWindow::on_FindButton_clicked()
{
    FoundDatabase.clear();

    NameToFind = (ui->lineFindName->text()).simplified();               //odczyt danych od użytkownika z usuwaniem spacji
    NameToFind.replace( " ", "" );

    for (int i{}; i < database.size(); i++) {                           // porównanie danej wpisanej przez użytkownika z imionami oraz nazwiskami z bazy danych
            if (!QString::compare(database[i].Name, NameToFind)) {
                int FoundDataNumber = i;
                FoundDatabase.push_back(FoundDataNumber);
            }
            if (!QString::compare(database[i].Surname, NameToFind)) {
                int FoundDataNumber = i;
                FoundDatabase.push_back(FoundDataNumber);
            }
        }

    if(FoundDatabase.size()>0){                                         // wypisanie danych znalezionych członków
        ListOfMembers = "Znaleziono: \n\n";
        for(int i = 0; i<FoundDatabase.size(); i++){
            ListOfMembers += database[FoundDatabase[i]].Name + " " + database[FoundDatabase[i]].Surname + " " +  database[FoundDatabase[i]].Age + " " + database[FoundDatabase[i]].Sex + " " + database[FoundDatabase[i]].Level + " \n";
        }
        QMessageBox::information(this, "PrintFoundMembers", ListOfMembers);
    }
    else{
    QMessageBox::information(this, "No member", "Nie ma takiego członka");  // wypisywanie informacji o braku znalezionych członków
    }
}

// ------------------------------------------- usuwanie członków -------------------------------------------
void MainWindow::on_DeleteButton_clicked()
{
    NameToFind = (ui->lineDeleteName->text()).simplified();     //odczyt danych od użytkownika z usuwaniem spacji
    NameToFind.replace( " ", "" );
    SurnameToFind = (ui->lineDeleteSurname->text()).simplified();
    SurnameToFind.replace( " ", "" );
    AgeToFind = (ui->lineDeleteAge->text()).simplified();
    AgeToFind.replace( " ", "" );
    ListOfMembers = "";
    delErr = 0;

    for (int i{}; i < database.size(); i++) {                           // prównywanie danych od użytkownika z bazą danych
        if (!QString::compare(database[i].Name, NameToFind)){
            if( !QString::compare(database[i].Surname, SurnameToFind)){
                if( !QString::compare(database[i].Age, AgeToFind)) {    // znaleziony członek do usunięcia
                    delErr=1;
                    Memberdata = database[i].Name + " " + database[i].Surname + " " +  database[i].Age + " " + database[i].Sex + " " + database[i].Level;
                    QMessageBox::StandardButton reply = QMessageBox::question(this, "Czy chcesz usunąć członka ?",  Memberdata, QMessageBox::Yes | QMessageBox::No); //potwierdzenie usuwania członka
                    if(reply == QMessageBox::Yes ){
                        database.erase(database.begin() + i);                         //usunięcie członka
                        QMessageBox::information(this, "deleteMembers", "Usuwam: " + Memberdata);
                    }
               }
            }
        }
    }
    if (delErr == 0){
        QMessageBox::information(this, "No member", "Nie ma takiego członka");  // informacja o nie znalezionym członku
    }
}

// ------------------------------------------- zmiana poziomu członków -------------------------------------------
void MainWindow::on_ChangeButton_clicked()
{
    NameToFind = (ui->lineChangeName->text()).simplified();         //odczyt danych od użytkownika z usuwaniem spacji
    NameToFind.replace( " ", "" );
    SurnameToFind = (ui->lineChangeSurname->text()).simplified();
    SurnameToFind.replace( " ", "" );
    AgeToFind = (ui->lineChangeAge->text()).simplified();
    AgeToFind.replace( " ", "" );
    NewLevel = (ui->ChangeLevelBox->currentText()).simplified();
    NewLevel.replace( " ", "" );
    Memberdata = "";
    ChangeErr= 0 ;

    for (int i{}; i < database.size(); i++) {                          // prównywanie danych od użytkownika z bazą danych
        if (!QString::compare(database[i].Name, NameToFind)){
            if( !QString::compare(database[i].Surname, SurnameToFind)){
               if( !QString::compare(database[i].Age, AgeToFind)) {     // znalezienie członka
                   ChangeErr = 1 ;
                   Memberdata = database[i].Name + " " + database[i].Surname + " " +  database[i].Age + " " + database[i].Sex;
                   QMessageBox::StandardButton reply = QMessageBox::question(this, "Czy chcesz zmienić poziom członka ?",  Memberdata + " z " + database[i].Level + " na " + NewLevel , QMessageBox::Yes | QMessageBox::No); //potwierdzenie zmiany poziomu członka
                   if(reply == QMessageBox::Yes ){
                    database[i].Level = NewLevel;                       // zmiana poziomu członka
                    Memberdata += " " + NewLevel;
                    QMessageBox::information(this, "Change Level", "zmieniono poziom członka: " + Memberdata);  //informacja o zmianie poziomu członka
                   }
               }
            }
        }
    } 
    if(ChangeErr == 0){
        QMessageBox::information(this, "No member", "Nie ma takiego członka");      // nie znaleziono członka
    }
}
