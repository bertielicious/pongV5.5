#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
#include <stdio.h>
void paddleUp(void)
{
    bool upper [8] = {0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff};
    bool start [8] = {0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x01,0x00};
    bool startdwn [8] = {0xfe,0xfc,0xf8, 0xf0,0xe0, 0xc0, 0x80, 0x00};   // start down
    bool lower [8] = {0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff};      // lower
    static uchar page = 2;
    static uchar counter = 1;
    
    static uchar counterdwn = 1;
    
    if(PADDLEUP == LOW && PADDLEDWN == HIGH)
    {
        counter++;
        
        if(counter > 8 && page !=1)
    {
        counter = 1;
        page = page - 1;
    }
    if(page == 1 && counter >=8)
    {
        counter = 8;
        page = 1;
    }
        set_address (0,page - 1); // page above current paddle position selected
        lcdWrite(upper[counter - 1], HIGH); // col 0 of paddle moved up
        set_address (1,page - 1); // page above current paddle position selected
        lcdWrite(upper[counter - 1], HIGH); // col 1 of paddle moved up
        
        set_address (0,page); // page at start paddle position selected
        lcdWrite(start[counter - 1], HIGH); // col 0 of paddle moved up
        set_address (1,page); // page at start paddle position selected
        lcdWrite(start[counter - 1], HIGH); // col 1 of paddle moved up
        printf("counter = %d\n", counter);
        printf("counterdwn = %d\n", counterdwn);
        printf("page = %d\n", page);
       
    }
    
    if(PADDLEDWN == LOW && PADDLEUP == HIGH)
        
    {
        counterdwn++;
        
        if(counterdwn >8 && page !=4)
        {
            counterdwn = 1;
           // page = page + 1;
        }
        if(page == 4 && counterdwn >=8)
        {
            counterdwn = 8;
            page = 4;
        }
        set_address (0,page); // page at start paddle position selected
        lcdWrite(startdwn[counterdwn - 1], HIGH); // col 0 of paddle moved down
        set_address (1,page); // page at start paddle position selected
        lcdWrite(startdwn[counterdwn - 1], HIGH); // col 1 of paddle moved udown
        
        set_address (0,page + 1); // page above current paddle position selected
        lcdWrite(lower[counterdwn - 1], HIGH); // col 0 of paddle moved up
        set_address (1,page + 1); // page above current paddle position selected
        lcdWrite(lower[counterdwn - 1], HIGH); // col 1 of paddle moved up    
        
         printf("counter = %d\n", counter);
        printf("counterdwn = %d\n", counterdwn);
        printf("page = %d\n", page);
    }
    
   
    
  //  printf("startdwn[%d] = %x\n",counterdwn-1, startdwn[counterdwn-1]);
   // printf("lower[%d] = %x\n",counterdwn-1, lower[counterdwn-1]);
}
    

