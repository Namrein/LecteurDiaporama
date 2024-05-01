#ifndef TYPE_DIAPORAMA_H
#define TYPE_DIAPORAMA_H
#include <iostream>
using namespace std;
#include <vector>
#include "image.h"

class Diaporama
{
private:
    string m_titre;
    unsigned int m_vitesseDefilement;
    vector <ImageDansDiaporama> m_localisationImages;
public:
    Diaporama(string, unsigned int, vector<ImageDansDiaporama>);
    Diaporama();
    Diaporama(const Diaporama&);
    ~Diaporama();
    string getTitre() const;
    void setTitre(string);
    unsigned int getVitesseDefilement() const;
    void setVitesseDefilement(unsigned int);
    vector<ImageDansDiaporama> getLocalisationImage() const;
    void setLocalisationImage(vector<ImageDansDiaporama>);
};

#endif // TYPE_DIAPORAMA_H
