#ifdef LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION
	{
		class LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API CLIBWriteEnableForThreadsAtCLIENTINPUTACTION
		{
		public:
			static void* generate_Program();
			static void terminate_Program();
			static void write_End(void*, unsigned char* bytes);
			static void write_Start(void*, unsigned char* bytes);
		private:
			static void stat_create_Framework();
			static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* stat_get_ptr_Framework();
		};
	}
}