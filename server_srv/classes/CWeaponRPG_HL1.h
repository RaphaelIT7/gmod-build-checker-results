// Generated header

class CWeaponRPG_HL1 : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponRPG_HL1() override; // vtable[0]
	virtual ~CWeaponRPG_HL1() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Drop(Vector *param_1) override; // vtable[285]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetDefaultClip1() override; // vtable[365]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void GetBaseMap(); // size[10]
	CWeaponRPG_HL1(); // size[328]
	void NotifyRocketDied(); // size[127]
	void CreateLaserPointer(); // size[233]
	void UpdateSpot(); // size[90]
	void IsGuiding(); // size[15]
	void StartGuiding(); // size[162]
	void StopGuiding(); // size[142]
};
