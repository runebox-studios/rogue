#include "trie.hpp"
#include <fstream>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
int main()
{
    std::string str[113] = {"Bold","Daring","Clever","Intelligent","Careful","Cautious","Boistrous","Serious","Lighthearted","Funny","Sly","Tricky","Lucky","Selfish","Caring","Benevolent","Peaceful","Pacifist","Brave","Cowardly","Fearsome","Intimidating","Scared","Angry","Vengeful","Sad","Avenging","Bombastic","Manipulative","Controlling","Demanding","Wasteful","Leader","Greedy","Violent","Psychotic","Weak","Masochistic","Fake","Thick Skinned","Questing","Trusting","Prophetic","Disgusting","Ignorant","Arrogant","Adept","Skilled","Masterful","Witty","Focused","Determined","Vigilant","Faithful","Predictable","Unpredictable","Magic","Skilled","Dasterdly","Devious","Duranged","Pious","Dangerous","Dashing","Dynamic","Dextrious","Indecent","Courageous","Empowered","Charming","Adventerous","Dumb","Creative","Intuative","Imaginative","Crazed","Paranoid","Insane","Optimistic","Willing","Commited","Innovative","Annoying","Untolerable","Apathetic","Apologetic","Pathetic","Polite","Emotional","Powerful","Doubtful","Friendly","Graceful","Generous","Saintly","Loving","Lovable","Likeable","Kind","Knowledgable","Nice","Positive","Persistent","Querying","Quick","Respectable","Righteous","Resilent","Speculative","Stealthy","Cunning","Wild","Wombo"};

    trie<std::string> triehard;

  for(int i=0;i<113;i++)
    {
        triehard.insert(str[i]);

    
    }
bool end=false;
const std::string quit="Quit";
const std::string add="Add";
const std::string all="All";
std::string in="";
while(!end){
     std::cin>>in;
if(in.compare("Quit")==false){//when true compare returns 0 for some reason
std::cout<<"Great. Ending program"<<std::endl;
end=true;}else
if(in.compare("Add")==false){
std::cout<<"Great. Please enter a string to  add"<<std::endl;
std::cin>>in;
	triehard.insert(in);
	}
if(in.compare("All")==false){
	auto candidates =triehard.list();
for(int i=0;i<candidates.size();i++){
	std::cout<<*candidates[i]<<' '<<std::endl;
}
}
else{

	auto candidates = triehard.complete(in);
	for(int i=0;i<candidates.size();i++){
    	std::cout<<*candidates[i]<<' '<<std::endl;
	}
}
}
if(end==true){
std::string name="Dict-";
name=name+ std::to_string(triehard.size());
name=name+".text";
std::ofstream file(name);
auto candidates= triehard.list();
for(int i=0;i<candidates.size();i++){
	file<<*candidates[i]<<' '<<std::endl;
} 
}

}

