// Generated header

class CTemplateNPCMaker : public CBaseNPCMaker
{
public:
	virtual ~CTemplateNPCMaker() override; // vtable[0]
	virtual ~CTemplateNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void MakeNPC() override; // vtable[246]
	virtual void FindSpawnDestination(); // vtable[252]
	virtual void _ZN17CTemplateNPCMaker16MakeMultipleNPCSEi(); // vtable[253]
	virtual void PrecacheTemplateEntity(CBaseEntity *param_1); // vtable[254]
	virtual void iconv_close(); // vtable[255]

	void InputSpawnMultiple(inputdata_t *param_1); // size[41]
	void InputChangeDestinationGroup(inputdata_t *param_1); // size[29]
	void InputSetMinimumSpawnDistance(inputdata_t *param_1); // size[29]
	void GetBaseMap(); // size[10]
	void PlaceNPCInLine(CAI_BaseNPC *param_1); // size[493]
	void MakeNPCInLine(); // size[166]
	void PlaceNPCInRadius(CAI_BaseNPC *param_1); // size[155]
	void MakeNPCInRadius(); // size[165]
	void InputSpawnInLine(inputdata_t *param_1); // size[9]
	void InputSpawnInRadius(inputdata_t *param_1); // size[9]
};
