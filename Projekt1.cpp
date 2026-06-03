#include <iostream>
using namespace std;
int main ()
{
    //SZACHYYYY

    string t[8][8];

    for(int i=0; i<8 ; i++)
        for (int o=0 ; o<8 ; o++)
    {
         t[i][o] ="00";
    }
    cout<< " Pion = P ,  Goniec= G , Skoczek = S , , Wieza = W , Hetman= H , Krol= K "<< endl;
    cout<< "Figury czarnych z c a bialych z b - " << endl << endl;

    t[0][0] = "Wc";// wpisanie w tablice czarnych figur
    t[0][1] = "Sc";
    t[0][2] = "Gc";
    t[0][3] = "Hc";
    t[0][4] = "Kc";
    t[0][5] = "Gc";
    t[0][6] = "Sc";
    t[0][7] = "Wc";

    for( int i=0; i< 8; i++)
    {
        t[1][i] = "Pc";
    }


    t[7][0] = "Wb";// wpisanie w tablice bialych figur
    t[7][1] = "Sb";
    t[7][2] = "Gb";
    t[7][3] = "Hb";
    t[7][4] = "Kb";
    t[7][5] = "Gb";
    t[7][6] = "Sb";
    t[7][7] = "Wb";

     for( int i=0; i< 8; i++)
    {
        t[6][i] = "Pb";
    }





     for(int i=0; i<8 ; i++)// wypisywanie
        {
        for (int o=0 ; o<8 ; o++)
        {
            cout << t[i][o] ;
            cout<< "  ";


        }
        cout<< endl;
     }
    cout<< endl << endl;
}
