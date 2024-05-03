#include <iostream>
#include <vector>
#include "imageDansDiaporama.h"
#include "diaporama.h"
using namespace std;


int main()
{
    /* -------------------------------------------------------------------------------------
     * Charge les images et les diaporamas 'en dur' ... en attendant l'implantation de la BD :
     * - Charger les images et diaporamas
     * Dans un second temps, ces contenus proviendront d'une base de données
     --------------------------------------------------------------------------------------*/

    vector<ImageDansDiaporama> image1;
    image1.push_back(ImageDansDiaporama(0, "Animaux", "Dalmatien.gif", "F:/Documents/IUT/Annees_1/S2.01/S2.01/cartesDisney/cartesDisney/Dalmatien.gif"));
    image1.push_back(ImageDansDiaporama(1, "Humain", "Cendrillon.gif", "F:/Documents/IUT/Annees_1/S2.01/S2.01/cartesDisney/cartesDisney/Cendrillon.gif"));
    image1.push_back(ImageDansDiaporama(2, "Animaux", "Bambi.gif", "F:/Documents/IUT/Annees_1/S2.01/S2.01/cartesDisney/cartesDisney/Bambi.gif"));
    image1.push_back(ImageDansDiaporama(3, "Humain", "Blanche_Neige.gif", "F:/Documents/IUT/Annees_1/S2.01/S2.01/cartesDisney/cartesDisney/Blancge_Neige.gif"));

    Diaporama diaporamas;
    diaporamas = Diaporama("PremierDiapo", 5);
    char choixAction;
    unsigned int pPosImageCourante = image1[0].getRang();
    cout << endl << "Vous êtes sur le Diaporama : " << diaporamas.getTitre() << endl
         << endl
         << endl;
    while(choixAction != 'Q')
    {
        cout << endl << "Image actuelle : " << image1[pPosImageCourante].getTitreImage() << endl;
        cout << "Faire une action (A-vancer, R-eculer, Q-uitter) : ";
        cin >> choixAction;
        if (choixAction == 'A' || choixAction == 'a')
        {
            if (pPosImageCourante == 3)
            {
                pPosImageCourante = 0;
            }

            else
            {
                pPosImageCourante = pPosImageCourante + 1;
            }
        }

        else if (choixAction == 'R' || choixAction == 'r')
        {
            if (pPosImageCourante == 0)
            {
                pPosImageCourante = 3;
            }

            else
            {
                pPosImageCourante = pPosImageCourante - 1;
            }
        }
    }

    cout << endl << endl << endl << "Au revoir" << endl << endl;
    return 0;
}

