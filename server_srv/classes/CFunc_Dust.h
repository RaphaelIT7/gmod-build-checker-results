// Generated header

class CFunc_Dust : public CBaseEntity
{
public:
	virtual ~CFunc_Dust() override; // vtable[0]
	virtual ~CFunc_Dust() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_GetServerClass(); // size[113]
	void InputTurnOff(inputdata_t *param_1); // size[69]
	void InputTurnOn(inputdata_t *param_1); // size[69]
	void GetBaseMap(); // size[10]
	CFunc_Dust(); // size[28]
};
