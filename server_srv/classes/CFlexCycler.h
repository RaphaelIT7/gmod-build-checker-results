// Generated header

class CFlexCycler : public CBaseFlex
{
public:
	virtual ~CFlexCycler() override; // vtable[0]
	virtual ~CFlexCycler() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Think() override; // vtable[48]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void IsAlive() override; // vtable[67]
	virtual void ProcessSceneEvents() override; // vtable[284]

	void GetBaseMap(); // size[10]
	void GenericCyclerSpawn(char *param_1, Vector param_2, Vector param_3); // size[124]
	void SetFlexTarget(LocalFlexController_t param_1); // size[374]
	void LookupFlex(char *param_1); // size[87]
};
