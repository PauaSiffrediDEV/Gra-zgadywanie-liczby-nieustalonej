#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int liczba, strzal, ile_prob=0;
int main()
{
    cout << "Witaj! Pomyslalem sobie licze 1...100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zganij jaka (to Twoja "<<ile_prob<<" proba):";
        cin>>strzal;

    if(strzal==liczba)
        cout<<"Udalo sie wygrywasz w "<<ile_prob<<" probie"<<endl;

    else if(strzal<liczba)
        cout<<"To za malo"<<endl;

    else if(strzal>liczba)
        cout<<"To za duzo"<<endl;

    }
    getchar();

    return 0;
}
