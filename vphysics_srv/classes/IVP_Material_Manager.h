// Generated header

class IVP_Material_Manager
{
public:
	virtual ~IVP_Material_Manager(); // vtable[0]
	virtual ~IVP_Material_Manager(); // vtable[1]
	virtual void get_material_by_index(IVP_Real_Object *param_1, IVP_U_Point *param_2, intparam_3); // vtable[2]
	virtual void get_friction_factor(IVP_Contact_Situation *param_1); // vtable[3]
	virtual void get_elasticity(IVP_Contact_Situation *param_1); // vtable[4]
	virtual void get_damping(IVP_Contact_Situation *param_1); // vtable[5]
	virtual void get_adhesion(IVP_Contact_Situation *param_1); // vtable[6]
	virtual void environment_will_be_deleted(IVP_Environment *param_1); // vtable[7]

	void get_material_by_index(IVP_Real_Object *param_1, IVP_U_Point *param_2, intparam_3); // size[21]
	_GLOBAL__sub_I_IVP_Material_Manager(); // size[1]
	IVP_Material_Manager(IVP_BOOLparam_1); // size[20]
};
