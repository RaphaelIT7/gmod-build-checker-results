// Generated header

class CBaseRopePhysics : public CSimplePhysics_IHelper
{
public:
	virtual void GetNodeForces(); // vtable[0]
	virtual void ApplyConstraints() override; // vtable[1]

	_GLOBAL__sub_I_CBaseRopePhysics(); // size[0]
	void SetNumNodes(); // size[0]
	CBaseRopePhysics(); // size[0]
	void Restart(); // size[0]
	void ResetSpringLength(); // size[0]
	void GetSpringLength(); // size[0]
	void ResetNodeSpringLength(); // size[0]
	void SetupSimulation(); // size[0]
	void SetDelegate(); // size[0]
	void Simulate(); // size[0]
};
