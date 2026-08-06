// Generated header

class CEnvStarfield : public CBaseEntity
{
public:
	virtual ~CEnvStarfield() override; // vtable[0]
	virtual ~CEnvStarfield() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputTurnOn(inputdata_t *param_1); // size[86]
	void InputTurnOff(inputdata_t *param_1); // size[99]
	void InputSetDensity(inputdata_t *param_1); // size[68]
	void GetBaseMap(); // size[10]
};
