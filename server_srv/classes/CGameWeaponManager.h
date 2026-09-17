// Generated header
// Estimated minimum size: 0x13D0 (5072) bytes

class CGameWeaponManager : public CBaseEntity
{
public:
	virtual ~CGameWeaponManager() override; // vtable[0]
	virtual ~CGameWeaponManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetMaxPieces(inputdata_t *param_1); // size[29]
	void InputSetAmmoModifier(inputdata_t *param_1); // size[10]
	void GetBaseMap(); // size[10]
};
