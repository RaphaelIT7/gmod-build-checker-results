// Generated header

class CCitadelEnergyCore : public CBaseEntity
{
public:
	virtual ~CCitadelEnergyCore() override; // vtable[0]
	virtual ~CCitadelEnergyCore() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void StartCharge(floatparam_1); // size[48]
	void InputStartCharge(inputdata_t *param_1); // size[3]
	void StartDischarge(); // size[48]
	void InputStartDischarge(inputdata_t *param_1); // size[9]
	void StopDischarge(floatparam_1); // size[48]
	void InputStop(inputdata_t *param_1); // size[37]
};
