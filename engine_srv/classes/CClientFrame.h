// Generated header
// Estimated minimum size: 0x41C (1052) bytes

class CClientFrame
{
public:
	virtual ~CClientFrame(); // vtable[0]
	virtual ~CClientFrame(); // vtable[1]
	virtual void IsMemPoolAllocated(); // vtable[2]

	_GLOBAL__sub_I_CClientFrame(); // size[48]
	CClientFrame(int param_1); // size[58]
	CClientFrame(); // size[6]
	void Init(int param_1); // size[14]
	void SetSnapshot(CFrameSnapshot *param_1); // size[67]
	void Init(CFrameSnapshot *param_1); // size[21]
	CClientFrame(CFrameSnapshot *param_1); // size[108]
	void CopyFrame(CClientFrame *param_1); // size[96]
};
