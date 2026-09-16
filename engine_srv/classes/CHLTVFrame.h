// Generated header
// Estimated minimum size: 0x4B0 (1200) bytes, no debug info available

class CHLTVFrame : public CClientFrame
{
public:
	virtual ~CHLTVFrame() override; // vtable[0]
	virtual ~CHLTVFrame() override; // vtable[1]
	virtual void IsMemPoolAllocated() override; // vtable[2]

	CHLTVFrame(); // size[71]
	void Reset(); // size[53]
	void HasData(); // size[40]
	void CopyHLTVData(CHLTVFrame *param_1); // size[408]
	void AllocBuffers(); // size[93]
	void FreeBuffers(); // size[96]
};
