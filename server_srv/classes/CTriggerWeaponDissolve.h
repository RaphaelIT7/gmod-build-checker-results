// Generated header

class CTriggerWeaponDissolve : public CTriggerMultiple
{
public:
	virtual ~CTriggerWeaponDissolve() override; // vtable[0]
	virtual ~CTriggerWeaponDissolve() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void StartTouch() override; // vtable[101]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputStopSound(); // size[0]
	void GetBaseMap(); // size[0]
	void CreateBeam(); // size[0]
	void GetConduitPoint(); // size[0]
	void DissolveThink(); // size[0]
	void AddWeapon(); // size[0]
};
