#include "pch.h"
    class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::_stat_CLASS_ptr_Global = NULL;
    class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::~WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        std::cout << "entered boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        std::cout << "entered boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;

        std::cout << "exiting boot0_REG_DECLAIRE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTACTION()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTACTION(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
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
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }