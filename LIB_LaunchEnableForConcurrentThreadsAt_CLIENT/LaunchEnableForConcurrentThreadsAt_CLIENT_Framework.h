#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework
    {
    public:
        LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
        void app_initialise(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        class LaunchEnableForConcurrentThreadsAt_CLIENT* dyn_CLASS_get_ptr_LaunchConcurrency();
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* stat_CLASS_get_ptr_LaunchConcurrency();
    private:
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* _stat_CLASS_ptr_LaunchConcurrency;
        static void stat_CLASS_create_ptr_LaunchConcurrency();
    };
}