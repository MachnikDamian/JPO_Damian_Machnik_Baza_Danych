#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMessageBox>
#include <QMainWindow>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>

using namespace std;
class member {              // klasa odpoowiedzialna za zbieranie danych o poszczególnych członkach
public:
    QString Name;
    QString Surname;
    QString Age;
    QString Sex;
    QString Level;
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    member NewMember;               // przechowuje dane nowych członków przed pisaniem ich do Bazy Danych
    QString ListOfMembers = "";     // wpisywane są sformatowane dane członków przed wpisaniem ich do pliku
    QString Memberdata = "";        // przechowuje dane o konkretnym członku wykorzystywana w funkcjach
    int FoundDataNumber;            // wpisywany jest numer elementu z vektora database
    QString NameToFind;             // wpisywane są dane o imieniu z panelu urzytkownika
    QString SurnameToFind;          // wpisywane są dane o nazwisku z panelu urzytkownika
    QString AgeToFind;              // wpisywane są dane o wieku z panelu urzytkownika
    QString NewLevel;               // wpisywane są dane o nowym poziomie (podczas zmiany) z panelu urzytkownika
    QString dataline;               // przechowuje wiersze z pliku MemberList.txt
    QStringList wordlist;           // przechowuje listę słów ze zmiennej dataline
    QString word;                   // przechowuje słowo z listy słów wordlist
    int wordlistiterator;           // używana przy przypisaniu danych ze zmiennej word do urzytkownika
    int delErr;                     // Decyduje o wyświetleniu błędu podczas usuwania użytkownika
    int ChangeErr;                  // Decyduje o wyświetleniu błędu podczas zmienienia danych użytkownika

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();            //deklaracja funkcji przycisku dodającego członka

    void on_PrintButton_clicked();          //deklaracja funkcji przycisku wypisującego członków

    void on_FindButton_clicked();           //deklaracja funkcji przycisku szukającego członka

    void on_DeleteButton_clicked();         //deklaracja funkcji przycisku usuwającego członka

    void on_ChangeButton_clicked();         //deklaracja funkcji przycisku zmieniającego poziom członka

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
