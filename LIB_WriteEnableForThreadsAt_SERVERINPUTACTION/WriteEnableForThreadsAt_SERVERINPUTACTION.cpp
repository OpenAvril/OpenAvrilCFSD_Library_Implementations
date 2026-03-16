#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::_stat_CLASS_ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    // registers.

// public.
    // constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        stat_CLASS_create_ptr_Global();
    }

    // destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::~WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }

    // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_Activate(obj, coreId);
    }
        // create.    
        // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
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
            // create.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_create_ptr_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_create_ptr_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }
            // set.
           
        // registers.
            // create.
            // get.
            // set.