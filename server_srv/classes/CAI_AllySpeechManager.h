// Generated header

class CAI_AllySpeechManager : public CLogicalEntity
{
public:
	virtual ~CAI_AllySpeechManager() override; // vtable[0]
	virtual ~CAI_AllySpeechManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void GetConceptCategoryInfo(ConceptCategory_t param_1); // size[16]
	void SetCategoryDelay(ConceptCategory_t param_1, float param_2, float param_3); // size[139]
	void CategoryDelayExpired(ConceptCategory_t param_1); // size[54]
	void GetBaseMap(); // size[10]
	void GetConceptInfo(char *param_1); // size[58]
	void OnSpokeConcept(CAI_PlayerAlly *param_1, char *param_2, AI_Response *param_3); // size[1079]
	void ConceptDelayExpired(char *param_1); // size[122]
	CAI_AllySpeechManager(); // size[26]
	void AddCustomConcept(ConceptInfo_t *param_1); // size[75]
};
