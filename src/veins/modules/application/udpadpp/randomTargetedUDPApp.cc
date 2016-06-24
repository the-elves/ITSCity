//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "randomTargetedUDPApp.h"
#include <map>
#include<string>
#include<RoutingTable.h>
#include"../../mobility/traci/TraCIScenarioManager.h"
Define_Module(RandomTargetedUDPApp);


RandomTargetedUDPApp::RandomTargetedUDPApp(){

}

RandomTargetedUDPApp::~RandomTargetedUDPApp(){

}
IPvXAddress RandomTargetedUDPApp::chooseDestAddr(){
    Veins::TraCIScenarioManager *manager = check_and_cast<Veins::TraCIScenarioManager*> ( this->getParentModule()->getParentModule()->getModuleByPath(".manager") );
    std::cout<<this->getFullPath()<<std::endl;
    ASSERT(manager);
    int dummy;
    const std::map<std::string,cModule*> &hosts = manager->getManagedHosts();

    std::map<std::string, cModule*>::const_iterator  it = hosts.begin();
    std::cout<<"No. of hosts "<<hosts.size()<<std::endl;
    if(simTime()>14){
        int i =  intrand(hosts.size()-1);
        while(i>1 && it != hosts.end()){
            it++;
            i--;
        }
        ASSERT(it!=hosts.end());
        std::cout<<"Chosen host = "<<it->second->getName()<<std::endl;
        RoutingTable *rt = static_cast<RoutingTable*>(it->second->getModuleByPath(".routingTable"));
        ASSERT(rt);
        std::cout<<"#$#$"<<rt->getRouterId().str()<<std::endl;
        return rt->getRouterId();
   }else{
       RoutingTable *rt = static_cast<RoutingTable*> (this->getParentModule()->getModuleByPath(".routingTable"));
       std::cout<<"Returning Self Address"<<std::endl;
       return rt->getRouterId();

   }
}
