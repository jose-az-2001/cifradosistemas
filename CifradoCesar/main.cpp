#include <iostream>
#include <string>
using namespace std;

int main()
{
    char nor[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alte[26]={'d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c'};
    string frase, frase2;
    cout << "ingrese Frase" << endl;
    getline(cin,frase);
    for(int i = 0; i < frase.length(); i++)
    {
        for(int x =0; x<27; x++)
        {
            if(frase[i]==nor[x])
            {
                frase2=frase2+alte[x];
            }
        }
        if(frase[i]==' ')
            {
                frase2=frase2+' ';
            }
    }
    cout << frase2 << endl;
    return 0;
}
