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


    int popr=0;// poprawnosc ( jak zly ruch to powturzy) ( jak juz bedzie swap to break koniecznie)
    int win=0;
    string f, a ;//f figura , a skad 1
    int b , c; // b skad 2 , c true a


    for (int i=0;win==0;i++)
    {
        if (i%2==0 || i==0){
            cout << "Ruch bialych"<< endl;
            cout<< " Podaj figure: ";

            cin>> f;


            while (popr=0){



            if (f=="Pb"){
            cout<< "Skad?"<<endl;
            cin>> a;
            cin >> b;

            if(a == "A") c = 0;

            if(a == "B") c = 1;

            if(a == "C") c = 2;

            if(a == "D") c = 3;

            if(a == "E") c = 4;

            if(a == "F") c = 5;

            if(a == "G") c = 6;

            if(a == "H") c = 7;

            b=b-1;

            if (t[c][b] !="Pb") cout<< "Nie przejdzie!";



            cout<< "Dokand?"<< endl;


            }


            if (f=="Wb"){

            }

            if (f=="Sb"){

            }

            if (f=="Gb"){

            }

            if (f=="Hb"){

            }

            if (f=="Kb"){

            }

            else cout<< "Nuh uh";

            }


        }






        else{
            cout << "Ruch czarnych" << endl;

            if (f=="Pc"){

            }

            if (f=="Wc"){

            }

            if (f=="Sc"){

            }

            if (f=="Gc"){

            }

            if (f=="Hc"){

            }

            if (f=="Kc"){

            }

            else cout<< "Nuh uh";



        }






    }
    if (win ==1) cout<< "Wygrana bia³ych";

    if (win == 2) cout << "Wygrana czarnych";




}
