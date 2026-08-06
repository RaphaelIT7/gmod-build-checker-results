// Generated header

class CDecalEmitterSystem : public IDecalEmitterSystem, public CAutoGameSystem
{
public:
	virtual void GetDecalIndexForName() override; // vtable[0]
	virtual void TranslateDecalForGameMaterial() override; // vtable[1]
	virtual void AddDecal() override; // vtable[2]
	virtual void AddDecalEx() override; // vtable[3]
	virtual void GetDecalMaterial() override; // vtable[4]
	virtual void Init() override; // vtable[5]
	virtual void Shutdown() override; // vtable[6]
	virtual void LevelInitPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CDecalEmitterSystem() override; // vtable[9]
	virtual ~CDecalEmitterSystem() override; // vtable[10]

	void LevelInitPreEntity(); // size[0]
	void ImpactDecalForGameMaterial(); // size[0]
	void GetDecalMaterialName(); // size[0]
	void DoModelMaterialPrecache(); // size[0]
	void Clear(); // size[0]
	void Shutdown(); // size[0]
	void LoadDecalsFromScript(); // size[0]
	void Init(); // size[0]
	void LevelShutdownPostEntity(); // size[0]
	CDecalEmitterSystem(); // size[0]
	~CDecalEmitterSystem(); // size[0]
	~CDecalEmitterSystem(); // size[0]
};
