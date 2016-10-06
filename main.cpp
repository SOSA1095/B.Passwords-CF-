#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> aux;
    int A,B,imin=0,imax=0;
    string BB,pass;
    cin >> A >> B;
    for(int iA=0; iA<A;iA++){
        cin >> BB;
        aux.push_back(BB);
    }
    cin >> pass;
    for(int iA=0; iA<A;iA++){
        if(pass.length()>aux[iA].length()){
            imin++;
        }
        if(pass.length()>=aux[iA].length() && pass != aux[iA]){
            imax++;
        }
    }
    imin += (imin/B)*5;
    imax += (imax/B)*5;
    cout << imin+1 << " " << imax+1 << endl;
    return 0;
}
