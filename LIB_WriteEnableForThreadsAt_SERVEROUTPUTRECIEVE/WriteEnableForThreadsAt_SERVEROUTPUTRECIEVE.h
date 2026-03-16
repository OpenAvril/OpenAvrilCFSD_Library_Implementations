#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE
    {
    public:
// public.
    // constructor.
        WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

    // destructor.
        virtual ~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE();

    // dynamic.
        void dyn_initialise_Control(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        // create.    
        // get.
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
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
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* _stat_CLASS_ptr_WriteEnable_Control;
            // create.
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
            // get.
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* stat_CLASS_get_ptr_WriteEnable_Control();
            // set.
        // registers.
            // create.
            // get.
            // set.
    };
}