#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE
    {
    public:
// public.
    // constructor.
        WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();

    // destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();

    // dynamic.
        void dyn_initialise_Control(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        // create.    
        // get.
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        // set.
    // static.
        // create.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* _stat_CLASS_ptr_WriteEnable_Control;
            // create.
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
            // get.
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* stat_CLASS_get_ptr_WriteEnable_Control();
            // set.
        // registers.
            // create.
            // get.
            // set.
    };
}