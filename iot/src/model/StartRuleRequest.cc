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

#include <alibabacloud/iot/model/StartRuleRequest.h>

using AlibabaCloud::Iot::Model::StartRuleRequest;

StartRuleRequest::StartRuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "StartRule")
{}

StartRuleRequest::~StartRuleRequest()
{}

long StartRuleRequest::getRuleId()const
{
	return ruleId_;
}

void StartRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

std::string StartRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

