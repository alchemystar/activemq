/*
* Copyright 2006 The Apache Software Foundation or its licensors, as
* applicable.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef ConnectionInfo_hpp_
#define ConnectionInfo_hpp_

#include <string>
#include "command/BaseCommand.hpp"
    
#include "command/ConnectionId.hpp"
#include "command/BrokerId.hpp"

#include "util/ifr/ap.hpp"
#include "util/ifr/p.hpp"

namespace apache
{
  namespace activemq
  {
    namespace client
    {
      namespace command
      {
        using namespace ifr;
        using namespace std;
        using namespace apache::activemq::client;

/*
 *
 *  Marshalling code for Open Wire Format for ConnectionInfo
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class ConnectionInfo : public BaseCommand
{
private:
    p<ConnectionId> connectionId ;
    p<string> clientId ;
    p<string> password ;
    p<string> userName ;
    ap<BrokerId> brokerPath ;

public:
    const static int TYPE = 3;

public:
    ConnectionInfo() ;
    virtual ~ConnectionInfo() ;

    virtual int getCommandType() ;

    virtual p<ConnectionId> getConnectionId() ;
    virtual void setConnectionId(p<ConnectionId> connectionId) ;

    virtual p<string> getClientId() ;
    virtual void setClientId(p<string> clientId) ;

    virtual p<string> getPassword() ;
    virtual void setPassword(p<string> password) ;

    virtual p<string> getUserName() ;
    virtual void setUserName(p<string> userName) ;

    virtual ap<BrokerId> getBrokerPath() ;
    virtual void setBrokerPath(ap<BrokerId> brokerPath) ;


} ;

/* namespace */
      }
    }
  }
}

#endif /*ConnectionInfo_hpp_*/
