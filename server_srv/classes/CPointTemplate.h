// Generated header

class CPointTemplate : public CLogicalEntity
{
public:
	virtual ~CPointTemplate() override; // vtable[0]
	virtual ~CPointTemplate() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void PerformPrecache(); // vtable[246]

	void GetBaseMap(); // size[1]
	void AllowNameFixup(); // size[22]
	void ShouldRemoveTemplateEntities(); // size[23]
	void GetNumTemplates(); // size[14]
	void GetTemplateIndexForTemplate(int param_1); // size[27]
	void GetNumTemplateEntities(); // size[14]
	void GetTemplateEntity(int param_1); // size[65]
	void FinishBuildingTemplates(); // size[59]
	void StartBuildingTemplates(); // size[307]
	void AddTemplate(CBaseEntity *param_1, char *param_2, int param_3); // size[430]
	void CreateInstance(Vector *param_1, QAngle *param_2, CUtlVector *param_3); // size[897]
	void InputForceSpawn(inputdata_t *param_1); // size[177]
};
