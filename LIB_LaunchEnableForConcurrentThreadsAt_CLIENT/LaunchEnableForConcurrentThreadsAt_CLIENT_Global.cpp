#include "pch.h"
bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::_stat_REG_ptr_flag_thread_2STATE = NULL;
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::_stat_REG_ptr_number_Implemented_Threads = NULL;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::LaunchEnableForConcurrentThreadsAt_CLIENT_Global()
{
    bool* newDEFAULT_Flag = new bool(true);
    stat_REG_create_flag_thread_STATE(newDEFAULT_Flag);
    delete newDEFAULT_Flag;
    uint8_t* newDEFAULT_Value = new uint8_t(INT8_MAX);
    stat_REG_create_number_Implemented_Threads(newDEFAULT_Value);
    delete newDEFAULT_Value;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::~LaunchEnableForConcurrentThreadsAt_CLIENT_Global()
{
    delete _stat_REG_ptr_flag_thread_2STATE;
    delete _stat_REG_ptr_number_Implemented_Threads;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::dyn_initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag)
{
    stat_REG_set_flag_thread_2STATE_ACTIVE(*newINISIALISED_Flag);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::dyn_initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value)
{
    stat_REG_set_number_Implemented_Threads(*newINISIALISED_Value);
}

bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE()
{
    return *stat_REG_get_ptr_flag_thread_2STATE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::dyn_REG_get_ptr_flag_thread_2STATE_IDLE()
{
    return !*stat_REG_get_ptr_flag_thread_2STATE();
}
uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::dyn_REG_get_number_Implemented_Threads()
{
    return *stat_REG_get_number_Implemented_Threads();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_obj_get_ClassOf(void* obj)
{
    return reinterpret_cast<OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework*>(obj);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_create_flag_thread_STATE(bool* newDEFAULT_Flag)
{
    _stat_REG_ptr_flag_thread_2STATE = new bool(NULL);
    while (stat_REG_get_ptr_flag_thread_2STATE() == NULL) {}
    *_stat_REG_ptr_flag_thread_2STATE = *newDEFAULT_Flag;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_create_number_Implemented_Threads(uint8_t* newDEFAULT_Value)
{
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(NULL);
    while (stat_REG_get_number_Implemented_Threads() == NULL) {}
    *_stat_REG_ptr_number_Implemented_Threads = *newDEFAULT_Value;
}
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_get_number_Implemented_Threads()
{
    return _stat_REG_ptr_number_Implemented_Threads;
}
bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_get_ptr_flag_thread_2STATE()
{
    return _stat_REG_ptr_flag_thread_2STATE;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_set_flag_thread_2STATE_ACTIVE(bool flag_coreSTATE_Id)
{
    *_stat_REG_ptr_flag_thread_2STATE = flag_coreSTATE_Id;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global::stat_REG_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
    {
        *_stat_REG_ptr_number_Implemented_Threads = number_Implemented_Threads;
    }