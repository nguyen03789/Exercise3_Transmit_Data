/*
File: Transmit_Data.c
Author: Phan Trong Nguyen
Date: 
Description:
*/
#include "Transmit_Data_Header.h"
typedef union{
    struct{ 
        char uID[5];
        char Data[9];
    }frame; // member1
    char data_frame[14]; 
}frame_nfc; // member2 
frame_nfc nfc;
char* Transmit(char* uid, char* data){
    strcpy(nfc.frame.uID, uid); // Truyền data vào uID, (data_frame cũng được truyền data)
    strcpy(nfc.frame.Data, data); // Truyền data vào Data (data_frame cũng được truyền data )
    return strcat(nfc.frame.uID,nfc.frame.Data);
}
