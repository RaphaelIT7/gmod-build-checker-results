// Generated header

class CLogicCollisionPair : public CLogicalEntity
{
public:
	virtual ~CLogicCollisionPair() override; // vtable[0]
	virtual ~CLogicCollisionPair() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void SetPhysObject(intparam_1, IPhysicsObject *param_2) override; // vtable[209]

	void GetBaseMap(); // size[10]
	void InputEnableCollisions(inputdata_t *param_1); // size[247]
	void InputDisableCollisions(inputdata_t *param_1); // size[247]
};
