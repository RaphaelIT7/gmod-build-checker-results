// Generated header

class CEngine : public IEngine
{
public:
	virtual void ~CEngine() override; // vtable[0]
	virtual void ~CEngine() override; // vtable[1]
	virtual void Load(); // vtable[2]
	virtual void Unload(); // vtable[3]
	virtual void SetNextState(); // vtable[4]
	virtual void GetState(); // vtable[5]
	virtual void Frame(); // vtable[6]
	virtual void GetFrameTime(); // vtable[7]
	virtual void GetCurTime(); // vtable[8]
	virtual void GetQuitting(); // vtable[9]
	virtual void SetQuitting() override; // vtable[10]

	void CEngine();
	void FilterTime();
};
