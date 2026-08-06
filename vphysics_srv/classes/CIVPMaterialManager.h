// Generated header

class CIVPMaterialManager : public IVP_Material_Manager
{
public:
	virtual ~CIVPMaterialManager() override; // vtable[0]
	virtual ~CIVPMaterialManager() override; // vtable[1]
	virtual void get_material_by_index() override; // vtable[2]
	virtual void get_friction_factor() override; // vtable[3]
	virtual void get_elasticity() override; // vtable[4]

	CIVPMaterialManager(); // size[0]
	void RemapIVPMaterialIndex(); // size[0]
	void SetPropMap(); // size[0]
};
