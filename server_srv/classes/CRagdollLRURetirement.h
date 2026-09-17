// Generated header
// Estimated minimum size: 0x50 (80) bytes

class CRagdollLRURetirement : public CAutoGameSystemPerFrame
{
public:
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual ~CRagdollLRURetirement() override; // vtable[13]
	virtual ~CRagdollLRURetirement() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void Update(float param_1); // vtable[19]

	void RemoveAll(); // size[158]
	void MoveToTopOfLRU(CBaseAnimating *param_1, bool param_2); // size[508]
};
