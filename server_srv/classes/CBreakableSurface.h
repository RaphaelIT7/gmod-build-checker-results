// Generated header

class CBreakableSurface : public CBreakable
{
public:
	virtual void ~CBreakableSurface() override; // vtable[0]
	virtual void ~CBreakableSurface() override; // vtable[1]

	void InputRestore();
	void Die();
	void GetBaseMap();
	void Die();
	void Event_Killed();
	void IsBroken();
	void SetSupport();
	void GetSupport();
	void RecalcSupport();
	void PanePos();
	void BreakPane();
	void BreakAllPanes();
	void CreateShards();
	void DropPane();
	void ShatterPane();
	void BreakThink();
	void SurfaceTouch();
	void InputShatter();
};
