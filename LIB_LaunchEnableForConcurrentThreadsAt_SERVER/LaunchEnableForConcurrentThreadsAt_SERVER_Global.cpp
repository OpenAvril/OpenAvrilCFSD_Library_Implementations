#include "pch.h"
bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::_stat_REG_ptr_flag_thread_2STATE = NULL;
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::_stat_REG_ptr_number_Implemented_Threads = NULL;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::LaunchEnableForConcurrentThreadsAt_SERVER_Global()
{
    bool* newDEFAULT_Flag = new bool(true);
    stat_REG_create_flag_thread_STATE(newDEFAULT_Flag);
    delete newDEFAULT_Flag;
    uint8_t* newDEFAULT_Value = new uint8_t(INT8_MAX);
    stat_REG_create_number_Implemented_Threads(newDEFAULT_Value);
    delete newDEFAULT_Value;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::~LaunchEnableForConcurrentThreadsAt_SERVER_Global()
{
    delete _stat_REG_ptr_flag_thread_2STATE;
    delete _stat_REG_ptr_number_Implemented_Threads;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::app_initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag)
{
    stat_REG_set_flag_thread_2STATE_ACTIVE(*newINISIALISED_Flag);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::app_initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value)
{
    stat_REG_set_number_Implemented_Threads(*newINISIALISED_Value);
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE()
{
    return *stat_REG_get_ptr_flag_thread_2STATE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_ptr_flag_thread_2STATE_IDLE()
{
    return !*stat_REG_get_ptr_flag_thread_2STATE();
}
uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_number_Implemented_Threads()
{
    return *stat_REG_get_number_Implemented_Threads();
}
unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_uint8_t_to_ByteArray(uint8_t uint8_t_Value)
{
    unsigned char* bytes_array;
    std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
    return bytes_array;
}
uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_ByteArray_to_uint8_t(unsigned char* bytes)
{
    uint8_t cpp_uint8_t_value;
    std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
    return cpp_uint8_t_value;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(void* obj)
{
    return reinterpret_cast<OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(obj);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_create_flag_thread_STATE(bool* newDEFAULT_Flag)
{
    _stat_REG_ptr_flag_thread_2STATE = new bool(NULL);
    while (stat_REG_get_ptr_flag_thread_2STATE() == NULL) {}
    *_stat_REG_ptr_flag_thread_2STATE = *newDEFAULT_Flag;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_create_number_Implemented_Threads(uint8_t* newDEFAULT_Value)
{
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(NULL);
    while (stat_REG_get_number_Implemented_Threads() == NULL) {}
    *_stat_REG_ptr_number_Implemented_Threads = *newDEFAULT_Value;
}
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_get_number_Implemented_Threads()
{
    return _stat_REG_ptr_number_Implemented_Threads;
}
bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_get_ptr_flag_thread_2STATE()
{
    return _stat_REG_ptr_flag_thread_2STATE;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_set_flag_thread_2STATE_ACTIVE(bool flag_coreSTATE_Id)
{
    *_stat_REG_ptr_flag_thread_2STATE = flag_coreSTATE_Id;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
{
	*_stat_REG_ptr_number_Implemented_Threads = number_Implemented_Threads;
}