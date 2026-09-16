// Generated header
// Estimated minimum size: 0xA8 (168) bytes, no debug info available

class CDecalEmitterSystem : public IDecalEmitterSystem, public CAutoGameSystem
{
public:
	virtual void GetDecalIndexForName(char *param_1); // vtable[0]
	virtual void TranslateDecalForGameMaterial(char *param_1, uchar param_2); // vtable[1]
	virtual void AddDecal(char *param_1, char *param_2); // vtable[2]
	virtual void AddDecalEx(char *param_1, char * *param_2); // vtable[3]
	virtual void GetDecalMaterial(char *param_1); // vtable[4]
	virtual void Init(); // vtable[5]
	virtual void Shutdown(); // vtable[6]
	virtual void LevelInitPreEntity(); // vtable[7]
	virtual void LevelShutdownPostEntity(); // vtable[8]
	virtual ~CDecalEmitterSystem(); // vtable[9]
	virtual ~CDecalEmitterSystem(); // vtable[10]
	virtual void Init() override; // vtable[1]
	virtual void Shutdown() override; // vtable[3]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CDecalEmitterSystem() override; // vtable[13]
	virtual ~CDecalEmitterSystem() override; // vtable[14]

	void ImpactDecalForGameMaterial(int param_1); // size[227]
	void GetDecalMaterialName(int param_1); // size[37]
	void DoModelMaterialPrecache(DecalListEntry *param_1); // size[5]
	void Clear(); // size[75]
	void LoadDecalsFromScript(char *param_1); // size[260]
	CDecalEmitterSystem(char *param_1); // size[280]
};
