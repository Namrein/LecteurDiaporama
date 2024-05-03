#include "diaporama.h"

Diaporama::Diaporama(string titre, unsigned int vitesse):
    m_titre(titre),
    m_vitesseDefilement(vitesse){}


Diaporama::Diaporama(){}

Diaporama::Diaporama(const Diaporama& source):
    m_titre(source.m_titre),
    m_vitesseDefilement(source.m_vitesseDefilement),
    m_imageCourante(source.m_imageCourante){}

Diaporama::~Diaporama(){}

string Diaporama::getTitre() const
{
    return m_titre;
}

void Diaporama::setTitre(string titre)
{
    (*this).m_titre = titre;
}

unsigned int Diaporama::getVitesseDefilement() const
{
    return m_vitesseDefilement;
}

void Diaporama::setVitesseDefilement(unsigned int vitesse)
{
    (*this).m_vitesseDefilement = vitesse;
}

vector<ImageDansDiaporama> Diaporama::getLocalisationImage() const
{
    return m_localisationImages;
}

void Diaporama::setLocalisationImage(vector<ImageDansDiaporama> localisation)
{
    (*this).m_localisationImages = localisation;
}

int Diaporama::getImageCourante() const
{
    return m_imageCourante;
}

void Diaporama::setImageCourante(int newImageCourante)
{
    m_imageCourante = newImageCourante;
}
