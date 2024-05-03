#include "lecteurvue.h"
#include "ui_lecteurvue.h"

lecteurVue::lecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurVue)
{
    ui->setupUi(this);

    connect(ui-> bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    connect(ui-> bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui-> bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui-> bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));

    connect(ui-> ajouter_Diaporama, SIGNAL(triggered()), this, SLOT(ajouterDiapo()));
    connect(ui-> enlever_Diaporama, SIGNAL(triggered()), this, SLOT(enleverDiapo()));
    connect(ui-> vitesse_de_d_filement, SIGNAL(triggered()), this, SLOT(vitesse()));
    connect(ui-> a_propos_de, SIGNAL(triggered()), this, SLOT(aide()));
    connect(ui-> quitter, SIGNAL(triggered()), this, SLOT(quitter()));

}

lecteurVue::~lecteurVue()
{
    delete ui;
}


void lecteurVue::lancer()
{
    qDebug() << "Diaporama lancer" << Qt::endl;
}

void lecteurVue::arreter()
{
    qDebug() << "Diaporama arreter" << Qt::endl;
}

void lecteurVue::suivant()
{
    qDebug() << "Image suivante" << Qt::endl;
}

void lecteurVue::precedent()
{
    qDebug() << "Image précédente" << Qt::endl;

}

void lecteurVue::aide()
{
    qDebug() << "Aide lancer" << Qt::endl;
}

void lecteurVue::ajouterDiapo()
{
    qDebug() << "Diapo ajouter" << Qt::endl;
}

void lecteurVue::enleverDiapo()
{
    qDebug() << "Diapo enlever" << Qt::endl;
}

void lecteurVue::quitter()
{
    qDebug() << "Quitter" << Qt::endl;
}

void lecteurVue::vitesse()
{
    qDebug() << "Vitesse" << Qt::endl;
}
