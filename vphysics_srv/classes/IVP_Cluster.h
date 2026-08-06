// Generated header

class IVP_Cluster : public IVP_Object
{
public:
	virtual ~IVP_Cluster() override; // vtable[0]
	virtual ~IVP_Cluster() override; // vtable[1]

	IVP_Cluster(IVP_Cluster *param_1, IVP_Template_Cluster *param_2); // size[109]
	IVP_Cluster(IVP_Environment *param_1); // size[42]
	void add_object(IVP_Object *param_1); // size[40]
	void remove_object(IVP_Object *param_1); // size[42]
	void get_first_object_of_cluster(); // size[11]
	void get_next_object_in_cluster(IVP_Object *param_1); // size[11]
};
