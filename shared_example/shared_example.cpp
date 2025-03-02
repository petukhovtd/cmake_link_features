#include <shared_example/shared_example.h>

#include <static_example/static_example.h>

#include <iostream>

namespace shared_example {

void UseStaticWorkWithIntrenal() { static_example::StaticWorkWithInternal(); }

void UseStaticWork() { static_example::StaticWork(); }

void SharedWork() { std::cout << "I'm dynamic work!\n"; }

} // namespace shared_example
