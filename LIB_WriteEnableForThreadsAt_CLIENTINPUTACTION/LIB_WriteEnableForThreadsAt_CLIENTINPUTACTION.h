#ifdef LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION
{
	class LIBWRITEENABLEFORTHREADSATCLIENTINPUTACTION_API CLIDWriteEnableForThreadsAtCLIENTINPUTACTION 
	{
	public:
// constructor.
		CLIDWriteEnableForThreadsAtCLIENTINPUTACTION();

// destructor.

// public.
	// dynamic.
		static void* generate_Program();
		static void write_End(WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
		static void write_Start(WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
		// get.
		static WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* get_ptr_Framework();
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
		static void create_Framework();
		// get.
		static WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* newPtr);
	// pointers.
		// classes.
		// registers.
	};
}