// Generated header

class Bootil_Compression_LZMA_ExtractionThread : public Bootil_Threads_Thread, public Bootil_Compression_Job, public Bootil_Compression_ProgressCallback
{
public:
	virtual void ~ExtractionThread() override; // vtable[0]
	virtual void ~ExtractionThread() override; // vtable[1]
	virtual void Run() override; // vtable[2]
	virtual void FUN_000ec6a0() override; // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void Destroy(); // vtable[5]
	virtual void Success(); // vtable[6]
	virtual void GetProgress(); // vtable[7]
	virtual void _ZN6Bootil11Compression4LZMA16ExtractionThread10OnProgressEfjj(); // vtable[8]

	void Destroy();
	void OnProgress();
	void Finished();
	void Success();
	void GetProgress();
};
