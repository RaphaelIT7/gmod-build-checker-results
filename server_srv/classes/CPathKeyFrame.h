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
	void CalculateFrameDuration(); // size[40]
	void Link(); // size[104]
	void SetKeyAngles(QAngle param_1); // size[62]
	void NextKey(int param_1); // size[10]
	void PrevKey(int param_1); // size[121]
	void InsertNewKey(Vector param_1, QAngle param_2); // size[402]
};
