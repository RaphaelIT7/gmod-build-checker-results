// Generated header

class CFuncPlat : public CBasePlatTrain
{
public:
	virtual ~CFuncPlat() override; // vtable[0]
	virtual ~CFuncPlat() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Blocked(CBaseEntity *param_1) override; // vtable[105]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void GoUp(); // vtable[248]
	virtual void GoDown(); // vtable[249]
	virtual void HitTop(); // vtable[250]
	virtual void HitBottom(); // vtable[251]

	void InputToggle(inputdata_t *param_1); // size[25]
	void InputGoUp(inputdata_t *param_1); // size[28]
	void InputGoDown(inputdata_t *param_1); // size[29]
	void PlatUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[132]
	void GetBaseMap(); // size[10]
	void Setup(); // size[116]
	void CallGoDown(); // size[17]
	void CallHitTop(); // size[17]
	void CallHitBottom(); // size[17]
};
