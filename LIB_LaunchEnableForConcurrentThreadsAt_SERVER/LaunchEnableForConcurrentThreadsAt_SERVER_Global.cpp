#include "pch.h"
std::array<bool, 3>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::_stat_REG_ptr_flag_thread_2STATE;
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::_stat_REG_ptr_number_Implemented_Threads;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::LaunchEnableForConcurrentThreadsAt_SERVER_Global()
{
    boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
    boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
    boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
    boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::~LaunchEnableForConcurrentThreadsAt_SERVER_Global()
{
    delete _stat_REG_ptr_flag_thread_2STATE;
    delete _stat_REG_ptr_number_Implemented_Threads;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

    std::cout << "exiting boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

    std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    stat_REG_boot1_DEFINE_flag_thread_2STATE();
    stat_REG_boot1_DEFINE_number_Implemented_Threads();
    std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE();
    stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads();
    std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    stat_REG_boot3_INITIALISE_flag_thread_2STATE();
    stat_REG_boot3_INITIALISE_number_Implemented_Threads();
    std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Global()
{

}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE()
{
    return stat_REG_get_ptr_flag_thread_2STATE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_ptr_flag_thread_2STATE_IDLE()
{
    return !stat_REG_get_ptr_flag_thread_2STATE();
}
uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::dyn_REG_get_number_Implemented_Threads()
{
    return *stat_REG_get_ptr_number_Implemented_Threads();
}
unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value)
{
    unsigned char* bytes_array;
    std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
    return bytes_array;
}
uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes)
{
    uint8_t cpp_uint8_t_value;
    std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
    return cpp_uint8_t_value;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_CONVERT_Obj_To_ClassOf(void* obj)
{
    return reinterpret_cast<OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework*>(obj);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot1_DEFINE_flag_thread_2STATE()
{
    _stat_REG_ptr_flag_thread_2STATE = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot1_DEFINE_number_Implemented_Threads()
{
    _stat_REG_ptr_number_Implemented_Threads = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
    _stat_REG_ptr_flag_thread_2STATE = new std::array<bool, 3>();
    while (stat_REG_get_ptr_flag_thread_2STATE() == NULL) {}
    *_stat_REG_ptr_flag_thread_2STATE = { true, true, true };
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot3_INITIALISE_flag_thread_2STATE()
{
    std::cout << "entered stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
    *_stat_REG_ptr_flag_thread_2STATE = { false, false, false };
    std::cout << "exiting stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_boot3_INITIALISE_number_Implemented_Threads()
{
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
}
std::array<bool, 3>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_get_ptr_flag_thread_2STATE()
{
    return _stat_REG_ptr_flag_thread_2STATE;
}
uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_get_ptr_number_Implemented_Threads()
{
    return _stat_REG_ptr_number_Implemented_Threads;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_set_flag_thread_2STATE_ACTIVE(std::array<bool, 3>* bitArray)
{
    *_stat_REG_ptr_flag_thread_2STATE = *bitArray;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_REG_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
{
	*_stat_REG_ptr_number_Implemented_Threads = number_Implemented_Threads;
}