#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;
int C = 523;
int D = 587; 
int E = 659; 
int F = 698; 
int G = 740; 
int A = 880;
int B = 988;


int main(int argc, char *argv[])
{
    Beep(C, 382);
    Beep(C, 382);
    Beep(D, 340);
    Beep(C, 382);
    Beep(F, 286);
    Beep(E, 304);
    
    Beep(C, 382);Beep(C, 382);Beep(D, 340);Beep(C, 382);Beep(G, 270);Beep(F, 286);
    
    Beep(C, 382);Beep(C, 382);Beep(C, 382);Beep(A, 228);Beep(F, 286);Beep(E, 304);
    
    Beep(D, 340);Beep(B, 220);Beep(B, 220);Beep(A, 228);Beep(F, 286);Beep(G, 270);
    system("PAUSE");
    return EXIT_SUCCESS;
}
