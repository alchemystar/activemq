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
#include "marshal/TransactionInfoMarshaller.hpp"

using namespace apache::activemq::client::marshal;

/*
 *  Marshalling code for Open Wire Format for TransactionInfo
 *
 * NOTE!: This file is autogenerated - do not modify!
 *        if you need to make a change, please see the Groovy scripts in the
 *        activemq-core module
 */

TransactionInfoMarshaller::TransactionInfoMarshaller()
{
    // no-op
}

TransactionInfoMarshaller::~TransactionInfoMarshaller()
{
    // no-op
}



IDataStructure* TransactionInfoMarshaller::createObject() 
{
    return new TransactionInfo();
}

char TransactionInfoMarshaller::getDataStructureType() 
{
    return TransactionInfo.ID_TransactionInfo;
}

    /* 
     * Un-marshal an object instance from the data input stream
     */ 
void TransactionInfoMarshaller::unmarshal(ProtocolFormat& wireFormat, Object o, BinaryReader& dataIn, BooleanStream& bs) 
{
    base.unmarshal(wireFormat, o, dataIn, bs);

    TransactionInfo& info = (TransactionInfo&) o;
        info.setConnectionId((org.apache.activemq.command.ConnectionId) tightUnmarsalCachedObject(wireFormat, dataIn, bs));
        info.setTransactionId((org.apache.activemq.command.TransactionId) tightUnmarsalCachedObject(wireFormat, dataIn, bs));
        info.setType(dataIn.readByte());

}


/*
 * Write the booleans that this object uses to a BooleanStream
 */
int TransactionInfoMarshaller::marshal1(ProtocolFormat& wireFormat, Object& o, BooleanStream& bs) {
    TransactionInfo& info = (TransactionInfo&) o;

    int rc = base.marshal1(wireFormat, info, bs);
    rc += marshal1CachedObject(wireFormat, info.getConnectionId(), bs);
    rc += marshal1CachedObject(wireFormat, info.getTransactionId(), bs);
    
    return rc + 1;
}

/* 
 * Write a object instance to data output stream
 */
void TransactionInfoMarshaller::marshal2(ProtocolFormat& wireFormat, Object& o, BinaryWriter& dataOut, BooleanStream& bs) {
    base.marshal2(wireFormat, o, dataOut, bs);

    TransactionInfo& info = (TransactionInfo&) o;
    marshal2CachedObject(wireFormat, info.getConnectionId(), dataOut, bs);
    marshal2CachedObject(wireFormat, info.getTransactionId(), dataOut, bs);
    DataStreamMarshaller.writeByte(info.getType(), dataOut);

}
