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
	virtual void HandleAnimEvent() override; // vtable[261]

	void InputSetSequence(); // size[0]
	void GetBaseMap(); // size[0]
	void TrailEffectEvent(); // size[0]
	void SpriteEffectEvent(); // size[0]
	void GetScriptElementByName(); // size[0]
	void ParseNewEffect(); // size[0]
	void LoadFromBuffer(); // size[0]
	void ParseScriptFile(); // size[0]
};
