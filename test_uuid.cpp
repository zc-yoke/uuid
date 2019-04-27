#include <iostream>
#include "uuid4.h"
using namespace std;

int main()
{
    //产生100个uuid
    int qty_uuid=100;
    char** uuid_char=new char*[qty_uuid];
    uuid4_init();
    for(int i=0; i<qty_uuid; ++i)
    {
        uuid_char[i]=new char[UUID4_LEN];
        uuid4_generate(uuid_char[i]);
        cout<<uuid_char[i]<<endl;
        delete[] uuid_char[i];
    }
    delete[] uuid_char;
    char pause[2];
    cin>>pause;
    return 0;
}
