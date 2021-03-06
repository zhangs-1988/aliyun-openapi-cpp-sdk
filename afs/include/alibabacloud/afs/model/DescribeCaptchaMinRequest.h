/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAMINREQUEST_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAMINREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeCaptchaMinRequest : public RpcServiceRequest
			{

			public:
				DescribeCaptchaMinRequest();
				~DescribeCaptchaMinRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getConfigName()const;
				void setConfigName(const std::string& configName);
				std::string getTime()const;
				void setTime(const std::string& time);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				long resourceOwnerId_;
				std::string sourceIp_;
				std::string configName_;
				std::string time_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAMINREQUEST_H_