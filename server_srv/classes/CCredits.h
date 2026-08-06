// Generated header

class CCredits : public CPointEntity
{
public:
	virtual ~CCredits() override; // vtable[0]
	virtual ~CCredits() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void OnRestore() override; // vtable[45]

	void InputSetLogoLength(inputdata_t *param_1); // size[33]
	void GetBaseMap(); // size[10]
	void RollOutroCredits(); // size[39]
	void InputRollOutroCredits(inputdata_t *param_1); // size[31]
	void InputShowLogo(inputdata_t *param_1); // size[22]
	void InputRollCredits(inputdata_t *param_1); // size[19]
};
