#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API CLIDWriteEnableForThreadsAtSERVERINPUTACTION
		{
		public:
// public.
	// constructor.
			CLIDWriteEnableForThreadsAtSERVERINPUTACTION();

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
			static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		// registers.
		};
	}
}