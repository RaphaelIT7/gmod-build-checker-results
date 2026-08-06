// Generated header

class Bootil_Compression_LZMA_ExtractionThread : public Bootil_Threads_Thread, public Bootil_Compression_Job, public Bootil_Compression_ProgressCallback
{
public:
	virtual ~ExtractionThread() override; // vtable[0]
	virtual ~ExtractionThread() override; // vtable[1]
	virtual void Run() override; // vtable[2]
	virtual void OnThreadFinished() override; // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void Destroy(); // vtable[5]
	virtual void Success(); // vtable[6]
	virtual void GetProgress(); // vtable[7]
	virtual void OnProgress(float param_1, uint param_2, uint param_3); // vtable[8]

	void Destroy(); // size[7]
	void OnProgress(float param_1, uint param_2, uint param_3); // size[7]
	void Finished(); // size[7]
	void Success(); // size[7]
	void GetProgress(); // size[7]
};
