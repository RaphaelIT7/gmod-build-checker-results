// Generated header
// Estimated minimum size: 0x8 (8) bytes

class CTraceSolverSweptObject : public CTraceSolver
{
public:
	virtual void DoSweep() override; // vtable[0]

	void SweepLedgeTree_r(IVP_Compact_Ledgetree_Node *param_1); // size[20]
	void DoSweep(); // size[29]
	CTraceSolverSweptObject(CGameTrace *param_1, ITraceObject *param_2, CTraceRay *param_3, CTraceIVP *param_4, Vector *param_5, uint param_6, IConvexInfo *param_7); // size[250]
	void InitOSRay(); // size[424]
	void SweepLedgeTree_r(IVP_Compact_Ledgetree_Node *param_1); // size[1478]
	void SweepAgainstNode(IVP_Compact_Ledgetree_Node *param_1); // size[562]
};
