#include <iostream>

using namespace std;

int main() {
    string cadena;

    cout<<"cadena: "<<endl;
    cin>>cadena;

    getline(cin, cadena);
    if (cadena== "char"){
        cout<<sizeof(char)<<endl;
        return 0;
    }
     else if (cadena== "int"){
        cout<<sizeof(int)<<endl;
        return 0;
    }
    else if (cadena== "short"){
        cout<<sizeof(short)<<endl;
        return 0;
    }
    else if (cadena== "float"){
        cout<<sizeof(float)<<endl;
        return 0;
    }
    else if (cadena== "double"){
        cout<<sizeof(double)<<endl;
        return 0;
    }
    else if (cadena== "long"){
        cout<<sizeof(long)<<endl;
        return 0;
    }

    return 0;
}
