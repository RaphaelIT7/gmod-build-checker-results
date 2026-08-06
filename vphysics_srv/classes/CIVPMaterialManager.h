// Generated header

class CIVPMaterialManager : public IVP_Material_Manager
{
public:
	virtual ~CIVPMaterialManager() override; // vtable[0]
	virtual ~CIVPMaterialManager() override; // vtable[1]
	virtual void get_material_by_index(IVP_Real_Object *param_1, IVP_U_Point *param_2, intparam_3) override; // vtable[2]
	virtual void get_friction_factor(IVP_Contact_Situation *param_1) override; // vtable[3]
	virtual void get_elasticity(IVP_Contact_Situation *param_1) override; // vtable[4]

	CIVPMaterialManager(); // size[124]
	void RemapIVPMaterialIndex(intparam_1); // size[21]
	void SetPropMap(int *param_1, intparam_2); // size[214]
};
