// Generated header

class CDarknessLightSourcesSystem : public CAutoGameSystem
{
public:
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual ~CDarknessLightSourcesSystem() override; // vtable[13]
	virtual ~CDarknessLightSourcesSystem() override; // vtable[14]

	void RemoveLightSource(CInfoDarknessLightSource *param_1); // size[203]
	void SetDebug(bool param_1); // size[175]
	void IsEntityVisibleToTarget(CBaseEntity *param_1, CBaseEntity *param_2); // size[3495]
	void AreThereLightSourcesWithinRadius(CBaseEntity *param_1, float param_2); // size[629]
	void AddLightSource(CInfoDarknessLightSource *param_1, float param_2); // size[163]
};
