#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    map<string,string> hash;
    hash["MIT"] = "Massachusetts Institute of Technology",
    hash["NUS"] = "National University of Singapore",
    hash["UNICEF"] = "United Nations Children's Fund",
    hash["WHO"] = "World Health Organization",
    hash["UBC"] = "University of British Columbia",
    hash["NTU"] = "Nanyang Technological University",
    hash["ARWU"] = "Academic Ranking of World Universities",
    hash["ISCS"] = "Indo-Soviet Cultural Society",
    hash["INTELSAT"] = "International Telecommunication Satellite",
    hash["INSDOC"] = "Indian National Scientific Documentation Centre",
    hash["INTERFEET"] = "International Force of East Timor",
    hash["LLB"] = "Bachelor of Law",
    hash["LLM"] = "Master of Law",
    hash["LLD"] = "Doctor of Law",
    hash["LPA"] = "Loss Prevention Association of India",
    hash["UCSD"] = "University of California, San Diego",
    hash["ASEAN"] = "Association of Southeast Asian Nations",
    hash["BBC"] = "British Broadcasting Corporation",
    hash["NAFTA"] = "North American Free Trade Agreement",
    hash["HKUST"] = "Hong Kong University of Science and Technology",
    hash["LTBT"] = "Limited Test Ban Treaty",
    hash["CTBT"] = "Comprehensive Nuclear Test Ban Treaty",
    hash["NPT"] = "Nuclear Non-proliferation Treaty",
    hash["PTBT"] = "Partial Test Ban Treaty",
    hash["SSN"] = "Social Security number",
    hash["UNESCO"] = "United Nations Educational, Scientific and Cultural Organization",
    hash["IBE"] = "International Bureau of Education",
    hash["CISCE"] = "Council for the Indian School Certificate Examinations",
    hash["TWA"] = "Trans World Airlines",
    hash["SAPARD"] = "Special Accession Programme for Agriculture and Rural Development",
    hash["CFCU"] = "Central Financing and Contracting Unit",
    hash["SEA"] = "Single European Act";
    int n;
    cin >> n;
    string str;
    getchar();
    for(int i = 0; i < n; i++) getline(cin, str);
    while(n--){
        getline(cin, str);
        cout << hash[str] << endl;
    }
    return 0;
}