// Generated header

class CStaticPropMgr : public IStaticPropMgrEngine, public IStaticPropMgrClient, public IStaticPropMgrServer
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void LevelInit(); // vtable[2]
	virtual void LevelInitClient(); // vtable[3]
	virtual void LevelShutdownClient() override; // vtable[4]
	virtual void LevelShutdown(); // vtable[5]
	virtual void RecomputeStaticLighting(); // vtable[6]
	virtual void IsPropInPVS() override; // vtable[7]
	virtual void GetStaticProp(); // vtable[8]
	virtual void GetLightCacheHandleForStaticProp(); // vtable[9]
	virtual void IsStaticProp(); // vtable[10]
	virtual void IsStaticProp(); // vtable[11]
	virtual void GetStaticPropIndex(); // vtable[12]
	virtual void PropHasBakedLightingDisabled() override; // vtable[13]
	virtual void ~CStaticPropMgr(); // vtable[14]
	virtual void ~CStaticPropMgr(); // vtable[15]
	virtual void GetStaticPropByIndex(); // vtable[16]
	virtual void ComputePropOpacity(); // vtable[17]
	virtual void TraceRayAgainstStaticProp(); // vtable[18]
	virtual void AddDecalToStaticProp(); // vtable[19]
	virtual void AddShadowToStaticProp(); // vtable[20]
	virtual void RemoveAllShadowsFromStaticProp(); // vtable[21]
	virtual void GetStaticPropMaterialColorAndLighting(); // vtable[22]
	virtual void CreateVPhysicsRepresentations(); // vtable[23]
	virtual void GetAllStaticProps(); // vtable[24]
	virtual void GetAllStaticPropsInAABB(); // vtable[25]
	virtual void GetAllStaticPropsInOBB(); // vtable[26]
	virtual void DrawStaticProps(); // vtable[27]

	void GetStaticPropByIndex();
	void GetStaticPropByIndex();
	void IsStaticProp();
	void IsStaticProp();
	void IsStaticProp();
	void IsStaticProp();
	void ComputePropOpacity();
	void TraceRayAgainstStaticProp();
	void TraceRayAgainstStaticProp();
	void AddDecalToStaticProp();
	void AddShadowToStaticProp();
	void RemoveAllShadowsFromStaticProp();
	void GetStaticPropMaterialColorAndLighting();
	void CreateVPhysicsRepresentations();
	void CreateVPhysicsRepresentations();
	void OutputLevelStats();
	void PrecacheLighting();
	void DrawStaticProps_Slow();
	void DrawStaticProps_Fast();
	void DrawStaticProps_FastPipeline();
	void DrawStaticProps();
	void ComputeScreenFade();
	void ChangeRenderGroup();
	void ComputePropOpacity();
	void CStaticPropMgr();
	void UnserializeModelDict();
	void UnserializeLeafList();
	void UnserializeModels();
	void UnserializeStaticProps();
	void GetAllStaticProps();
	void GetAllStaticProps();
	void GetAllStaticPropsInAABB();
	void GetAllStaticPropsInAABB();
	void GetAllStaticPropsInOBB();
	void GetAllStaticPropsInOBB();
};
