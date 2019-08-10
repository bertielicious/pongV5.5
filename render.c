#include "config.h"
#include "set_address.h"
#include "lcdWrite.h"
#include <stdio.h>

void render(struct posnData s, bool erase)      //render receives the entire struct containing page, date, col and offset
{
                 //[row][col]
     if(erase == 1)
     {
        // gameplay_area[s.pageHigh][s.col] = gameplay_area[s.pageHigh][s.col]|0x00;      // clear the ball data from gameplay_area[][]]
          set_address( s.col, s.pageHigh);  
         lcdWrite(0x00|gameplay_area[s.pageHigh][s.col], HIGH);
         if(s.pageHigh != 5)
         {
         set_address( s.col, s.pageLow);  
         lcdWrite(0x00|gameplay_area[s.pageLow][s.col], HIGH);
         }
     }
     else if (erase == 0)
     {
         set_address( s.col, s.pageHigh);  
       // gameplay_area[s.pageHigh][s.col] = gameplay_area[s.pageHigh][s.col]|(s.dataHigh);       // write the ball data to gameplay_area[][]]
        lcdWrite(gameplay_area[s.pageHigh][s.col]|s.dataHigh, HIGH);       // refresh the LCD with the latest version of gameplay_area[][] 
        
         if(s.pageHigh != 5)
         {
        set_address( s.col, s.pageLow); 
       // gameplay_area[s.pageLow][s.col] = gameplay_area[s.pageLow][s.col]|(s.dataLow); 
        lcdWrite(gameplay_area[s.pageLow][s.col]|s.dataLow, HIGH);       // refresh the LCD with the latest version of gameplay_area[][] 
         }
     }
     
    // lcdWrite(gameplay_area[s.page][s.col], HIGH);       // refresh the LCD with the latest version of gameplay_area[][] 
     //lcdWrite(gameplay_area[s.page][s.x]&s.data, HIGH);
    // printf("data = %d, erase = %d\n", s.data, erase);
}
