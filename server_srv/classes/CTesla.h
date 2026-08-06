// Generated header

class CTesla : public CBaseEntity
{
public:
	virtual ~CTesla() override; // vtable[0]
	virtual ~CTesla() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void SetupForNextArc(); // size[93]
	void InputTurnOn(inputdata_t *param_1); // size[16]
	void GetBaseMap(); // size[10]
	CTesla(); // size[28]
	void SetupForNextArc(); // size[56]
	void InputTurnOff(inputdata_t *param_1); // size[19]
	void GetSourceEntity(); // size[94]
	void DoSpark(); // size[323]
	void ShootArcThink(); // size[31]
	void InputDoSpark(inputdata_t *param_1); // size[9]
};
