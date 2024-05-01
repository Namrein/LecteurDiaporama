#include "image.h"

//Constructeur de Image
Image::Image(string pCategorie, string pTitre, string pChemin):
    m_titre(pTitre),
    m_categorie(pCategorie),
    m_chemin(pChemin){}

Image::Image(const Image& source):
    m_titre(source.m_titre),
    m_categorie(source.m_categorie),
    m_chemin(source.m_chemin){}

Image::Image():
    m_titre(""),
    m_categorie(""),
    m_chemin(""){}

//Destructeur de Image
Image::~Image(){}

//Méthodes de Image
//Getteurs de Image
string Image::getCategorie() const
{
    return m_categorie;
}

string Image::getChemin() const
{
    return m_chemin;
}

string Image::getTitreImage() const
{
    return m_titre;
}

//Setteurs de Image
void Image::setCategorie(string newCategorie)
{
    m_categorie = newCategorie;
}

void Image::setChemin(string newChemin)
{
    m_chemin = newChemin;
}

void Image::setTitreImage(string newTitre)
{
    m_titre = newTitre;
}

//Autre méthode de Image
void Image::afficher() const
{
   cout << "image(titre: " << getTitreImage() << ", categorie: "
        << getCategorie() << ", chemin: " << getChemin() << ")" << endl;
}


//Constructeur de ImageDansDiaporama
ImageDansDiaporama::ImageDansDiaporama():
    Image(),
    m_pos(0),
    m_rang(0){}

ImageDansDiaporama::ImageDansDiaporama(const ImageDansDiaporama& source):
    Image(source),
    m_pos(source.m_pos),
    m_rang(source.m_rang){}

ImageDansDiaporama::ImageDansDiaporama(Image& base, unsigned int newPos, unsigned int newRang):
    Image(base),
    m_pos(newPos),
    m_rang(newRang){}

ImageDansDiaporama::~ImageDansDiaporama(){}

unsigned int ImageDansDiaporama::getRang() const
{
    return m_rang;
}

void ImageDansDiaporama::setRang(unsigned int r)
{
    m_rang = r;
}

unsigned int ImageDansDiaporama::getPosition() const
{
    return m_pos;
}

void ImageDansDiaporama::setPosition(unsigned int p)
{
    m_pos = p;
}
