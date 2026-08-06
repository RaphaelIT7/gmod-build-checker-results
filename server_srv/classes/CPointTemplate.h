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

	void GetBaseMap(); // size[0]
	void AllowNameFixup(); // size[0]
	void ShouldRemoveTemplateEntities(); // size[0]
	void GetNumTemplates(); // size[0]
	void GetTemplateIndexForTemplate(); // size[0]
	void GetNumTemplateEntities(); // size[0]
	void GetTemplateEntity(); // size[0]
	void FinishBuildingTemplates(); // size[0]
	void StartBuildingTemplates(); // size[0]
	void AddTemplate(); // size[0]
	void CreateInstance(); // size[0]
	void InputForceSpawn(); // size[0]
};
