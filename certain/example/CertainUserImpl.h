
/*
* Tencent is pleased to support the open source community by making PaxosStore available.
* Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
* Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
* https://opensource.org/licenses/BSD-3-Clause
* Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



#ifndef CERTAIN_EXAMPLE_SIMPLE_CertainUSERIMPL_H_
#define CERTAIN_EXAMPLE_SIMPLE_CertainUSERIMPL_H_

#include "Certain.h"

class clsCertainUserImpl : public Certain::clsCertainUserBase
{
private:
	Certain::clsConfigure *m_poConf;

public:
	clsCertainUserImpl() : m_poConf(NULL) { }
	~clsCertainUserImpl() { }

	virtual int GetLocalAcceptorID(uint64_t iEntityID,
			uint32_t &iLocalAcceptorID);

	virtual int GetServerID(uint64_t iEntityID,
			uint32_t iAcceptorID, uint32_t &iServerID);

	virtual int InitServerAddr(Certain::clsConfigure *poConf);

	virtual const char *GetCertainConfPath();
};

#endif
