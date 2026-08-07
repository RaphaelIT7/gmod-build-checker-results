// Generated header

class CFuncTrackChange : public CFuncPlatRot
{
public:
	virtual ~CFuncTrackChange() override; // vtable[0]
	virtual ~CFuncTrackChange() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void IsTogglePlat() override; // vtable[247]
	virtual void GoUp() override; // vtable[248]
	virtual void GoDown() override; // vtable[249]
	virtual void HitTop() override; // vtable[250]
	virtual void HitBottom() override; // vtable[251]
	virtual void UpdateAutoTargets(int param_1); // vtable[252]

	void Find(); // size[275]
	void GetBaseMap(); // size[10]
	void EvaluateTrain(CPathTrack *param_1); // size[451]
	void UpdateTrain(QAngle *param_1); // size[256]
};
