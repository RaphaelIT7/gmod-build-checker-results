// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CPhysImpact : public CPointEntity
{
public:
	virtual ~CPhysImpact() override; // vtable[0]
	virtual ~CPhysImpact() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void PointAtEntity(); // size[39]
	void InputImpact(inputdata_t *param_1); // size[218]
	void GetBaseMap(); // size[10]
};
