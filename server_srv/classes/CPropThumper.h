// Generated header

class CPropThumper : public CBaseAnimating
{
public:
	virtual ~CPropThumper() override; // vtable[0]
	virtual ~CPropThumper() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]

	void InputDisable(inputdata_t *param_1); // size[51]
	void InputEnable(inputdata_t *param_1); // size[51]
	void GetBaseMap(); // size[10]
	void InitMotorSound(); // size[44]
	void HandleState(); // size[151]
	void Thump(); // size[649]
};
