#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
void eraseBall(uchar colInit, uchar page)
{
    uchar col;
for (col = colInit; col < colInit + 3; col++)   // erase the current ball
    {
        set_address(col,page);   // x = 0 to 83, page = 0 to 6
        lcdWrite(0x00|gameplay_area[page][col], HIGH);
    }
}
