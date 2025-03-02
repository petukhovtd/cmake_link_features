#include <static_example/static_example.h>

#include <static_internal.h>

#include <iostream>

namespace static_example {

void StaticWork() { std::cout << "I'm static work!\n"; }

void StaticWorkWithInternal()
{
    static_internal::StaticInternalWork();
}

} // namespace static_example
