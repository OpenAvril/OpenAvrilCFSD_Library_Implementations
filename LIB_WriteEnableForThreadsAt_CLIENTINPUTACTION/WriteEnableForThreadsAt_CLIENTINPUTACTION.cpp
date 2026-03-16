#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_stat_CLASS_ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    // registers.

// public.
    // constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        stat_CLASS_create_ptr_Global();
    }

    // destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::~WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }

    // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
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
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_writeEnable_Activate(obj, coreId);
    }
        // create.    
        // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::dyn_CLASS_get_ptr_WriteEnable_Control()
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
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_create_ptr_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_create_ptr_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }
            // set.
           
        // registers.
            // create.
            // get.
            // set.