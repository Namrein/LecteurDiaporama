#ifndef IMAGEDANSDIAPORAMA_H
#define IMAGEDANSDIAPORAMA_H
#include <iostream>
using namespace std;

// Module de manipulation d'éléments de type Image

class ImageDansDiaporama
{
private:
    unsigned int m_pos;
    unsigned int m_rang;
    string m_titre;
    string m_categorie;
    string m_chemin;
public:
    ImageDansDiaporama(unsigned int, string, string, string);
    ImageDansDiaporama(const ImageDansDiaporama&);
    ImageDansDiaporama();
    ~ImageDansDiaporama();
    unsigned int getPosition() const;
    void setPosition(unsigned int);
    unsigned int getRang() const;
    void setRang(unsigned int);
    string getCategorie() const;
    string getChemin() const;
    string getTitreImage() const;
    void setCategorie(string);
    void setChemin(string);
    void setTitreImage(string);
    void afficher() const;

};

#endif // IMAGEDANSDIAPORAMA_H
