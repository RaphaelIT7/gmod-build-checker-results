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
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputStopSound(inputdata_t *param_1); // size[46]
	void GetBaseMap(); // size[10]
	void CreateBeam(Vector *param_1, CBaseEntity *param_2, floatparam_3); // size[26]
	void GetConduitPoint(CBaseEntity *param_1); // size[429]
	void DissolveThink(); // size[810]
	void AddWeapon(CBaseCombatWeapon *param_1); // size[437]
};
