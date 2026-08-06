// Generated header

class CCitizenResponseSystem : public CBaseEntity
{
public:
	virtual ~CCitizenResponseSystem() override; // vtable[0]
	virtual ~CCitizenResponseSystem() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void OnRestore() override; // vtable[45]

	void ResponseThink(); // size[459]
	void GetBaseMap(); // size[10]
	void AddResponseTrigger(citizenresponses_t param_1); // size[73]
	void InputResponseVitalNPC(inputdata_t *param_1); // size[16]
};
