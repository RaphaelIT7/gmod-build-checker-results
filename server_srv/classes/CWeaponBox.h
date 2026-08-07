// Generated header

class CWeaponBox : public CHL1Item
{
public:
	virtual ~CWeaponBox() override; // vtable[0]
	virtual ~CWeaponBox() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void BoxTouch(CBaseEntity *param_1); // size[178]
	void GetBaseMap(); // size[10]
	void GiveAmmo(int param_1, char *param_2, int param_3, int *param_4); // size[190]
	void PackAmmo(char *param_1, int param_2); // size[103]
};
