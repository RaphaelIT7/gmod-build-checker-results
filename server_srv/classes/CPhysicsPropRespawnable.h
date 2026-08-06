// Generated header

class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	virtual ~CPhysicsPropRespawnable() override; // vtable[0]
	virtual ~CPhysicsPropRespawnable() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]

	void InputBreak(inputdata_t *param_1); // size[22]
	void Materialize(); // size[485]
	void GetBaseMap(); // size[10]
	CPhysicsPropRespawnable(); // size[454]
};
