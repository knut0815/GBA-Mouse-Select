/**********************************************\
*       ain.h                                   *
*          by dovotos pcx->gba program         *
/**********************************************/
#define  M_WIDTH   40
#define  M_HEIGHT  20


const u16 MData[] = {
                    0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xFF09, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xFFF8, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0xFF09, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xFFF8, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0xFF09, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xFFF8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0x00FF, 0x0000, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0xFF09, 0x00FF, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFF8, 0x00FF, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0xFF09, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFF8, 0x0000, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0xFFFF, 0x0000, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFFF, 0x0000, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x00FF, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0x00FF, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0xFF09, 0x0000,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFF8, 0x0000,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0xFF09, 0xFFFF,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFF8, 0xFFFF,
                    0xFFFF, 0x0909, 0x0909, 0x0909, 0x0909, 0x0909, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
                    0xFFFF, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xF8F8, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
                    0xFFFF, 0x0909, 0xFF09, 0xFFFF, 0x09FF, 0x0909, 0xF8FF, 0xF8F8, 0xF8F8, 0xF8F8,
                    0xFFFF, 0xF8F8, 0xFFF8, 0xFFFF, 0xF8FF, 0xF8F8, 0xF8FF, 0xF8F8, 0xF8F8, 0xF8F8,
                    0xFFFF, 0xFF09, 0xFFFF, 0xF8FF, 0xFFFF, 0x0909, 0xFF09, 0x00FF, 0x0000, 0x0000,
                    0xFFFF, 0xFFF8, 0xFFFF, 0xF8FF, 0xFFFF, 0xF8F8, 0xFFF8, 0x00FF, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0xF8FF, 0x0000, 0xFFF8, 0x0909, 0xFF09, 0x00FF, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0xF8FF, 0x0000, 0xFFF8, 0xF8F8, 0xFFF8, 0x00FF, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0x00F8, 0x0000, 0xF800, 0x09FF, 0x0909, 0xFF09, 0x0000, 0x0000,
                    0xFFFF, 0xFFFF, 0x00F8, 0x0000, 0xF800, 0xF8FF, 0xF8F8, 0xFFF8, 0x0000, 0x0000,
                    0xF8F8, 0xF8F8, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0909, 0xFF09, 0x0000, 0x0000,
                    0xF8F8, 0xF8F8, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xF8F8, 0xFFF8, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF800, 0xFFFF, 0xF8FF, 0x0000, 0x0000,
                    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF800, 0xFFFF, 0xF8FF, 0x0000, 0x0000,};

