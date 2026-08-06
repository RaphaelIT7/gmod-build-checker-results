// Generated header

class CEnvBeam : public CBeam
{
public:
	virtual void ~CEnvBeam() override; // vtable[0]
	virtual void ~CEnvBeam() override; // vtable[1]

	void GetBaseMap();
	void TurnOn();
	void InputTurnOn();
	void TurnOff();
	void InputTurnOff();
	void InputToggle();
	void Strike();
	void InputStrikeOnce();
	void PassesTouchFilters();
	void UpdateThink();
	void Zap();
	void RandomArea();
	void RandomPoint();
	void StrikeThink();
	void BeamUpdateVars();
};
