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

#include <alibabacloud/vpc/model/DescribeBandwidthPackagePublicIpMonitorDataRequest.h>

using AlibabaCloud::Vpc::Model::DescribeBandwidthPackagePublicIpMonitorDataRequest;

DescribeBandwidthPackagePublicIpMonitorDataRequest::DescribeBandwidthPackagePublicIpMonitorDataRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeBandwidthPackagePublicIpMonitorData")
{}

DescribeBandwidthPackagePublicIpMonitorDataRequest::~DescribeBandwidthPackagePublicIpMonitorDataRequest()
{}

long DescribeBandwidthPackagePublicIpMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeBandwidthPackagePublicIpMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getAllocationId()const
{
	return allocationId_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setParameter("AllocationId", allocationId);
}

std::string DescribeBandwidthPackagePublicIpMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeBandwidthPackagePublicIpMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBandwidthPackagePublicIpMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

