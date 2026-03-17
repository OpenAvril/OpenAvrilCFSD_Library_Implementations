#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT
    {
    public:
        LaunchEnableForConcurrentThreadsAt_CLIENT();
        virtual ~LaunchEnableForConcurrentThreadsAt_CLIENT();
        void app_thread_Start(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
        void app_thread_End(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
        void app_initialise_Control();
        class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_LaunchConcurrency_Control();
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}