#include "Televisao.h"
#include "Televisao.cpp"

class TelevisaoTeste{
    public:
        int  canal_entrada, volume_entrada;
        TelevisaoTeste();

};

int main()
{
    int tv_entrada;

    Televisao TV0(0,0);
    Televisao TV1(1,1);
    Televisao TV2(1,2);
    Televisao TV3(2,1);

    cout << "STATUS TV1" << endl;
    cout << "Canal = " << TV1.getCanal() << endl;
    cout << "Volume = " << TV1.getVolume() << endl;

    cout << "\nSTATUS TV2" << endl;
    cout << "Canal = " << TV2.getCanal() << endl;
    cout << "Volume = " << TV2.getVolume() << endl;

    cout << "\nSTATUS TV3" << endl;
    cout << "Canal = " << TV3.getCanal() << endl;
    cout << "Volume = " << TV3.getVolume() << endl;

    cout << "\nAlterando TV1"<< endl;
    TV1.aumentaVolume();
    TV1.sobeCanal();

    cout << "\nAlterando TV2"<< endl;
    TV2.diminuiVolume();
    TV2.desceCanal();
    
    cout << "\nAlterando TV3"<< endl;
    TV3.aumentaVolume();
    TV3.sobeCanal();

    //APRESENTANDO STATUS
    cout << "\nSTATUS TV1" << endl;
    cout << "Canal = " << TV1.getCanal() << endl;
    cout << "Volume = " << TV1.getVolume() << endl;

    cout << "\nSTATUS TV2" << endl;
    cout << "Canal = " << TV2.getCanal() << endl;
    cout << "Volume = " << TV2.getVolume() << endl;

    cout << "\nSTATUS TV3" << endl;
    cout << "Canal = " << TV3.getCanal() << endl;
    cout << "Volume = " << TV3.getVolume() << endl;
    return 0;
}