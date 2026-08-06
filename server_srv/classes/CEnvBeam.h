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

	void GetBaseMap(); // size[10]
	void TurnOn(); // size[135]
	void InputTurnOn(inputdata_t *param_1); // size[24]
	void TurnOff(); // size[89]
	void InputTurnOff(inputdata_t *param_1); // size[24]
	void InputToggle(inputdata_t *param_1); // size[31]
	void Strike(); // size[29]
	void InputStrikeOnce(inputdata_t *param_1); // size[9]
	void PassesTouchFilters(CBaseEntity *param_1); // size[178]
	void UpdateThink(); // size[1088]
	void Zap(Vector *param_1, Vector *param_2); // size[26]
	void RandomArea(); // size[715]
	void RandomPoint(Vector *param_1); // size[624]
	void StrikeThink(); // size[345]
	void BeamUpdateVars(); // size[207]
};
