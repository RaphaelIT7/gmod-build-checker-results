// Generated header

class CDefaultResponseSystem : public CResponseSystem, public CAutoGameSystem
{
public:
	virtual void ~CDefaultResponseSystem() override; // vtable[0]
	virtual void ~CDefaultResponseSystem() override; // vtable[1]
	virtual void FindBestResponse() override; // vtable[2]
	virtual void GetAllResponses() override; // vtable[3]
	virtual void PrecacheResponses() override; // vtable[4]
	virtual void Release() override; // vtable[5]
	virtual void DumpRules() override; // vtable[6]
	virtual void Precache() override; // vtable[7]
	virtual void GetScriptFile() override; // vtable[8]
	virtual void Init() override; // vtable[9]
	virtual void Shutdown() override; // vtable[10]
	virtual void LevelInitPostEntity() override; // vtable[11]
	virtual void LevelInitPreEntity() override; // vtable[12]

	void Shutdown();
	void DestroyCustomResponseSystems();
	void Init();
	void BuildCustomResponseSystemGivenCriteria();
	void LevelInitPostEntity();
	void LevelInitPreEntity();
	void ~CDefaultResponseSystem();
	void ~CDefaultResponseSystem();
};
