#include <iostream>
using namespace std;

int main() {
    int tab[3][3] = {0,0,0,0,0,0,0,0,0};
    int x,j,i,k=0;
    while(1) {
        cin >> x;
        i = (x-1)/3;
        j = (x-1)%3;
        if(tab[i][j]) {
            
           
            break;
            
        }
        
        tab[i][j] = ((k++)%2 == 1) ? 2 : 1;
        
    }
     if (tab[1] == tab[2] && tab[2] == tab[3])

        return 1;
    else if (tab[4] == tab[5] && tab[5] == tab[6])

        return 1;
    else if (tab[7] == tab[8] && tab[8] == tab[9])

        return 1;
    else if (tab[1] == tab[4] && tab[4] == tab[7])

        return 1;
    else if (tab[2] == tab[5] && tab[5] == tab[8])

        return 1;
    else if (tab[3] == tab[6] && tab[6] == tab[9])

        return 1;
    else if (tab[1] == tab[5] && tab[5] == tab[9])

        return 1;
    else if (tab[3] == tab[5] && tab[5] == tab[7])

    return 0;
}