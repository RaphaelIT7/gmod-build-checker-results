// Generated header

class CTraceSolverSweptObject : public CTraceSolver
{
public:
	virtual void DoSweep() override; // vtable[0]

	void SweepLedgeTree_r(IVP_Compact_Ledgetree_Node *param_1); // size[23]
	void DoSweep(); // size[40]
	CTraceSolverSweptObject(CGameTrace *param_1, ITraceObject *param_2, CTraceRay *param_3, CTraceIVP *param_4, Vector *param_5, uintparam_6, IConvexInfo *param_7); // size[209]
	void InitOSRay(); // size[431]
	void SweepLedgeTree_r(IVP_Compact_Ledgetree_Node *param_1); // size[1590]
	void SweepAgainstNode(IVP_Compact_Ledgetree_Node *param_1); // size[510]
};
