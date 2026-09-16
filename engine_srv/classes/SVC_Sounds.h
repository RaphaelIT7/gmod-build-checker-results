// Generated header
// Estimated minimum size: 0x44 (68) bytes, no debug info available

class SVC_Sounds : public CNetMessage
{
public:
	virtual ~SVC_Sounds() override; // vtable[0]
	virtual ~SVC_Sounds() override; // vtable[1]
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
