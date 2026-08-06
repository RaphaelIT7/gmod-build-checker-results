// Generated header

class CPathKeyFrame : public CLogicalEntity
{
public:
	virtual ~CPathKeyFrame() override; // vtable[0]
	virtual ~CPathKeyFrame() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[0]
	void CalculateFrameDuration(); // size[0]
	void Link(); // size[0]
	void SetKeyAngles(); // size[0]
	void NextKey(); // size[0]
	void InsertNewKey(); // size[0]
};
