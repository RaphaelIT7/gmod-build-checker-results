// Generated header

class ChasePath : public PathFollower
{
public:
	virtual ~ChasePath() override; // vtable[0]
	virtual ~ChasePath() override; // vtable[1]
	virtual void Invalidate() override; // vtable[17]
	virtual void Update(); // vtable[35]
	virtual void GetLeadRadius(); // vtable[36]
	virtual void GetMaxPathLength(); // vtable[37]
	virtual void PredictSubjectPosition(); // vtable[38]
	virtual void IsRepathNeeded(); // vtable[39]
	virtual void GetLifetime(); // vtable[40]

	void _GLOBAL__sub_I_PredictSubjectPosition(); // size[0]
	void RefreshPath(); // size[0]
};
