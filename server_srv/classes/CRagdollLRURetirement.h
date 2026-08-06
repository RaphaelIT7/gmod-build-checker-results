// Generated header

class CRagdollLRURetirement : public CAutoGameSystemPerFrame
{
public:
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual ~CRagdollLRURetirement() override; // vtable[13]
	virtual ~CRagdollLRURetirement() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void Update(floatparam_1); // vtable[19]
	virtual void __cxa_allocate_exception(); // vtable[20]

	void RemoveAll(); // size[158]
	void MoveToTopOfLRU(CBaseAnimating *param_1, boolparam_2); // size[508]
};
