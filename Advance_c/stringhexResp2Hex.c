#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buf[23] = "fc:C2:3d:ff:fe:0d:5f:7c";
    
    unsigned char hexValue[8];
    sscanf(buf+21, "%02hhX", &hexValue[7]);
    sscanf(buf+18, "%02hhX", &hexValue[6]);
    sscanf(buf+15, "%02hhX", &hexValue[5]);
    sscanf(buf+12, "%02hhX", &hexValue[4]);
    sscanf(buf+9 , "%02hhX", &hexValue[3]);
    sscanf(buf+6 , "%02hhX", &hexValue[2]);
    sscanf(buf+3 , "%02hhX", &hexValue[1]);
    sscanf(buf+0 , "%02hhX", &hexValue[0]);
    
    printf("0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X\n", hexValue[0], 
                                                                        hexValue[1],
                                                                        hexValue[2], 
                                                                        hexValue[3], 
                                                                        hexValue[4],
                                                                        hexValue[5],
                                                                        hexValue[6],
                                                                        hexValue[7]);
                                                                        
    const __uint8_t WSN_COORD_SIM_nodeCmnExtAddr[] = { hexValue[0], 
                                                       hexValue[1], 
                                                       hexValue[2], 
                                                       hexValue[3], 
                                                       hexValue[4],
                                                       hexValue[5],
                                                       hexValue[6],
                                                       hexValue[7]
                                                      };    
    for(int indx =0; indx < 8; indx ++)
    {
        printf("%x ", WSN_COORD_SIM_nodeCmnExtAddr[indx]);
    }
    printf("\n");
    return 0;
}
