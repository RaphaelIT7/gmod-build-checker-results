// Generated header

class CDefaultResponseSystem : public CResponseSystem, public CAutoGameSystem
{
public:
	virtual ~CDefaultResponseSystem() override; // vtable[0]
	virtual ~CDefaultResponseSystem() override; // vtable[1]
	virtual void FindBestResponse(AI_CriteriaSet *param_1, AI_Response *param_2, IResponseFilter *param_3) override; // vtable[2]
	virtual void GetAllResponses(CUtlVector *param_1) override; // vtable[3]
	virtual void PrecacheResponses(bool param_1) override; // vtable[4]
	virtual void Release() override; // vtable[5]
	virtual void DumpRules() override; // vtable[6]
	virtual void Precache() override; // vtable[7]
	virtual void GetScriptFile() override; // vtable[8]
	virtual void Init() override; // vtable[9]
	virtual void Shutdown() override; // vtable[10]
	virtual void LevelInitPostEntity() override; // vtable[11]
	virtual void LevelInitPreEntity() override; // vtable[12]

	void Shutdown(); // size[10]
	void DestroyCustomResponseSystems(); // size[82]
	void Init(); // size[10]
	void BuildCustomResponseSystemGivenCriteria(char *param_1, char *param_2, AI_CriteriaSet *param_3, float param_4); // size[24]
	void LevelInitPostEntity(); // size[10]
	void LevelInitPreEntity(); // size[10]
	~CDefaultResponseSystem(); // size[13]
	~CDefaultResponseSystem(); // size[13]
};
