// Generated header

class CAI_DynamicLinkController : public CServerOnlyEntity
{
public:
	virtual ~CAI_DynamicLinkController() override; // vtable[0]
	virtual ~CAI_DynamicLinkController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void InputTurnOn(inputdata_t *param_1); // size[262]
	void InputTurnOff(inputdata_t *param_1); // size[264]
	void InputSetAllowed(inputdata_t *param_1); // size[248]
	void InputSetInvert(inputdata_t *param_1); // size[250]
	void GenerateLinksFromVolume(); // size[981]
};
