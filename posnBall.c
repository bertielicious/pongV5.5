#include "config.h"
#include "render.h"
void posnBall(uchar col, uchar row, bool erase)
{
    struct posnData ret;    // define a var ret of type struct posnData
    switch(row)       // 0 to 7
    {
        case 0:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x07;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
        case 1:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x0e;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
        case 2:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x1c;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
        case 3:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x38;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
        case 4:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x70;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
        case 5:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0xe0;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 6:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x00;
                ret.pageLow = 1;
                ret.dataLow = 0x00;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0xc0;
                ret.pageLow = 1;
                ret.dataLow = 0x01;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 7:
            
            if(erase == 1)
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0;
                ret.pageLow = 1;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 0;
                ret.dataHigh = 0x80;
                ret.pageLow = 1;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 8:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x07;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
            
            case 9:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x0e;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
            case 10:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x1c;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 11:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x38;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
            case 12:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x70;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
            case 13:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0xe0;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 14:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x00;
                ret.pageLow = 2;
                ret.dataLow = 0x00;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0xc0;
                ret.pageLow = 2;
                ret.dataLow = 0x01;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 15:
            
            if(erase == 1)
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0;
                ret.pageLow = 2;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 1;
                ret.dataHigh = 0x80;
                ret.pageLow = 2;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 16:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x07;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
            
            case 17:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x0e;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
            case 18:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x1c;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 19:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x38;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
            case 20:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x70;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
            case 21:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0xe0;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 22:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x00;
                ret.pageLow = 3;
                ret.dataLow = 0x00;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0xc0;
                ret.pageLow = 3;
                ret.dataLow = 0x01;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 23:
            
            if(erase == 1)
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0;
                ret.pageLow = 3;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 2;
                ret.dataHigh = 0x80;
                ret.pageLow = 3;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 24:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x07;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
            
            case 25:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x0e;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
            case 26:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x1c;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 27:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x38;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
            case 28:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x70;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
            case 29:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0xe0;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 30:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x00;
                ret.pageLow = 4;
                ret.dataLow = 0x00;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0xc0;
                ret.pageLow = 4;
                ret.dataLow = 0x01;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 31:
            
            if(erase == 1)
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0;
                ret.pageLow = 4;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 3;
                ret.dataHigh = 0x80;
                ret.pageLow = 4;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 32:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x07;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
            
            case 33:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x0e;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
            case 34:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x1c;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 35:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x38;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
            case 36:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x70;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
            case 37:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0xe0;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 38:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x00;
                ret.pageLow = 5;
                ret.dataLow = 0x00;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0xc0;
                ret.pageLow = 5;
                ret.dataLow = 0x01;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 39:
            
            if(erase == 1)
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0;
                ret.pageLow = 5;
                ret.dataLow = 0;
            }
            else
            {
                ret.pageHigh = 4;
                ret.dataHigh = 0x80;
                ret.pageLow = 5;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 40:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x07;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;     
            
            
            case 41:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x0e;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;   
            
            case 42:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x1c;

            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 43:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x38;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;  
            
            case 44:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x70;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;    
            
            case 45:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0xe0;
                //ret.pageLow = 5;
               // ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 46:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x00;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0xc0;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
            
            case 47:
            
            if(erase == 1)
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0;
            }
            else
            {
                ret.pageHigh = 5;
                ret.dataHigh = 0x80;
            }
            ret.col = col;
            ret.row = row;
            render(ret, erase);
            break;
    }
}
