#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"

OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;
void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::generate_Program()
{
    stat_CLASS_create_ptr_Framework();
    stat_CLASS_get_ptr_Framework()->dyn_initialise(stat_CLASS_get_ptr_Framework());
    std::cout << "        ,     \\      /      ," << std::endl;
    std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
    std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
    std::cout << "|              |\\../|               |" << std::endl;
    std::cout << "|               \\VV/                |" << std::endl;
    std::cout << "|        MIT Launch Que .dll        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "|  /    V          ))        V   \\  |" << std::endl;
    std::cout << "|/                //               \\| " << std::endl;
    std::cout << "`                 V                 '" << std::endl;
    return (void*)stat_CLASS_get_ptr_Framework();
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::terminate_Progaram()
{
    delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(void* obj, unsigned char* bytes)
{
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(void* obj, unsigned char* bytes)
{
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
}
unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(void* obj)
{
    return (unsigned char*)OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0);
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Active(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore((uint8_t)*bytes);
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_State_launchBit(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_CLASS_create_ptr_Framework()
{
    _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
    while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_CLASS_get_ptr_Framework()
{
    return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool value)
{
    uint8_t concurrentThreadID = *bytes;
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
}