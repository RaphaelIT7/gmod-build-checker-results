// Generated header

class CBaseRopePhysics : public CSimplePhysics_IHelper
{
public:
	virtual void GetNodeForces(CNode *param_1, intparam_2, Vector *param_3); // vtable[0]
	virtual void ApplyConstraints(CNode *param_1, intparam_2) override; // vtable[1]

	_GLOBAL__sub_I_CBaseRopePhysics(); // size[48]
	void SetNumNodes(intparam_1); // size[104]
	CBaseRopePhysics(CNode *param_1, intparam_2, CRopeSpring *param_3, float *param_4); // size[407]
	void Restart(); // size[30]
	void ResetSpringLength(floatparam_1); // size[91]
	void GetSpringLength(); // size[24]
	void ResetNodeSpringLength(intparam_1, floatparam_2); // size[28]
	void SetupSimulation(floatparam_1, IHelper *param_2); // size[41]
	void SetDelegate(IHelper *param_1); // size[14]
	void Simulate(floatparam_1); // size[59]
};
