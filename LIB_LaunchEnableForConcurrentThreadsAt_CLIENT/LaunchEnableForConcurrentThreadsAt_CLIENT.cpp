#include "pch.h"
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::_stat_CLASS_ptr_Global;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::_stat_CLASS_ptr_LaunchConcurrency_Control;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT()
{
    boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT();
    boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT();
    boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT();
    boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::~LaunchEnableForConcurrentThreadsAt_CLIENT()
{
    delete _stat_CLASS_ptr_Global;
    delete _stat_CLASS_ptr_LaunchConcurrency_Control;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::app_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID)
{
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Request(obj, concurrentThreadID);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Activate(obj);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::app_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID)
{
    while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_flag_praisinglaunch() == true)
    {

    }
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index());
    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
    }
    else
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() + 1);

        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(obj, concurrentThreadID);
    }
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;

	std::cout << "exiting boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
    stat_CLASS_boot1_DEFINE_Global();
    stat_CLASS_boot1_DEFINE_WriteEnable_Control();
	std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
    stat_CLASS_boot3_INITIALISE_Global();
    stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
	std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;

	std::cout << "exiting boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
    
	std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;

	std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;

	std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()
{
	std::cout << "entered boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;

	std::cout << "exiting boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_CLIENT()." << std::endl;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::dyn_CLASS_get_ptr_Global()
{
    return stat_CLASS_get_ptr_Global();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::dyn_CLASS_get_ptr_LaunchConcurrency_Control()
{
    return stat_CLASS_get_ptr_LaunchConcurrency_Control();
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_boot1_DEFINE_Global()
{
    _stat_CLASS_ptr_Global = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_boot3_INITIALISE_Global()
{
    _stat_CLASS_ptr_Global = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global();
    while (stat_CLASS_get_ptr_Global() == NULL) { }
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control();
    while (stat_CLASS_get_ptr_LaunchConcurrency_Control() == NULL) { }
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_get_ptr_Global()
{
    return _stat_CLASS_ptr_Global;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::stat_CLASS_get_ptr_LaunchConcurrency_Control()
{
	return _stat_CLASS_ptr_LaunchConcurrency_Control;
}