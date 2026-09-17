// Generated header
// Estimated minimum size: 0x1C (28) bytes

class SVC_VoiceInit : public CNetMessage
{
public:
	virtual ~SVC_VoiceInit() override; // vtable[0]
	virtual ~SVC_VoiceInit() override; // vtable[1]
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
