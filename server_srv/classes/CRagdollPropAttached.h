// Generated header

class CRagdollPropAttached : public CRagdollProp
{
public:
	virtual ~CRagdollPropAttached() override; // vtable[0]
	virtual ~CRagdollPropAttached() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void VPhysicsUpdate() override; // vtable[161]

	void GetBaseMap(); // size[0]
	void DetachOnNextUpdate(); // size[0]
	void Detach(); // size[0]
	void InitRagdollAttached(); // size[0]
};
