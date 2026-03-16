#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
	{
		class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
		{
		public:
// public.
	// constructor.
			CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE();

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
			static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		// registers.
		};
	}
}