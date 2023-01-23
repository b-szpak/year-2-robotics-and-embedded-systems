#include "allcode_api.h"

int main()
{
    FA_RobotInit();         // INITIALIZE - Mandatory Function
    FA_LCDBacklight(100);
    FA_LCDPrint("Program - Running", 17, 13, 10, FONT_NORMAL, LCD_OPAQUE);
    FA_DelayMillis(2000);   // Pause 2 seconds to allow removal of hand
    
    int distance_encoding = 100;    // mm per movement
    int delay_encoding = 750;       // milliseconds between movement
    int turn_right_encoding = 90;   // degrees right
    int turn_left_encoding = 92;    // degrees left
    
    int obstacles_detected = 0;
    int total_movements = 0;
    int northward_movements = 0;
    
    while (1)               // MAIN LOOP - Never Exits
    {
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_PlayNote(20, delay_encoding);
        FA_Right(90);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);   
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Left(92);
        
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);   
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding); //
        FA_DelayMillis(delay_encoding);
        FA_Left(95);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);  
        FA_Left(90);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Right(98);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Right(90);      
        FA_PlayNote(80, delay_encoding);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_PlayNote(20, delay_encoding);
        FA_Right(90);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);  
        FA_Left(90);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Left(90);
        
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Right(90);
        FA_PlayNote(80, delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_Forwards(distance_encoding);
        FA_DelayMillis(delay_encoding);
        FA_LCDClear();
        FA_LCDPrint("Program - Finish", 16, 13, 10, 
        FONT_NORMAL, LCD_OPAQUE);
        FA_PlayNote(80, delay_encoding);
        FA_Right(360);
        FA_Right(360);
        FA_Right(45);
        FA_LCDClear();
        while (1)
        {
            FA_LCDPrint("------------------------------", 30, 0, 0,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDPrint("Obstacles detected:", 19, 0, 10,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDNumber(2, 0, 20,
            FONT_NORMAL, LCD_OPAQUE);
    
            FA_DelayMillis(1500);
            FA_LCDClear();
                
            // Screen 2 - M-Line + Actual distances
            FA_LCDPrint("M-Line:", 7, 0, 0,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDPrint("1500mm", 6, 0, 10,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDPrint("Actual:", 7, 75, 0,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDNumber(2400, 75, 10,
            FONT_NORMAL, LCD_OPAQUE);
            FA_LCDPrint("mm", 2, 100, 10,
            FONT_NORMAL, LCD_OPAQUE);
            
                                FA_DelayMillis(1500);
                    FA_LCDClear();
            
                                    FA_LCDPrint("Obstacle-1:", 11, 0, 0,
                        FONT_NORMAL, LCD_OPAQUE);
                        FA_LCDNumber(700, 0, 10,
                        FONT_NORMAL, LCD_OPAQUE);
                        FA_LCDPrint("mm", 2, 20, 10,
                        FONT_NORMAL, LCD_OPAQUE);
                                                FA_LCDPrint("Obstacle-2:", 11, 65, 0,
                        FONT_NORMAL, LCD_OPAQUE);
                        FA_LCDNumber(200, 60, 10,
                        FONT_NORMAL, LCD_OPAQUE);
                        FA_LCDPrint("mm", 2, 80, 10,
                        FONT_NORMAL, LCD_OPAQUE);
                                            FA_LCDPrint("------------------------------", 30, 0, 20,
                    FONT_NORMAL, LCD_OPAQUE);
                                                            FA_DelayMillis(1500);
                FA_LCDClear();
        }
    }
    return 0;
}