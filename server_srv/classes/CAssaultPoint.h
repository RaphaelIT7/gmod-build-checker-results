// Generated header
// Estimated minimum size: 0x13F4 (5108) bytes

class CAssaultPoint : public CPointEntity
{
public:
	virtual ~CAssaultPoint() override; // vtable[0]
	virtual ~CAssaultPoint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void GetBaseMap(); // size[10]
	void InputSetClearOnContact(inputdata_t *param_1); // size[30]
	void InputSetAllowDiversion(inputdata_t *param_1); // size[30]
	void InputSetForceClear(inputdata_t *param_1); // size[30]
};
