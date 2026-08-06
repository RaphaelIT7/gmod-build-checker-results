// Generated header

class CDecalEmitterSystem : public IDecalEmitterSystem, public CAutoGameSystem
{
public:
	virtual void GetDecalIndexForName(char *param_1) override; // vtable[0]
	virtual void TranslateDecalForGameMaterial(char *param_1, uchar param_2) override; // vtable[1]
	virtual void AddDecal(char *param_1, char *param_2) override; // vtable[2]
	virtual void AddDecalEx(char *param_1, char * *param_2) override; // vtable[3]
	virtual void GetDecalMaterial(char *param_1) override; // vtable[4]
	virtual void Init() override; // vtable[5]
	virtual void Shutdown() override; // vtable[6]
	virtual void LevelInitPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CDecalEmitterSystem() override; // vtable[9]
	virtual ~CDecalEmitterSystem() override; // vtable[10]

	void LevelInitPreEntity(); // size[10]
	void ImpactDecalForGameMaterial(int param_1); // size[227]
	void GetDecalMaterialName(int param_1); // size[37]
	void DoModelMaterialPrecache(DecalListEntry *param_1); // size[5]
	void Clear(); // size[75]
	void Shutdown(); // size[7]
	void LoadDecalsFromScript(char *param_1); // size[260]
	void Init(); // size[7]
	void LevelShutdownPostEntity(); // size[7]
	CDecalEmitterSystem(char *param_1); // size[280]
	~CDecalEmitterSystem(); // size[10]
	~CDecalEmitterSystem(); // size[10]
};
