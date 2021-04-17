#include "hader.h"

// since global_x still needs to be defined somewhere,
// we define it (for example) in this source file
int global_x;
void t();
int main()
{
    //set global_x here:
    global_x = 5;

    print_global_x();
    t();
}