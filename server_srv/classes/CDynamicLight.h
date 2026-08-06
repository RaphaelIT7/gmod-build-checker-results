// Generated header

class CDynamicLight : public CBaseEntity
{
public:
	virtual ~CDynamicLight() override; // vtable[0]
	virtual ~CDynamicLight() override; // vtable[1]
	virtual void _ZN13CDynamicLight14GetServerClassEv() override; // vtable[10]
	virtual void _ZN13CDynamicLight40YouForgotToImplementOrDeclareServerClassEv() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void DynamicLightThink(); // size[246]
	void InputTurnOff(inputdata_t *param_1); // size[93]
	void InputTurnOn(inputdata_t *param_1); // size[92]
	void InputToggle(inputdata_t *param_1); // size[36]
	void GetBaseMap(); // size[10]
};
