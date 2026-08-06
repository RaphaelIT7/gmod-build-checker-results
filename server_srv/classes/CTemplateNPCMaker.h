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
	virtual void PrecacheTemplateEntity(); // vtable[254]
	virtual void iconv_close(); // vtable[255]

	void InputSpawnMultiple(); // size[0]
	void InputChangeDestinationGroup(); // size[0]
	void InputSetMinimumSpawnDistance(); // size[0]
	void GetBaseMap(); // size[0]
	void PlaceNPCInLine(); // size[0]
	void MakeNPCInLine(); // size[0]
	void PlaceNPCInRadius(); // size[0]
	void MakeNPCInRadius(); // size[0]
	void InputSpawnInLine(); // size[0]
	void InputSpawnInRadius(); // size[0]
};
