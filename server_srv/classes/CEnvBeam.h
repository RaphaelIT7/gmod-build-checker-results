// Generated header

class CEnvBeam : public CBeam
{
public:
	virtual ~CEnvBeam() override; // vtable[0]
	virtual ~CEnvBeam() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void GetDecalName() override; // vtable[246]

	void GetBaseMap(); // size[0]
	void TurnOn(); // size[0]
	void InputTurnOn(); // size[0]
	void TurnOff(); // size[0]
	void InputTurnOff(); // size[0]
	void InputToggle(); // size[0]
	void Strike(); // size[0]
	void InputStrikeOnce(); // size[0]
	void PassesTouchFilters(); // size[0]
	void UpdateThink(); // size[0]
	void Zap(); // size[0]
	void RandomArea(); // size[0]
	void RandomPoint(); // size[0]
	void StrikeThink(); // size[0]
	void BeamUpdateVars(); // size[0]
};
