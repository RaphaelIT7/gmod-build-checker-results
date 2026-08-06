// Generated header

class CBaseRopePhysics : public CSimplePhysics_IHelper
{
public:
	virtual void GetNodeForces(); // vtable[0]
	virtual void ApplyConstraints() override; // vtable[1]

	void _GLOBAL__sub_I_CBaseRopePhysics();
	void SetNumNodes();
	void CBaseRopePhysics();
	void Restart();
	void ResetSpringLength();
	void GetSpringLength();
	void ResetNodeSpringLength();
	void SetupSimulation();
	void SetDelegate();
	void Simulate();
};
