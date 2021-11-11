#ifndef MHALCOMPONENT_I_IMPL_H
#define MHALCOMPONENT_I_IMPL_H

#include "MhalComponent_base.h"

class MhalComponent_i : public MhalComponent_base
{
    ENABLE_LOGGING
    public:
        MhalComponent_i(const char *uuid, const char *label);
        ~MhalComponent_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // MHALCOMPONENT_I_IMPL_H
