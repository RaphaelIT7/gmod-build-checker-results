// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CEnvAmbientLight : public CSpatialEntity
{
public:
	virtual ~CEnvAmbientLight() override; // vtable[0]
	virtual ~CEnvAmbientLight() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetColor(inputdata_t *param_1); // size[456]
	void GetBaseMap(); // size[10]
	void SetColor(Vector *param_1); // size[41]
};
