// Generated header

class CCitadelEnergyCore : public CBaseEntity
{
public:
	virtual ~CCitadelEnergyCore() override; // vtable[0]
	virtual ~CCitadelEnergyCore() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit() override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void StartCharge(); // size[0]
	void InputStartCharge(); // size[0]
	void StartDischarge(); // size[0]
	void InputStartDischarge(); // size[0]
	void StopDischarge(); // size[0]
	void InputStop(); // size[0]
};
