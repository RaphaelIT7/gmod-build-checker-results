// Generated header

class CPhysForce : public CPointEntity
{
public:
	virtual ~CPhysForce() override; // vtable[0]
	virtual ~CPhysForce() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void SetPhysObject(int param_1, IPhysicsObject *param_2) override; // vtable[209]
	virtual void __cxa_pure_virtual(); // vtable[246]
	virtual void OnActivate(); // vtable[247]

	void ForceOff(); // size[109]
	void InputDeactivate(inputdata_t *param_1); // size[9]
	void GetBaseMap(); // size[10]
	CPhysForce(); // size[26]
	void ActivateForce(); // size[481]
	void ForceOn(); // size[79]
	void ForceOn(); // size[24]
	void InputActivate(inputdata_t *param_1); // size[24]
	void ScaleForce(float param_1); // size[216]
	void InputForceScale(inputdata_t *param_1); // size[37]
};
