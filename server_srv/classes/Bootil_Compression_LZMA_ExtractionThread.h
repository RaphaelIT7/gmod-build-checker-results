// Generated header
// Estimated minimum size: 0x4 (4) bytes

class Bootil_Compression_LZMA_ExtractionThread : public Bootil_Threads_Thread, public Bootil_Compression_Job, public Bootil_Compression_ProgressCallback
{
public:
	virtual ~ExtractionThread() override; // vtable[0]
	virtual ~ExtractionThread() override; // vtable[1]
	virtual void Run(); // vtable[2]
	virtual void OnThreadFinished(); // vtable[3]
	virtual void Finished(); // vtable[4]
	virtual void Destroy(); // vtable[5]
	virtual void Success(); // vtable[6]
	virtual void GetProgress(); // vtable[7]
	virtual void OnProgress(float param_1, uint param_2, uint param_3); // vtable[8]
	virtual void Finished(); // vtable[0]
	virtual void Destroy(); // vtable[1]
	virtual void Success(); // vtable[2]
	virtual void GetProgress(); // vtable[3]
	virtual void OnProgress(float param_1, uint param_2, uint param_3); // vtable[0]
};
