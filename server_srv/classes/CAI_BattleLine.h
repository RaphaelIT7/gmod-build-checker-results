// Generated header

class CAI_BattleLine : public CBaseEntity
{
public:
	virtual ~CAI_BattleLine() override; // vtable[0]
	virtual ~CAI_BattleLine() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void InputActivate(inputdata_t *param_1); // vtable[246]
	virtual void InputDeactivate(inputdata_t *param_1); // vtable[247]

	void GetBaseMap(); // size[10]
	void MovementThink(); // size[501]
};
