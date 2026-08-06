// Generated header

class CStdMemAlloc : public IMemAlloc
{
public:
	virtual void Alloc(); // vtable[0]
	virtual void Realloc(); // vtable[1]
	virtual void Free(); // vtable[2]
	virtual void Expand_NoLongerSupported(); // vtable[3]
	virtual void Alloc(); // vtable[4]
	virtual void Realloc(); // vtable[5]
	virtual void Free(); // vtable[6]
	virtual void Expand_NoLongerSupported(); // vtable[7]
	virtual void GetSize(); // vtable[8]
	virtual void PushAllocDbgInfo(); // vtable[9]
	virtual void PopAllocDbgInfo(); // vtable[10]
	virtual void CrtSetBreakAlloc(); // vtable[11]
	virtual void CrtSetReportMode(); // vtable[12]
	virtual void CrtIsValidHeapPointer(); // vtable[13]
	virtual void CrtIsValidPointer(); // vtable[14]
	virtual void CrtCheckMemory(); // vtable[15]
	virtual void CrtSetDbgFlag(); // vtable[16]
	virtual void CrtMemCheckpoint(); // vtable[17]
	virtual void DumpStats(); // vtable[18]
	virtual void DumpStatsFileBase(); // vtable[19]
	virtual void CrtSetReportFile(); // vtable[20]
	virtual void CrtSetReportHook(); // vtable[21]
	virtual void CrtDbgReport(); // vtable[22]
	virtual void heapchk(); // vtable[23]
	virtual void IsDebugHeap(); // vtable[24]
	virtual void GetActualDbgInfo(); // vtable[25]
	virtual void RegisterAllocation(); // vtable[26]
	virtual void RegisterDeallocation(); // vtable[27]
	virtual void GetVersion(); // vtable[28]
	virtual void CompactHeap(); // vtable[29]
	virtual void SetAllocFailHandler(); // vtable[30]
	virtual void DumpBlockStats(); // vtable[31]
	virtual void MemoryAllocFailed(); // vtable[32]
	virtual void GetDebugInfoSize(); // vtable[33]
	virtual void SaveDebugInfo(); // vtable[34]
	virtual void RestoreDebugInfo(); // vtable[35]
	virtual void InitDebugInfo(); // vtable[36]
	virtual void GlobalMemoryStatus(); // vtable[37]

	void DefaultFailHandler();
	void SetCRTAllocFailed();
};
