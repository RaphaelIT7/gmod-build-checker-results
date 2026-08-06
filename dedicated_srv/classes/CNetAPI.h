// Generated header

class CNetAPI : public INetAPI
{
public:
	virtual void NetAdrToSockAddr(netadr_s *param_1, sockaddr *param_2); // vtable[0]
	virtual void SockAddrToNetAdr(sockaddr *param_1, netadr_s *param_2); // vtable[1]
	virtual void AdrToString(netadr_s *param_1); // vtable[2]
	virtual void StringToAdr(char *param_1, netadr_s *param_2); // vtable[3]
	virtual void GetSocketAddress(intparam_1, netadr_s *param_2); // vtable[4]
	virtual void CompareAdr(netadr_s *param_1, netadr_s *param_2); // vtable[5]
	virtual void GetLocalIP(netadr_s *param_1); // vtable[6]
};
