#ifdef LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
	{
		class LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
		{
		public:
// public.
	// constructor.
			CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE();

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
			static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		// registers.
		};
	}
}