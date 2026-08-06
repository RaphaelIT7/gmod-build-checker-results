// Generated header

class CPathKeyFrame : public CLogicalEntity
{
public:
	virtual ~CPathKeyFrame() override; // vtable[0]
	virtual ~CPathKeyFrame() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[10]
	void CalculateFrameDuration(); // size[368]
	void Link(); // size[136]
	void SetKeyAngles(QAngle param_1); // size[11]
	void NextKey(int param_1); // size[76]
	void InsertNewKey(Vector param_1, QAngle param_2); // size[402]
};
