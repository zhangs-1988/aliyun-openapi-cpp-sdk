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

#include <alibabacloud/rtc/model/GetTaskStatusRequest.h>

using AlibabaCloud::Rtc::Model::GetTaskStatusRequest;

GetTaskStatusRequest::GetTaskStatusRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetTaskStatus")
{}

GetTaskStatusRequest::~GetTaskStatusRequest()
{}

std::string GetTaskStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void GetTaskStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string GetTaskStatusRequest::getPopProduct()const
{
	return popProduct_;
}

void GetTaskStatusRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long GetTaskStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetTaskStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetTaskStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetTaskStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string GetTaskStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void GetTaskStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long GetTaskStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTaskStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetTaskStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetTaskStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetTaskStatusRequest::getVersion()const
{
	return version_;
}

void GetTaskStatusRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string GetTaskStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetTaskStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetTaskStatusRequest::getCallerType()const
{
	return callerType_;
}

void GetTaskStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool GetTaskStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetTaskStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool GetTaskStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetTaskStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string GetTaskStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTaskStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool GetTaskStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetTaskStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string GetTaskStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetTaskStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string GetTaskStatusRequest::getRequestId()const
{
	return requestId_;
}

void GetTaskStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string GetTaskStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void GetTaskStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string GetTaskStatusRequest::getAppId()const
{
	return appId_;
}

void GetTaskStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetTaskStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetTaskStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string GetTaskStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetTaskStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string GetTaskStatusRequest::getChannelId()const
{
	return channelId_;
}

void GetTaskStatusRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

long GetTaskStatusRequest::getTaskId()const
{
	return taskId_;
}

void GetTaskStatusRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

long GetTaskStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void GetTaskStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

