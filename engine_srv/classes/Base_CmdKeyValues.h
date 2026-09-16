// Generated header
// Estimated minimum size: 0x24 (36) bytes, no debug info available

class Base_CmdKeyValues : public CNetMessage
{
public:
	virtual ~Base_CmdKeyValues() override; // vtable[0]
	virtual ~Base_CmdKeyValues() override; // vtable[1]
	virtual void ReadFromBuffer(bf_read *param_1); // vtable[5]
	virtual void WriteToBuffer(bf_write *param_1); // vtable[6]
	virtual void IsReliable(); // vtable[7]

	void ToString(); // size[89]
	Base_CmdKeyValues(KeyValues *param_1); // size[31]
};
