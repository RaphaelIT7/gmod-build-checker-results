// Generated header

class CGrenadeBeam : public CBaseGrenade
{
public:
	virtual ~CGrenadeBeam() override; // vtable[0]
	virtual ~CGrenadeBeam() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void KillBeam(); // size[67]
	void GetBaseMap(); // size[10]
	void Create(CBaseEntity *param_1, Vector *param_2); // size[413]
	void Format(color32_sparam_1, floatparam_2); // size[38]
	void GetChaserTargetPos(Vector *param_1); // size[182]
	void CreateBeams(); // size[775]
	void UpdateBeams(); // size[614]
	void GrenadeBeamTouch(CBaseEntity *param_1); // size[1335]
	void GetNextTargetPos(Vector *param_1); // size[182]
	void Shoot(Vectorparam_1, floatparam_2, floatparam_3, floatparam_4, floatparam_5); // size[71]
};
