#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE
    {
    public:
        WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();
        virtual ~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();
        void app_initialise_Control(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}