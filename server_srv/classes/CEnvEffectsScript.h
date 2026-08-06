// Generated header

class CEnvEffectsScript : public CBaseAnimating
{
public:
	virtual ~CEnvEffectsScript() override; // vtable[0]
	virtual ~CEnvEffectsScript() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]

	void InputSetSequence(inputdata_t *param_1); // size[112]
	void GetBaseMap(); // size[10]
	void TrailEffectEvent(CEffectScriptElement *param_1); // size[1585]
	void SpriteEffectEvent(CEffectScriptElement *param_1); // size[873]
	void GetScriptElementByName(char *param_1); // size[83]
	void ParseNewEffect(); // size[244]
	void LoadFromBuffer(char *param_1, char *param_2); // size[126]
	void ParseScriptFile(); // size[191]
};
