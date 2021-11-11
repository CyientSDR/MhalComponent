#include <iostream>
#include <ossie/ossieSupport.h>

#include "MhalComponent.h"
int main(int argc, char* argv[])
{
    MhalComponent_i* MhalComponent_servant;
    Component::start_component(MhalComponent_servant, argc, argv);
    return 0;
}

