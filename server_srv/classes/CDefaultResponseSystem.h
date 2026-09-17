// Generated header
// Estimated minimum size: 0x56C (1388) bytes

class CDefaultResponseSystem : public CResponseSystem, public CAutoGameSystem
{
public:
	virtual ~CDefaultResponseSystem() override; // vtable[0]
	virtual ~CDefaultResponseSystem() override; // vtable[1]
	virtual void Release(); // vtable[5]
	virtual void DumpRules(); // vtable[6]
	virtual void Precache(); // vtable[7]
	virtual void GetScriptFile(); // vtable[8]
	virtual void Init(); // vtable[9]
	virtual void Shutdown(); // vtable[10]
	virtual void LevelInitPostEntity(); // vtable[11]
	virtual void LevelInitPreEntity(); // vtable[12]
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual ~CDefaultResponseSystem() override; // vtable[13]
	virtual ~CDefaultResponseSystem() override; // vtable[14]

	void DestroyCustomResponseSystems(); // size[82]
	void BuildCustomResponseSystemGivenCriteria(char *param_1, char *param_2, AI_CriteriaSet *param_3, float param_4); // size[24]
};
