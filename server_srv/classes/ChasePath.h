// Generated header

class ChasePath : public PathFollower
{
public:
	virtual ~ChasePath() override; // vtable[0]
	virtual ~ChasePath() override; // vtable[1]
	virtual void Invalidate() override; // vtable[17]
	virtual void Update(INextBot *param_1, CBaseEntity *param_2, IPathCost *param_3, Vector *param_4); // vtable[35]
	virtual void GetLeadRadius(); // vtable[36]
	virtual void GetMaxPathLength(); // vtable[37]
	virtual void PredictSubjectPosition(INextBot *param_1, CBaseEntity *param_2); // vtable[38]
	virtual void IsRepathNeeded(INextBot *param_1, CBaseEntity *param_2); // vtable[39]
	virtual void GetLifetime(); // vtable[40]

	void _GLOBAL__sub_I_PredictSubjectPosition(); // size[113]
	void RefreshPath(INextBot *param_1, CBaseEntity *param_2, IPathCost *param_3, Vector *param_4); // size[4368]
};
