#include "MinoT.h"
char T_arr [4][4][4] = {{{'0','0','0','0'},
                         {'0','1','1','1'},
                         {'0','0','1','0'},
                         {'0','0','0','0'}},
                        {{'0','0','0','0'},
                         {'0','0','0','1'},
                         {'0','0','1','1'},
                         {'0','0','0','1'}},
                        {{'0','0','0','0'},
                         {'0','0','0','0'},
                         {'0','0','1','0'},
                         {'0','1','1','1'}},
                        {{'0','0','1','0'},
                         {'0','0','1','1'},
                         {'0','0','1','0'},
                         {'0','0','0','0'}} };
MinoT::MinoT():Mino(3){}
void MinoT::paint()
{
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<4;++j)
            cout << T_arr[rotate_index][i][j];
        cout << endl;
    }
}
