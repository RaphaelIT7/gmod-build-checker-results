// Generated header
// Estimated minimum size: 0x14 (20) bytes, no debug info available

class SVC_SetPause : public CNetMessage
{
public:
	virtual ~SVC_SetPause() override; // vtable[0]
	virtual ~SVC_SetPause() override; // vtable[1]
	virtual void Process() override; // vtable[4]
	virtual void ReadFromBuffer(bf_read *param_1); // vtable[5]
	virtual void WriteToBuffer(bf_write *param_1); // vtable[6]
	virtual void IsReliable(); // vtable[7]
	virtual void GetType(); // vtable[8]
	virtual void GetGroup(); // vtable[9]
	virtual void GetName(); // vtable[10]
	virtual void GetNetChannel(); // vtable[11]
	virtual void ToString(); // vtable[12]
};
