// Generated header

class CWorkerThread : public CThread
{
public:
	virtual ~CWorkerThread() override; // vtable[0]
	virtual ~CWorkerThread() override; // vtable[1]

	CWorkerThread(); // size[177]
	void GetCallHandle(); // size[11]
	void GetCallParam(CFunctor * *param_1); // size[29]
	void BoostPriority(); // size[80]
	void WaitForReply(uintparam_1, _func_uint_int_CThreadEvent_ptr_ptr_int_uint *param_2); // size[356]
	void WaitForReply(uintparam_1); // size[34]
	void Call(uintparam_1, uintparam_2, boolparam_3, _func_uint_int_CThreadEvent_ptr_ptr_int_uint *param_4, CFunctor *param_5); // size[219]
	void CallWorker(uintparam_1, uintparam_2, boolparam_3, CFunctor *param_4); // size[56]
	void CallMaster(uintparam_1, uintparam_2); // size[57]
	void WaitForCall(uint *param_1); // size[52]
	void WaitForCall(uintparam_1, uint *param_2); // size[51]
	void PeekCall(uint *param_1, CFunctor * *param_2); // size[73]
	void Reply(uintparam_1); // size[77]
};
