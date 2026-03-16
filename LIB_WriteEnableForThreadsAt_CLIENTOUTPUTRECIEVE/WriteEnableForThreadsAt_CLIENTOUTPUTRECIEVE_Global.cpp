#include "pch.h"

// pointers.
    // classes.
    // registers.
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::_REG_ptr_3STATE_flag_IDLE = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::_REG_ptr_3STATE_flag_WAIT = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::_REG_ptr_3STATE_flag_WRITE = NULL;
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::_REG_ptr_number_Of_Implemented_Threads = NULL;

// public.
    // constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global()
    {
        std::array<bool, 2>* newDEAFULT_FlagSet = new std::array<bool, 2>{true, true};
        stat_REG_create_3STATE_flag_IDLE(newDEAFULT_FlagSet);
        stat_REG_create_3STATE_flag_WAIT(newDEAFULT_FlagSet);//
        stat_REG_create_3STATE_flag_WRITE(newDEAFULT_FlagSet);
        delete newDEAFULT_FlagSet;
        uint8_t* newDEFAULT_Value = new uint8_t(UINT8_MAX);
        stat_REG_create_number_Of_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

    // destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global()
    {
        delete _REG_ptr_3STATE_flag_IDLE;
        delete _REG_ptr_3STATE_flag_WAIT;
        delete _REG_ptr_3STATE_flag_WRITE;
        delete _REG_ptr_number_Of_Implemented_Threads;
    }

    // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_initialise_Item_Of_ptr_3STATE_flag_IDLE(std::array<bool, 2>* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_IDLE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WAIT(std::array<bool, 2 >* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_IDLE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WRITE(std::array<bool, 2 >* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_WRITE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_initialise_Ptr_number_Of_Implemented_Threads(uint8_t* newValue)
    {
        stat_REG_set_number_Of_Implemented_Threads(*newValue);
    }
        // create.    
        // get.
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_get_3STATE_flag_IDLE()
    {
        return *stat_REG_get_ptr_3STATE_flag_IDLE();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_get_3STATE_flag_WAIT()
    {
        return *stat_REG_get_ptr_3STATE_flag_WAIT();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_get_3STATE_flag_WRITE()
    {
        return *stat_REG_get_ptr_3STATE_flag_WRITE();
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
        // set.
    // static.
        // create.
        // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_OBJ_get_ClassOf(void* obj)
    {
        return reinterpret_cast<OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework*>(obj);
    }
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
            // get.
            // set.
        // registers.
            // create.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_create_3STATE_flag_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_IDLE = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_IDLE() == NULL) {}
        *_REG_ptr_3STATE_flag_IDLE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_create_3STATE_flag_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_WAIT = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_WAIT() == NULL) {}
        *_REG_ptr_3STATE_flag_WAIT = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_create_3STATE_flag_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_WRITE = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_WRITE() == NULL) {}
        *_REG_ptr_3STATE_flag_WRITE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        _REG_ptr_number_Of_Implemented_Threads = new uint8_t();
        while (stat_REG_get_ptr_number_Of_Implemented_Threads() == NULL) {}
        *_REG_ptr_number_Of_Implemented_Threads = *newDEFAULT_Value;
    }
            // get.
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_get_ptr_3STATE_flag_IDLE()
    {
        return _REG_ptr_3STATE_flag_IDLE;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_get_ptr_3STATE_flag_WAIT()
    {
        return _REG_ptr_3STATE_flag_WAIT;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_get_ptr_3STATE_flag_WRITE()
    {
        return _REG_ptr_3STATE_flag_WRITE;
    }
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _REG_ptr_number_Of_Implemented_Threads;
    }
            // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_set_3STATE_flag_IDLE(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_IDLE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_set_3STATE_flag_WAIT(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_WAIT = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_set_3STATE_flag_WRITE(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_WRITE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_REG_set_number_Of_Implemented_Threads(uint8_t newValue)
    {
        *_REG_ptr_number_Of_Implemented_Threads = newValue;
    }