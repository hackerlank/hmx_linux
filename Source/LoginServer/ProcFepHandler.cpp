#include "ProcFepHandler.h"
#include "NamesManager.h"
#include "GameService.h"
#include "AccountMgr.h"

ProcFepHandler::ProcFepHandler(void)
{
}


ProcFepHandler::~ProcFepHandler(void)
{
}

void ProcFepHandler::doLoginAccount(zSession* pSession, const NetMsgSS* pMsg,int32 nSize)
{
	GameService::getMe().getAccountMgr().doUserCmd(pSession, pMsg, nSize);
}
