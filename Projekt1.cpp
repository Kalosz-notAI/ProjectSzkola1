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



    // Teraz KOD D








    int popr=0;// poprawnosc ( jak zly ruch to powturzy) ( jak juz bedzie swap to break koniecznie)
    int win=0;
    string f, a ;//f figura , a skad 1
    int b , c; // b skad 2 , c true a
    string d; //  d dokond 1 (litera)
    int e ,g ; // e - true d , g - dokond 2 (cyfra)


    for (int i=0;win==0;i++)
    {
        if (i%2==0 || i==0){
            cout << "Ruch bialych"<< endl;
            cout<< " Podaj figure: ";

            cin>> f;






            if (f=="Pb"){

            {
            cout<< "Skad?"<<endl;

            cout<< "Litera:";
            cin>> a;
            cout<< "Numer pola :";
            cin >> b;

            if(a == "A") c = 0;

            if(a == "B") c = 1;

            if(a == "C") c = 2;

            if(a == "D") c = 3;

            if(a == "E") c = 4;

            if(a == "F") c = 5;

            if(a == "G") c = 6;

            if(a == "H") c = 7;


            if (b==1)b=7;
             if (b==2)b=6;
              if (b==3)b=5;
               if (b==4)b=4;
                if (b==5)b=3;
                if (b==6)b=2;
                 if (b==7)b=1;
                  if (b==8)b=0;





            if (t[b][c] != "Pb") cout<< "Nie przejdzie!";

            else{


            cout<< "Dokand?"<< endl;

           cout<< "Litera:";
            cin>> d ;

            cout<< "Numer pola:";
            cin >> g ;

            if(d == "A") e = 0;

            if(d == "B") e = 1;

            if(d == "C") e = 2;

            if(d == "D") e = 3;

            if(d == "E") e = 4;

            if(d == "F") e = 5;

            if(d == "G") e = 6;

            if(d == "H") e = 7;

           if (g==1)g=7;
             if (g==2)g=6;
              if (g==3)g=5;
               if (g==4)g=4;
                if (g==5)g=3;
                if (g==6)g=2;
                 if (g==7)g=1;
                  if (g==8)g=0;



            if (t[g][e]== "Kc") win==1;
            swap ( t[b][c] , t[g][e] );
            break;
            }




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

        if(i%2!=0 && i!=0){
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
    if (win ==1) cout<< "Wygrana bialych";

    if (win == 2) cout << "Wygrana czarnych";




}
