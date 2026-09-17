// Generated header
// Estimated minimum size: 0x13C4 (5060) bytes

class CBlood : public CPointEntity
{
public:
	virtual ~CBlood() override; // vtable[0]
	virtual ~CBlood() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void GetBaseMap(); // size[10]
	void Direction(); // size[72]
	void BloodPosition(CBaseEntity *param_1); // size[9]
	void InputEmitBlood(inputdata_t *param_1); // size[786]
};
