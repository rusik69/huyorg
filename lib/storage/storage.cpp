#include "storage.h"

storage::~storage() {
	slaves_map.clear();
	pods_map.clear();
	containers_map.clear();
}

int storage::set_slave(std::string key, std::unordered_map<std::string, std::string> value) {
	this->slaves_map[key] = value;
    return 0;
}

int storage::set_pod(std::string key, std::unordered_map<std::string, std::string> value) {
	this->pods_map[key] = value;
    return 0;
}

int storage::set_container(std::string key, std::unordered_map<std::string, std::string> value) {
	this->slaves_map[key] = value;
    return 0;
}

std::unordered_map<std::string, std::string> storage::get_slave(std::string key) {
	return this->slaves_map[key];
}

std::unordered_map<std::string, std::string> storage::get_pod(std::string key) {
	return this->pods_map[key];
}

std::unordered_map<std::string, std::string> storage::get_container(std::string key) {
	return this->containers_map[key];
}

std::list<std::string> get_slaves_list(){
	std::list<std::string> slaves_list;
	for(auto const &interator: this->slaves_list){
		slaves_list.push_back(iterator->first);
	}
	return slaves_list;
}

std::list<std::string> get_pods_list(){
	std::list<std::string> pods_list;
	for(auto const &interator: this->pods_list){
		pods_list.push_back(iterator->first);
	}
	return pods_list;
}

std::list<std::string> get_containers_list(){
	std::list<std::string> containers_list;
	for(auto const &interator: this->containers_list){
		containers_list.push_back(iterator->first);
	}
	return containers_list;
}
