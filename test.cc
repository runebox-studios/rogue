#include "trie.hpp"

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
    std::string in;
    std::cin>>in;
auto candidates = triehard.complete(in);
for(int i=0;i<candidates.size();i++){
    std::cout<<*candidates[i]<<' '<<std::endl;
}
   
       
   
}
