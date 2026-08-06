// Generated header

class CFrictionSnapshot : public IPhysicsFrictionSnapshot
{
public:
	virtual ~CFrictionSnapshot(); // vtable[0]
	virtual ~CFrictionSnapshot(); // vtable[1]
	virtual void IsValid(); // vtable[2]
	virtual void GetObject(int param_1); // vtable[3]
	virtual void GetMaterial(int param_1); // vtable[4]
	virtual void GetContactPoint(Vector *param_1); // vtable[5]
	virtual void GetSurfaceNormal(Vector *param_1); // vtable[6]
	virtual void GetNormalForce(); // vtable[7]
	virtual void GetEnergyAbsorbed(); // vtable[8]
	virtual void RecomputeFriction(); // vtable[9]
	virtual void ClearFrictionForce(); // vtable[10]
	virtual void MarkContactForDelete(); // vtable[11]
	virtual void DeleteAllMarkedContacts(bool param_1); // vtable[12]
	virtual void NextFrictionData(); // vtable[13]
	virtual void GetFrictionCoefficient(); // vtable[14]

	_GLOBAL__sub_I_CFrictionSnapshot(); // size[1]
	CFrictionSnapshot(IVP_Real_Object *param_1); // size[83]
	void SetFrictionSynapse(IVP_Synapse_Friction *param_1); // size[64]
};
