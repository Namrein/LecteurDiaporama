#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
using namespace std;

// Module de manipulation d'éléments de type Image

class Image
{
private:
    string m_titre;
    string m_categorie;
    string m_chemin;
public:
    Image(string, string, string);
    Image();
    Image(const Image&);
    ~Image();
    string getCategorie() const;
    string getChemin() const;
    string getTitreImage() const;
    void setCategorie(string);
    void setChemin(string);
    void setTitreImage(string);
    void afficher() const;
};

class ImageDansDiaporama : public Image
{
private:
    unsigned int m_pos;
    unsigned int m_rang;
public:
    ImageDansDiaporama(Image&, unsigned int, unsigned int);
    ImageDansDiaporama(const ImageDansDiaporama&);
    ImageDansDiaporama();
    ~ImageDansDiaporama();
    unsigned int getPosition() const;
    void setPosition(unsigned int);
    unsigned int getRang() const;
    void setRang(unsigned int);

};

#endif // IMAGE_H
