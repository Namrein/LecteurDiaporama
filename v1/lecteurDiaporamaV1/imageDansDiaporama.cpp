#include "imageDansDiaporama.h"

//Constructeur de Image
ImageDansDiaporama::ImageDansDiaporama(unsigned int pRang, string pCategorie, string pTitre, string pChemin):
    m_rang(pRang),
    m_titre(pTitre),
    m_categorie(pCategorie),
    m_chemin(pChemin){}

ImageDansDiaporama::ImageDansDiaporama(const ImageDansDiaporama& source):
    m_rang(source.m_rang),
    m_titre(source.m_titre),
    m_categorie(source.m_categorie),
    m_chemin(source.m_chemin){}

ImageDansDiaporama::ImageDansDiaporama():
    m_rang(0),
    m_titre(""),
    m_categorie(""),
    m_chemin(""){}

//Destructeur de Image
ImageDansDiaporama::~ImageDansDiaporama(){}

//Méthodes de Image
//Getteurs de Image
string ImageDansDiaporama::getCategorie() const
{
    return m_categorie;
}

string ImageDansDiaporama::getChemin() const
{
    return m_chemin;
}

string ImageDansDiaporama::getTitreImage() const
{
    return m_titre;
}

//Setteurs de Image
void ImageDansDiaporama::setCategorie(string newCategorie)
{
    m_categorie = newCategorie;
}

void ImageDansDiaporama::setChemin(string newChemin)
{
    m_chemin = newChemin;
}

void ImageDansDiaporama::setTitreImage(string newTitre)
{
    m_titre = newTitre;
}

//Autre méthode de Image
void ImageDansDiaporama::afficher() const
{
   cout << "image(titre: " << getTitreImage() << ", categorie: "
        << getCategorie() << ", chemin: " << getChemin() << ")" << endl;
}


void ImageDansDiaporama::setRang(unsigned int r)
{
    m_rang = r;
}

unsigned int ImageDansDiaporama::getRang() const
{
    return m_rang;
}

unsigned int ImageDansDiaporama::getPosition() const
{
    return m_pos;
}

void ImageDansDiaporama::setPosition(unsigned int p)
{
    m_pos = p;
}
