// Generated header

class CLogicPlayerProxy : public CLogicalEntity
{
public:
	virtual ~CLogicPlayerProxy() override; // vtable[0]
	virtual ~CLogicPlayerProxy() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void PassesDamageFilter(CTakeDamageInfo *param_1) override; // vtable[61]

	void InputSetPlayerHealth(inputdata_t *param_1); // size[112]
	void InputSetFlashlightNormalDrain(inputdata_t *param_1); // size[88]
	void InputLowerWeapon(inputdata_t *param_1); // size[88]
	void InputEnableCappedPhysicsDamage(inputdata_t *param_1); // size[88]
	void InputDisableCappedPhysicsDamage(inputdata_t *param_1); // size[88]
	void InputRequestPlayerHealth(inputdata_t *param_1); // size[114]
	void InputRequestAmmoState(inputdata_t *param_1); // size[102]
	void InputSetFlashlightSlowDrain(inputdata_t *param_1); // size[93]
	void GetBaseMap(); // size[10]
};
