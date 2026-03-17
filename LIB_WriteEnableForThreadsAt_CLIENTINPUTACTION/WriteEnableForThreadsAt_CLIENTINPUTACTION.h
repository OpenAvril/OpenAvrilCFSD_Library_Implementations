#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION
{
    class WriteEnableForThreadsAt_CLIENTINPUTACTION
    {
    public:
        WriteEnableForThreadsAt_CLIENTINPUTACTION();
        virtual ~WriteEnableForThreadsAt_CLIENTINPUTACTION();
        void app_initialise_Control(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}