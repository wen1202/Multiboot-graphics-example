#include<multiboot.h>
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef char i8;
typedef short i16;
typedef int i32;
typedef long long int i64;
void kernelMain(unsigned int* addr){
    
    multiboot_info_t *mbi;
    mbi = (multiboot_info_t *) addr;
    u32 width = mbi->framebuffer_width;
    u32 height = mbi->framebuffer_height;
    unsigned int* screen = (unsigned int*)mbi->framebuffer_addr;
    for(int i=0;i<=width*80;i++){
    	screen[i]=0xFF3333 ;
    }
    for(int i=width*80+1;i<=width*160;i++){
    	screen[i]=0xFF8800 ;
    }
    for(int i=width*160+1;i<=width*240;i++){
    	screen[i]=0xFFFFBB ;
    }
    for(int i=width*240+1;i<=width*320;i++){
    	screen[i]=0x66FF66 ;
    }
    for(int i=width*320+1;i<=width*400;i++){
    	screen[i]=0x00BBFF ;
    }
    for(int i=width*400+1;i<=width*480;i++){
    	screen[i]=0x5500FF  ;
    }
    for(int i=width*480+1;i<=width*560;i++){
    	screen[i]=0xCC00CC   ;
    }
    for(int i=width*560+1;i<=width*600;i++){
    	screen[i]=0xF0FFFF   ;
    }
    
    
}

