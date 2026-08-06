// Generated header

class CFrictionSnapshot : public IPhysicsFrictionSnapshot
{
public:
	virtual ~CFrictionSnapshot(); // vtable[0]
	virtual ~CFrictionSnapshot(); // vtable[1]
	virtual void IsValid(); // vtable[2]
	virtual void GetObject(); // vtable[3]
	virtual void GetMaterial(); // vtable[4]
	virtual void GetContactPoint(); // vtable[5]
	virtual void GetSurfaceNormal(); // vtable[6]
	virtual void GetNormalForce(); // vtable[7]
	virtual void GetEnergyAbsorbed(); // vtable[8]
	virtual void RecomputeFriction(); // vtable[9]
	virtual void ClearFrictionForce(); // vtable[10]
	virtual void MarkContactForDelete(); // vtable[11]
	virtual void DeleteAllMarkedContacts(); // vtable[12]
	virtual void NextFrictionData(); // vtable[13]
	virtual void GetFrictionCoefficient(); // vtable[14]

	_GLOBAL__sub_I_CFrictionSnapshot(); // size[0]
	CFrictionSnapshot(); // size[0]
	void SetFrictionSynapse(); // size[0]
};
