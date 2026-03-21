#include "pch.h"
    class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_stat_CLASS_ptr_Global = NULL;
    class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::~WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        std::cout << "entered boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot0_REG_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        std::cout << "entered boot0_REG_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;

        std::cout << "exiting boot0_REG_DECLAIRE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }