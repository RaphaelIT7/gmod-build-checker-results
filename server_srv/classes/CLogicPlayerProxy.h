// Generated header

class CLogicPlayerProxy : public CLogicalEntity
{
public:
	virtual ~CLogicPlayerProxy() override; // vtable[0]
	virtual ~CLogicPlayerProxy() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void PassesDamageFilter() override; // vtable[61]

	void InputSetPlayerHealth(); // size[0]
	void InputSetFlashlightNormalDrain(); // size[0]
	void InputLowerWeapon(); // size[0]
	void InputEnableCappedPhysicsDamage(); // size[0]
	void InputDisableCappedPhysicsDamage(); // size[0]
	void InputRequestPlayerHealth(); // size[0]
	void InputRequestAmmoState(); // size[0]
	void InputSetFlashlightSlowDrain(); // size[0]
	void GetBaseMap(); // size[0]
};
