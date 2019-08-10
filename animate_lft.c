#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
void animate_lft(uchar colInit, char page, uchar offsetUp, uchar offsetDwn)
{
    uchar col;
    for(col= colInit; col< colInit - 3; col--)
    {
        set_address(col, page); //col = 83 to 0, page = 0 - 5
        if(offsetUp > 0)
        {
            lcdWrite(ball[0] >> offsetUp|gameplay_area[page][col], HIGH);
        }
        else
        {
            lcdWrite(ball[0] << offsetDwn|gameplay_area[page][col], HIGH);
        }
    }
}
