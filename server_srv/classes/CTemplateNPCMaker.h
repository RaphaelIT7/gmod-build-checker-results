// Generated header

class CTemplateNPCMaker : public CBaseNPCMaker
{
public:
	virtual void ~CTemplateNPCMaker() override; // vtable[0]
	virtual void ~CTemplateNPCMaker() override; // vtable[1]
	virtual void MakeNPC() override; // vtable[246]
	virtual void FindSpawnDestination(); // vtable[252]
	virtual void _ZN17CTemplateNPCMaker16MakeMultipleNPCSEi(); // vtable[253]
	virtual void PrecacheTemplateEntity(); // vtable[254]
	virtual void iconv_close(); // vtable[255]

	void InputSpawnMultiple();
	void InputChangeDestinationGroup();
	void InputSetMinimumSpawnDistance();
	void GetBaseMap();
	void PlaceNPCInLine();
	void MakeNPCInLine();
	void PlaceNPCInRadius();
	void MakeNPCInRadius();
	void InputSpawnInLine();
	void InputSpawnInRadius();
};
