// Generated header

class CAlyxEmpEffect : public CBaseEntity
{
public:
	virtual ~CAlyxEmpEffect() override; // vtable[0]
	virtual ~CAlyxEmpEffect() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void SetTargetEntity(char *param_1); // size[159]
	void InputSetTargetEnt(inputdata_t *param_1); // size[75]
	void SetTargetEntity(CBaseEntity *param_1); // size[37]
	void ActivateAutomatic(CBaseEntity *param_1, CBaseEntity *param_2); // size[154]
	void StartCharge(float param_1); // size[25]
	void InputStartCharge(inputdata_t *param_1); // size[37]
	void StartDischarge(); // size[15]
	void InputStartDischarge(inputdata_t *param_1); // size[9]
	void Stop(float param_1); // size[55]
	void AutomaticThink(); // size[148]
	void InputStop(inputdata_t *param_1); // size[37]
};
