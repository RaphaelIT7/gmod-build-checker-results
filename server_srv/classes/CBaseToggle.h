// Generated header

class CBaseToggle : public CBaseEntity
{
public:
	virtual ~CBaseToggle() override; // vtable[0]
	virtual ~CBaseToggle() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void KeyValue(char *param_1, float param_2) override; // vtable[31]
	virtual void MoveDone() override; // vtable[47]
	virtual void GetDelay() override; // vtable[75]
	virtual void IsLockedByMaster() override; // vtable[119]
	virtual void GetGroundVelocityToApply(Vector *param_1) override; // vtable[149]
	virtual void KeyValue(char *param_1, Vector param_2); // vtable[246]

	void GetBaseMap(); // size[10]
	CBaseToggle(); // size[26]
	void LinearMove(Vector *param_1, float param_2); // size[41]
	void LinearMoveDone(); // size[52]
	void AngularMove(QAngle *param_1, float param_2); // size[89]
	void AngularMoveDone(); // size[66]
	void AxisValue(int param_1, QAngle *param_2); // size[67]
	void AxisDir(); // size[121]
	void AxisDelta(int param_1, QAngle *param_2, QAngle *param_3); // size[90]
};
