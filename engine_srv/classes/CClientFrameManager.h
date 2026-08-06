// Generated header

class CClientFrameManager
{
public:
	virtual ~CClientFrameManager(); // vtable[0]
	virtual ~CClientFrameManager(); // vtable[1]

	void GetClientFrame(int param_1, bool param_2); // size[84]
	void CountClientFrames(); // size[11]
	void AddClientFrame(CClientFrame *param_1); // size[50]
	void AllocateFrame(); // size[40]
	void FreeFrame(CClientFrame *param_1); // size[67]
	void RemoveOldestFrame(); // size[51]
	void DeleteClientFrames(int param_1); // size[170]
	CClientFrameManager(); // size[89]
};
