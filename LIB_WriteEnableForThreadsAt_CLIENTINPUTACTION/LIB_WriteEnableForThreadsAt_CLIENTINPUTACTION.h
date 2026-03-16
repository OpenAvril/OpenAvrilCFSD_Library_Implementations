#ifdef LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION
	{
		class LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API CLIDWriteEnableForThreadsAtCLIENTINPUTACTION
		{
		public:
// public.
	// constructor.
			CLIDWriteEnableForThreadsAtCLIENTINPUTACTION();

	// destructor.

	// dynamic.
			static void* generate_Program();
			static void terminate_Program();
			static void write_End(void*, uint8_t coreId);
			static void write_Start(void*, uint8_t coreId);
		// get.
		// set.
	// static.
		// get.
		// set.

		private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
			static void stat_create_Framework();
		// get.
			static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		// registers.
		};
	}
}