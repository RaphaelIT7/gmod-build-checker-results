// Generated header
// Estimated minimum size: 0xC (12) bytes, no debug info available

class CNetMessage : public INetMessage
{
public:
	virtual ~CNetMessage() override; // vtable[0]
	virtual ~CNetMessage() override; // vtable[1]
	virtual void SetNetChannel(INetChannel *param_1); // vtable[2]
	virtual void SetReliable(bool param_1); // vtable[3]
	virtual void Process(); // vtable[4]

	void GetGroup(); // size[7]
	void GetNetChannel(); // size[11]
	void IsReliable(); // size[12]
};
