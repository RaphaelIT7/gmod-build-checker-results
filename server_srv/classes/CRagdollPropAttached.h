// Generated header

class CRagdollPropAttached : public CRagdollProp
{
public:
	virtual ~CRagdollPropAttached() override; // vtable[0]
	virtual ~CRagdollPropAttached() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]

	void GetBaseMap(); // size[10]
	void DetachOnNextUpdate(); // size[15]
	void Detach(); // size[110]
	void InitRagdollAttached(IPhysicsObject *param_1, Vector *param_2, intparam_3, matrix3x4_t *param_4, matrix3x4_t *param_5, floatparam_6, intparam_7, CBaseAnimating *param_8, intparam_9, Vector *param_10, intparam_11, Vector *param_12); // size[1505]
};
