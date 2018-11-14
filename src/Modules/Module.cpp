#include "Module.hpp"

#include <vector>

Modules::Modules()
    : list()
{
}
void Modules::InitAll()
{
    for (const auto& mod : this->list) {
        if (!mod->hasLoaded) {
            mod->Init();
        }
    }
}
void Modules::ShutdownAll()
{
    for (const auto& mod : this->list) {
        mod->Shutdown();
    }
}
void Modules::DeleteAll()
{
    for (auto& mod : this->list) {
        if (mod) {
            delete mod;
            mod = nullptr;
        }
    }
}
Modules::~Modules()
{
    DeleteAll();
    this->list.clear();
}
