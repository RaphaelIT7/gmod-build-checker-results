// Generated header

class CLogicMeasureMovement : public CLogicalEntity
{
public:
	virtual ~CLogicMeasureMovement() override; // vtable[0]
	virtual ~CLogicMeasureMovement() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetTargetScale(inputdata_t *param_1); // size[33]
	void InputDisable(inputdata_t *param_1); // size[58]
	void InputEnable(inputdata_t *param_1); // size[59]
	void GetBaseMap(); // size[10]
	void SetMeasureTarget(char *param_1); // size[220]
	void MeasureThink(); // size[1209]
	void SetMeasureReference(char *param_1); // size[169]
	void InputSetMeasureReference(inputdata_t *param_1); // size[128]
	void SetTarget(char *param_1); // size[169]
	void InputSetTarget(inputdata_t *param_1); // size[128]
	void SetTargetReference(char *param_1); // size[169]
	void InputSetMeasureTarget(inputdata_t *param_1); // size[186]
	void InputSetTargetReference(inputdata_t *param_1); // size[128]
};
