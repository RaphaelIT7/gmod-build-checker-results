// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CEnvExplosion : public CPointEntity
{
public:
	virtual ~CEnvExplosion() override; // vtable[0]
	virtual ~CEnvExplosion() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void Smoke(); // size[23]
	void InputExplode(inputdata_t *param_1); // size[155]
	void GetBaseMap(); // size[10]
};
