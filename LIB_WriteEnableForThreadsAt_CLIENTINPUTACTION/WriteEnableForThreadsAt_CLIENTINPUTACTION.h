#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION
{
    class WriteEnableForThreadsAt_CLIENTINPUTACTION
    {
    public:
// public.
    // constructor.
        WriteEnableForThreadsAt_CLIENTINPUTACTION();

    // destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTINPUTACTION();

    // dynamic.
        void dyn_initialise_Control(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        // create.    
        // get.
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
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
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* _stat_CLASS_ptr_WriteEnable_Control;
            // create.
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
            // get.
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* stat_CLASS_get_ptr_WriteEnable_Control();
            // set.
        // registers.
            // create.
            // get.
            // set.
    };
}