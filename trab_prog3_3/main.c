#ifndef UNICODE
#define UNICODE
#endif

#include <stdio.h>
#include<windows.h>

INT WINAPI winmain(HINSTANCE  hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT  nCmdShow)
{
    printf("hInstance :%d\n", hInstance);
    printf("hPrevInstance: %d\n", hPrevInstance);
    printf("lpCmdline : %s\n", lpCmdLine);
    printf("nCmdshow:%d\n", nCmdShow);

    return 0;
}