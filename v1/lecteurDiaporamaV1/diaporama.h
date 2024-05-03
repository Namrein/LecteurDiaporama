#ifndef TYPE_DIAPORAMA_H
#define TYPE_DIAPORAMA_H
#include <iostream>
using namespace std;
#include <vector>
#include "imageDansDiaporama.h"

class Diaporama
{
private:
    string m_titre;
    unsigned int m_vitesseDefilement;
    vector <ImageDansDiaporama> m_localisationImages;
    int m_imageCourante;
public:
    Diaporama(string, unsigned int);
    Diaporama();
    Diaporama(const Diaporama&);
    ~Diaporama();
    string getTitre() const;
    void setTitre(string);
    unsigned int getVitesseDefilement() const;
    void setVitesseDefilement(unsigned int);
    vector<ImageDansDiaporama> getLocalisationImage() const;
    void setLocalisationImage(vector<ImageDansDiaporama>);
    int getImageCourante() const;
    void setImageCourante(int);
};

#endif // TYPE_DIAPORAMA_H
