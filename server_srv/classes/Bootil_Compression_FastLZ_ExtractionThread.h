// Generated header

class Bootil_Compression_FastLZ_ExtractionThread : public Bootil_Threads_Thread, public Bootil_Compression_Job
{
public:
	virtual void ~ExtractionThread() override; // vtable[0]
	virtual void ~ExtractionThread() override; // vtable[1]
	virtual void Run() override; // vtable[2]
	virtual void OnThreadFinished() override; // vtable[3]
	virtual void Finished(); // vtable[4]
	virtual void Destroy(); // vtable[5]
	virtual void Success(); // vtable[6]
	virtual void GetProgress(); // vtable[7]

	void Destroy();
	void GetProgress();
	void Finished();
	void Success();
};
